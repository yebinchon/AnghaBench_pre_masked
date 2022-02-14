
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct smb_rqst {int rq_nvec; struct kvec* rq_iov; } ;
struct kvec {scalar_t__ iov_len; TYPE_1__* iov_base; } ;
struct TCP_Server_Info {int dummy; } ;
struct TYPE_6__ {int Tid; int WordCount; int smb_buf_length; } ;
struct TYPE_5__ {char* Data; TYPE_2__ hdr; int EchoCount; } ;
typedef TYPE_1__ ECHO_REQ ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (struct TCP_Server_Info*,struct smb_rqst*,int *,int ,struct TCP_Server_Info*,int) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int,TYPE_2__*) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int ,int ,int *,void**) ;

int
FUNC_8(struct TCP_Server_Info *VAR_2)
{
 ECHO_REQ *VAR_3;
 int VAR_4 = 0;
 struct kvec VAR_5;
 struct smb_rqst VAR_6 = { .rq_iov = &VAR_5,
     .rq_nvec = 1 };

 FUNC_1(1, "In echo request");

 VAR_4 = FUNC_7(VAR_0, 0, ((void*)0), (void **)&VAR_3);
 if (VAR_4)
  return VAR_4;


 VAR_3->hdr.Tid = 0xffff;
 VAR_3->hdr.WordCount = 1;
 FUNC_6(1, &VAR_3->EchoCount);
 FUNC_5(1, &VAR_3->hdr);
 VAR_3->Data[0] = 'a';
 FUNC_4(VAR_3, 3);
 VAR_5.iov_base = VAR_3;
 VAR_5.iov_len = FUNC_0(VAR_3->hdr.smb_buf_length) + 4;

 VAR_4 = FUNC_2(VAR_2, &VAR_6, ((void*)0), VAR_1,
        VAR_2, 1);
 if (VAR_4)
  FUNC_1(1, "Echo request failed: %d", VAR_4);

 FUNC_3(VAR_3);

 return VAR_4;
}
