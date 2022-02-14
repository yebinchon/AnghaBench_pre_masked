
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int DataCount; int DataOffset; int TotalDataCount; } ;
struct TYPE_3__ {int Protocol; } ;
struct smb_t2_rsp {TYPE_2__ t2_rsp; TYPE_1__ hdr; } ;
struct smb_hdr {int smb_buf_length; } ;
typedef unsigned int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (struct smb_hdr*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,unsigned int) ;
 int FUNC_6 (unsigned int,struct smb_hdr*) ;
 int FUNC_7 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_8(char *VAR_5, struct smb_hdr *VAR_6)
{
 struct smb_t2_rsp *VAR_7 = (struct smb_t2_rsp *)VAR_5;
 struct smb_t2_rsp *VAR_8 = (struct smb_t2_rsp *)VAR_6;
 char *VAR_9;
 char *VAR_10;
 int VAR_11;
 unsigned int VAR_12, VAR_13;
 __u16 VAR_14, VAR_15, VAR_16;

 VAR_15 = FUNC_4(&VAR_7->t2_rsp.TotalDataCount);
 VAR_14 = FUNC_4(&VAR_8->t2_rsp.TotalDataCount);

 if (VAR_14 != VAR_15)
  FUNC_1(1, "total data count of primary and secondary t2 differ "
   "source=%hu target=%hu", VAR_15, VAR_14);

 VAR_13 = FUNC_4(&VAR_8->t2_rsp.DataCount);

 VAR_11 = VAR_14 - VAR_13;

 if (VAR_11 < 0) {
  FUNC_1(1, "Server sent too much data. tgt_total_cnt=%hu "
   "total_in_tgt=%hu", VAR_14, VAR_13);
  return -VAR_2;
 }

 if (VAR_11 == 0) {

  FUNC_1(1, "no more data remains");
  return 0;
 }

 VAR_16 = FUNC_4(&VAR_7->t2_rsp.DataCount);
 if (VAR_11 < VAR_16)
  FUNC_1(1, "transact2 2nd response contains too much data");


 VAR_9 = (char *)&VAR_8->hdr.Protocol +
    FUNC_4(&VAR_8->t2_rsp.DataOffset);


 VAR_10 = (char *)&VAR_7->hdr.Protocol +
    FUNC_4(&VAR_7->t2_rsp.DataOffset);

 VAR_9 += VAR_13;

 VAR_13 += VAR_16;

 if (VAR_13 > VAR_4) {
  FUNC_1(1, "coalesced DataCount too large (%u)", VAR_13);
  return -VAR_2;
 }
 FUNC_7(VAR_13, &VAR_8->t2_rsp.DataCount);


 VAR_12 = FUNC_3(VAR_6);
 VAR_12 += VAR_16;

 if (VAR_12 > VAR_4) {
  FUNC_1(1, "coalesced BCC too large (%u)", VAR_12);
  return -VAR_2;
 }
 FUNC_6(VAR_12, VAR_6);

 VAR_12 = FUNC_0(VAR_6->smb_buf_length);
 VAR_12 += VAR_16;

 if (VAR_12 > VAR_0 + VAR_3 - 4) {
  FUNC_1(1, "coalesced BCC exceeds buffer size (%u)", VAR_12);
  return -VAR_1;
 }
 VAR_6->smb_buf_length = FUNC_2(VAR_12);


 FUNC_5(VAR_9, VAR_10, VAR_16);

 if (VAR_11 != VAR_16) {

  FUNC_1(1, "waiting for more secondary responses");
  return 1;
 }


 FUNC_1(1, "found the last secondary response");
 return 0;
}
