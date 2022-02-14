
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smb_rqst {TYPE_1__* rq_iov; } ;
struct TYPE_5__ {scalar_t__ Reserved; int SequenceNumber; } ;
struct TYPE_6__ {char* SecuritySignature; TYPE_2__ Sequence; } ;
struct smb_hdr {scalar_t__ Command; TYPE_3__ Signature; } ;
struct smb_com_lock_req {int LockType; } ;
struct TCP_Server_Info {int srv_mutex; int session_estab; } ;
typedef int __u32 ;
struct TYPE_4__ {scalar_t__ iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 unsigned int FUNC_1 (struct smb_rqst*,struct TCP_Server_Info*,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct smb_rqst *VAR_4,
     struct TCP_Server_Info *VAR_5,
     __u32 VAR_6)
{
 unsigned int VAR_7;
 char VAR_8[8];
 char VAR_9[20];
 struct smb_hdr *VAR_10 = (struct smb_hdr *)VAR_4->rq_iov[0].iov_base;

 if (VAR_10 == ((void*)0) || VAR_5 == ((void*)0))
  return -VAR_1;

 if (!VAR_5->session_estab)
  return 0;

 if (VAR_10->Command == VAR_3) {
  struct smb_com_lock_req *VAR_11 =
   (struct smb_com_lock_req *)VAR_10;
     if (VAR_11->LockType & VAR_2)
   return 0;
 }





 if (FUNC_3(VAR_10->Signature.SecuritySignature, "BSRSPYL ", 8) == 0)
  FUNC_0(1, "dummy signature received for smb command 0x%x",
   VAR_10->Command);



 FUNC_4(VAR_8, VAR_10->Signature.SecuritySignature, 8);

 VAR_10->Signature.Sequence.SequenceNumber =
     FUNC_2(VAR_6);
 VAR_10->Signature.Sequence.Reserved = 0;

 FUNC_5(&VAR_5->srv_mutex);
 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_9);
 FUNC_6(&VAR_5->srv_mutex);

 if (VAR_7)
  return VAR_7;




 if (FUNC_3(VAR_8, VAR_9, 8))
  return -VAR_0;
 else
  return 0;

}
