
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct iscsi_session {int lock; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_async {int flags; scalar_t__ async_event; void* param3; void* param2; void* param1; int async_vcode; void* max_cmdsn; void* exp_cmdsn; int lun; int opcode; } ;
struct cqe {int dummy; } ;
struct TYPE_3__ {int resp_hdr; } ;
struct bnx2i_conn {TYPE_2__* cls_conn; TYPE_1__ gen_pdu; } ;
struct bnx2i_async_msg {scalar_t__ async_event; int param3; int param2; int param1; int async_vcode; int max_cmd_sn; int exp_cmd_sn; int lun; int op_code; } ;
struct TYPE_4__ {int dd_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct iscsi_hdr*,int *,int ) ;
 int FUNC_1 (struct bnx2i_conn*) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct iscsi_async*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct iscsi_session *VAR_2,
         struct bnx2i_conn *VAR_3,
         struct cqe *VAR_4)
{
 struct bnx2i_async_msg *VAR_5;
 struct iscsi_async *VAR_6;
 u8 VAR_7;

 FUNC_1(VAR_3);

 VAR_5 = (struct bnx2i_async_msg *)VAR_4;
 VAR_7 = VAR_5->async_event;

 if (VAR_7 == VAR_0) {
  FUNC_4(VAR_1, VAR_3->cls_conn->dd_data,
      "async: scsi events not supported\n");
  return;
 }

 FUNC_7(&VAR_2->lock);
 VAR_6 = (struct iscsi_async *) &VAR_3->gen_pdu.resp_hdr;
 FUNC_6(VAR_6, 0, sizeof(struct iscsi_hdr));
 VAR_6->opcode = VAR_5->op_code;
 VAR_6->flags = 0x80;

 FUNC_5(&VAR_6->lun, VAR_5->lun, 8);
 VAR_6->exp_cmdsn = FUNC_3(VAR_5->exp_cmd_sn);
 VAR_6->max_cmdsn = FUNC_3(VAR_5->max_cmd_sn);

 VAR_6->async_event = VAR_5->async_event;
 VAR_6->async_vcode = VAR_5->async_vcode;

 VAR_6->param1 = FUNC_2(VAR_5->param1);
 VAR_6->param2 = FUNC_2(VAR_5->param2);
 VAR_6->param3 = FUNC_2(VAR_5->param3);

 FUNC_0(VAR_3->cls_conn->dd_data,
        (struct iscsi_hdr *)VAR_6, ((void*)0), 0);
 FUNC_8(&VAR_2->lock);
}
