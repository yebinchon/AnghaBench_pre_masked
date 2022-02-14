
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct iscsi_task {TYPE_3__* hdr; } ;
struct iscsi_session {int lock; } ;
struct iscsi_nopin {int lun; void* ttt; scalar_t__ itt; int flags; void* exp_cmdsn; void* max_cmdsn; int opcode; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {int dummy; } ;
struct cqe {int dummy; } ;
struct bnx2i_nop_in_msg {int itt; int lun; int ttt; int exp_cmd_sn; int max_cmd_sn; int op_code; } ;
struct TYPE_5__ {int resp_hdr; } ;
struct bnx2i_conn {TYPE_2__ gen_pdu; TYPE_1__* cls_conn; } ;
typedef int itt_t ;
struct TYPE_6__ {scalar_t__ itt; } ;
struct TYPE_4__ {struct iscsi_conn* dd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct iscsi_conn*,struct iscsi_hdr*,int *,int ) ;
 int FUNC_1 (struct bnx2i_conn*) ;
 void* FUNC_2 (int ) ;
 struct iscsi_task* FUNC_3 (struct iscsi_conn*,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct iscsi_nopin*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct iscsi_session *VAR_3,
         struct bnx2i_conn *VAR_4,
         struct cqe *VAR_5)
{
 struct iscsi_conn *VAR_6 = VAR_4->cls_conn->dd_data;
 struct iscsi_task *VAR_7;
 struct bnx2i_nop_in_msg *VAR_8;
 struct iscsi_nopin *VAR_9;
 int VAR_10 = 0;

 VAR_8 = (struct bnx2i_nop_in_msg *)VAR_5;

 FUNC_6(&VAR_3->lock);
 VAR_9 = (struct iscsi_nopin *)&VAR_4->gen_pdu.resp_hdr;
 FUNC_5(VAR_9, 0, sizeof(struct iscsi_hdr));
 VAR_9->opcode = VAR_8->op_code;
 VAR_9->max_cmdsn = FUNC_2(VAR_8->max_cmd_sn);
 VAR_9->exp_cmdsn = FUNC_2(VAR_8->exp_cmd_sn);
 VAR_9->ttt = FUNC_2(VAR_8->ttt);

 if (VAR_8->itt == (u16) VAR_2) {
  FUNC_1(VAR_4);
  VAR_9->itt = VAR_2;
  VAR_10 = 1;
  goto done;
 }


 VAR_7 = FUNC_3(VAR_6,
    (itt_t) (VAR_8->itt & VAR_1));
 if (VAR_7) {
  VAR_9->flags = VAR_0;
  VAR_9->itt = VAR_7->hdr->itt;
  VAR_9->ttt = FUNC_2(VAR_8->ttt);
  FUNC_4(&VAR_9->lun, VAR_8->lun, 8);
 }
done:
 FUNC_0(VAR_6, (struct iscsi_hdr *)VAR_9, ((void*)0), 0);
 FUNC_7(&VAR_3->lock);

 return VAR_10;
}
