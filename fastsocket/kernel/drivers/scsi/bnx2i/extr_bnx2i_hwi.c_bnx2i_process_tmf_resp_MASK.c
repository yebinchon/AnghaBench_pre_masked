
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iscsi_tm_rsp {int response; int itt; void* exp_cmdsn; void* max_cmdsn; int opcode; } ;
struct iscsi_task {TYPE_3__* hdr; } ;
struct iscsi_session {int lock; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {int dummy; } ;
struct cqe {int dummy; } ;
struct bnx2i_tmf_response {int itt; int response; int exp_cmd_sn; int max_cmd_sn; int op_code; } ;
struct TYPE_5__ {int resp_hdr; } ;
struct bnx2i_conn {TYPE_2__ gen_pdu; TYPE_1__* cls_conn; } ;
struct TYPE_6__ {int itt; } ;
struct TYPE_4__ {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_conn*,struct iscsi_hdr*,int *,int ) ;
 void* FUNC_1 (int ) ;
 struct iscsi_task* FUNC_2 (struct iscsi_conn*,int) ;
 int FUNC_3 (struct iscsi_tm_rsp*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iscsi_session *VAR_1,
      struct bnx2i_conn *VAR_2,
      struct cqe *VAR_3)
{
 struct iscsi_conn *VAR_4 = VAR_2->cls_conn->dd_data;
 struct iscsi_task *VAR_5;
 struct bnx2i_tmf_response *VAR_6;
 struct iscsi_tm_rsp *VAR_7;

 VAR_6 = (struct bnx2i_tmf_response *)VAR_3;
 FUNC_4(&VAR_1->lock);
 VAR_5 = FUNC_2(VAR_4,
     VAR_6->itt & VAR_0);
 if (!VAR_5)
  goto done;

 VAR_7 = (struct iscsi_tm_rsp *) &VAR_2->gen_pdu.resp_hdr;
 FUNC_3(VAR_7, 0, sizeof(struct iscsi_hdr));
 VAR_7->opcode = VAR_6->op_code;
 VAR_7->max_cmdsn = FUNC_1(VAR_6->max_cmd_sn);
 VAR_7->exp_cmdsn = FUNC_1(VAR_6->exp_cmd_sn);
 VAR_7->itt = VAR_5->hdr->itt;
 VAR_7->response = VAR_6->response;

 FUNC_0(VAR_4, (struct iscsi_hdr *)VAR_7, ((void*)0), 0);
done:
 FUNC_5(&VAR_1->lock);
 return 0;
}
