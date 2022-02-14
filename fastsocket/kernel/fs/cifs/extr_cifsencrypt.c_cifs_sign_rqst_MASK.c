
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smb_rqst {TYPE_1__* rq_iov; } ;
struct TYPE_5__ {scalar_t__ Reserved; int SequenceNumber; } ;
struct TYPE_6__ {int SecuritySignature; TYPE_2__ Sequence; } ;
struct smb_hdr {int Flags2; TYPE_3__ Signature; } ;
struct TCP_Server_Info {scalar_t__ tcpStatus; int sequence_number; int session_estab; } ;
typedef scalar_t__ __u32 ;
struct TYPE_4__ {scalar_t__ iov_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smb_rqst*,struct TCP_Server_Info*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ,int) ;

int FUNC_4(struct smb_rqst *VAR_3, struct TCP_Server_Info *VAR_4,
     __u32 *VAR_5)
{
 int VAR_6 = 0;
 char VAR_7[20];
 struct smb_hdr *VAR_8 = (struct smb_hdr *)VAR_3->rq_iov[0].iov_base;

 if ((VAR_8 == ((void*)0)) || (VAR_4 == ((void*)0)))
  return -VAR_1;

 if (!(VAR_8->Flags2 & VAR_2) ||
     VAR_4->tcpStatus == VAR_0)
  return VAR_6;

 if (!VAR_4->session_estab) {
  FUNC_2(VAR_8->Signature.SecuritySignature, "BSRSPYL", 8);
  return VAR_6;
 }

 VAR_8->Signature.Sequence.SequenceNumber =
    FUNC_1(VAR_4->sequence_number);
 VAR_8->Signature.Sequence.Reserved = 0;

 *VAR_5 = VAR_4->sequence_number++;
 VAR_4->sequence_number++;

 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_7);
 if (VAR_6)
  FUNC_3(VAR_8->Signature.SecuritySignature, 0, 8);
 else
  FUNC_2(VAR_8->Signature.SecuritySignature, VAR_7, 8);

 return VAR_6;
}
