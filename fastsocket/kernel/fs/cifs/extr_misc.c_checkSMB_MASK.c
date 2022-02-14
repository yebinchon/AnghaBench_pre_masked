
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ CifsError; } ;
struct smb_hdr {scalar_t__ WordCount; int Mid; TYPE_1__ Status; int smb_buf_length; } ;
typedef int __u32 ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int,char*,int,int,...) ;
 scalar_t__ FUNC_3 (struct smb_hdr*,int ) ;
 int FUNC_4 (struct smb_hdr*) ;

int
FUNC_5(char *VAR_1, unsigned int VAR_2)
{
 struct smb_hdr *VAR_3 = (struct smb_hdr *)VAR_1;
 __u16 VAR_4 = VAR_3->Mid;
 __u32 VAR_5 = FUNC_0(VAR_3->smb_buf_length);
 __u32 VAR_6;
 FUNC_2(0, "checkSMB Length: 0x%x, smb_buf_length: 0x%x",
  VAR_2, VAR_5);


 if (VAR_2 < 2 + sizeof(struct smb_hdr)) {
  if ((VAR_2 >= sizeof(struct smb_hdr) - 1)
       && (VAR_3->Status.CifsError != 0)) {

   VAR_3->WordCount = 0;

   return 0;
  } else if ((VAR_2 == sizeof(struct smb_hdr) + 1) &&
    (VAR_3->WordCount == 0)) {
   char *VAR_7 = (char *)VAR_3;


   if (VAR_7[sizeof(struct smb_hdr)] == 0) {







    VAR_7[sizeof(struct smb_hdr)+1] = 0;
    return 0;
   }
   FUNC_1(1, "rcvd invalid byte count (bcc)");
  } else {
   FUNC_1(1, "Length less than smb header size");
  }
  return -VAR_0;
 }


 if (FUNC_3(VAR_3, VAR_4))
  return -VAR_0;
 VAR_6 = FUNC_4(VAR_3);

 if (4 + VAR_5 != VAR_2) {
  FUNC_1(1, "Length read does not match RFC1001 length %d",
    VAR_5);
  return -VAR_0;
 }

 if (4 + VAR_5 != VAR_6) {

  if ((VAR_5 > 64 * 1024) && (VAR_5 > VAR_6)) {

   if (((4 + VAR_5) & 0xFFFF) == (VAR_6 & 0xFFFF))
    return 0;
  }
  FUNC_2(1, "Calculated size %u vs length %u mismatch for mid=%u",
    VAR_6, 4 + VAR_5, VAR_3->Mid);

  if (4 + VAR_5 < VAR_6) {
   FUNC_1(1, "RFC1001 size %u smaller than SMB for mid=%u",
     VAR_5, VAR_3->Mid);
   return -VAR_0;
  } else if (VAR_5 > VAR_6 + 512) {
   FUNC_1(1, "RFC1001 size %u more than 512 bytes larger "
      "than SMB for mid=%u", VAR_5, VAR_3->Mid);
   return -VAR_0;
  }
 }
 return 0;
}
