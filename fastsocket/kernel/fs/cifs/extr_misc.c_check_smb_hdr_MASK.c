
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_hdr {unsigned int Mid; int Flags; scalar_t__ Command; scalar_t__ Protocol; } ;
typedef unsigned int __u16 ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,unsigned int,...) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct smb_hdr *VAR_2, __u16 VAR_3)
{

 if (*(__le32 *) VAR_2->Protocol != FUNC_1(0x424d53ff)) {
  FUNC_0(1, "Bad protocol string signature header 0x%x",
   *(unsigned int *)VAR_2->Protocol);
  return 1;
 }


 if (VAR_3 != VAR_2->Mid) {
  FUNC_0(1, "Mids do not match. received=%u expected=%u",
   VAR_2->Mid, VAR_3);
  return 1;
 }


 if (VAR_2->Flags & VAR_0)
  return 0;


 if (VAR_2->Command == VAR_1)
  return 0;

 FUNC_0(1, "Server sent request, not response. mid=%u", VAR_2->Mid);
 return 1;
}
