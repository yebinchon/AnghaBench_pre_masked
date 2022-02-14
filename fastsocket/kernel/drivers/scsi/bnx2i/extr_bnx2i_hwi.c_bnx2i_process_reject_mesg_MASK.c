
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iscsi_session {int lock; } ;
struct iscsi_reject {void* ffffffff; void* exp_cmdsn; void* max_cmdsn; int dlength; int reason; int opcode; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {int data; } ;
struct cqe {int dummy; } ;
struct bnx2i_reject_msg {int data_length; int exp_cmd_sn; int max_cmd_sn; int reason; int op_code; } ;
struct TYPE_4__ {int resp_hdr; } ;
struct bnx2i_conn {TYPE_2__ gen_pdu; TYPE_1__* cls_conn; } ;
struct TYPE_3__ {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_conn*,struct iscsi_hdr*,int ,int ) ;
 int FUNC_1 (struct bnx2i_conn*,int ,int ) ;
 int FUNC_2 (struct bnx2i_conn*,int) ;
 int FUNC_3 (struct bnx2i_conn*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct iscsi_reject*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct iscsi_session *VAR_1,
          struct bnx2i_conn *VAR_2,
          struct cqe *VAR_3)
{
 struct iscsi_conn *VAR_4 = VAR_2->cls_conn->dd_data;
 struct bnx2i_reject_msg *VAR_5;
 struct iscsi_reject *VAR_6;

 VAR_5 = (struct bnx2i_reject_msg *) VAR_3;
 if (VAR_5->data_length) {
  FUNC_1(VAR_2, VAR_4->data, VAR_5->data_length);
  FUNC_2(VAR_2, 1);
 } else
  FUNC_3(VAR_2);

 FUNC_7(&VAR_1->lock);
 VAR_6 = (struct iscsi_reject *) &VAR_2->gen_pdu.resp_hdr;
 FUNC_6(VAR_6, 0, sizeof(struct iscsi_hdr));
 VAR_6->opcode = VAR_5->op_code;
 VAR_6->reason = VAR_5->reason;
 FUNC_5(VAR_6->dlength, VAR_5->data_length);
 VAR_6->max_cmdsn = FUNC_4(VAR_5->max_cmd_sn);
 VAR_6->exp_cmdsn = FUNC_4(VAR_5->exp_cmd_sn);
 VAR_6->ffffffff = FUNC_4(VAR_0);
 FUNC_0(VAR_4, (struct iscsi_hdr *)VAR_6, VAR_4->data,
        VAR_5->data_length);
 FUNC_8(&VAR_1->lock);
}
