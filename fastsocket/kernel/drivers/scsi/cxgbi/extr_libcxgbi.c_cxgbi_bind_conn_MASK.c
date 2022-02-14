
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct iscsi_tcp_conn {struct cxgbi_conn* dd_data; } ;
struct iscsi_endpoint {struct cxgbi_endpoint* dd_data; } ;
struct iscsi_conn {TYPE_2__* session; struct iscsi_tcp_conn* dd_data; } ;
struct iscsi_cls_session {int dummy; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct cxgbi_sock {int callback_lock; struct iscsi_conn* user_data; int tid; TYPE_1__* cdev; } ;
struct cxgbi_endpoint {struct cxgbi_conn* cconn; int chba; struct cxgbi_sock* csk; } ;
struct cxgbi_conn {struct cxgbi_endpoint* cep; int chba; scalar_t__ task_idx_bits; } ;
struct TYPE_4__ {scalar_t__ cmds_max; } ;
struct TYPE_3__ {int (* csk_ddp_setup_pgidx ) (struct cxgbi_sock*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct iscsi_conn*) ;
 int FUNC_2 (struct iscsi_conn*) ;
 int FUNC_3 (struct iscsi_cls_session*,struct iscsi_cls_conn*,int) ;
 struct iscsi_endpoint* FUNC_4 (int ) ;
 int FUNC_5 (struct iscsi_tcp_conn*) ;
 int FUNC_6 (int,char*,struct iscsi_cls_session*,struct iscsi_cls_conn*,struct iscsi_endpoint*,struct cxgbi_conn*,struct cxgbi_sock*) ;
 int VAR_2 ;
 int FUNC_7 (struct cxgbi_sock*,int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct iscsi_cls_session *VAR_3,
    struct iscsi_cls_conn *VAR_4,
    u64 VAR_5, int VAR_6)
{
 struct iscsi_conn *VAR_7 = VAR_4->dd_data;
 struct iscsi_tcp_conn *VAR_8 = VAR_7->dd_data;
 struct cxgbi_conn *VAR_9 = VAR_8->dd_data;
 struct iscsi_endpoint *VAR_10;
 struct cxgbi_endpoint *VAR_11;
 struct cxgbi_sock *VAR_12;
 int VAR_13;

 VAR_10 = FUNC_4(VAR_5);
 if (!VAR_10)
  return -VAR_1;


 VAR_11 = VAR_10->dd_data;
 VAR_12 = VAR_11->csk;
 VAR_13 = VAR_12->cdev->csk_ddp_setup_pgidx(VAR_12, VAR_12->tid, VAR_2, 0);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_3(VAR_3, VAR_4, VAR_6);
 if (VAR_13)
  return -VAR_1;


 VAR_9->task_idx_bits = (FUNC_0(VAR_7->session->cmds_max - 1)) + 1;

 FUNC_8(&VAR_12->callback_lock);
 VAR_12->user_data = VAR_7;
 VAR_9->chba = VAR_11->chba;
 VAR_9->cep = VAR_11;
 VAR_11->cconn = VAR_9;
 FUNC_9(&VAR_12->callback_lock);

 FUNC_2(VAR_7);
 FUNC_1(VAR_7);

 FUNC_6(1 << VAR_0,
  "cls 0x%p,0x%p, ep 0x%p, cconn 0x%p, csk 0x%p.\n",
  VAR_3, VAR_4, VAR_10, VAR_9, VAR_12);

 FUNC_5(VAR_8);

 return 0;
}
