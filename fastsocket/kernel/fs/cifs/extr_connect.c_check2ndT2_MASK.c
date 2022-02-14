
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int DataCount; int TotalDataCount; } ;
struct smb_t2_rsp {TYPE_1__ t2_rsp; } ;
struct smb_hdr {scalar_t__ Command; int WordCount; } ;
typedef scalar_t__ __u16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(char *VAR_3)
{
 struct smb_hdr *VAR_4 = (struct smb_hdr *)VAR_3;
 struct smb_t2_rsp *VAR_5;
 int VAR_6;
 __u16 VAR_7, VAR_8;

 if (VAR_4->Command != VAR_2)
  return 0;



 if (VAR_4->WordCount != 10) {
  FUNC_1(1, "invalid transact2 word count");
  return -VAR_1;
 }

 VAR_5 = (struct smb_t2_rsp *)VAR_4;

 VAR_7 = FUNC_2(&VAR_5->t2_rsp.TotalDataCount);
 VAR_8 = FUNC_2(&VAR_5->t2_rsp.DataCount);

 if (VAR_7 == VAR_8)
  return 0;
 else if (VAR_7 < VAR_8) {
  FUNC_1(1, "total data %d smaller than data in frame %d",
   VAR_7, VAR_8);
  return -VAR_1;
 }

 VAR_6 = VAR_7 - VAR_8;

 FUNC_1(1, "missing %d bytes from transact2, check next response",
  VAR_6);
 if (VAR_7 > VAR_0) {
  FUNC_0(1, "TotalDataSize %d is over maximum buffer %d",
   VAR_7, VAR_0);
  return -VAR_1;
 }
 return VAR_6;
}
