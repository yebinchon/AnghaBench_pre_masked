
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int srq; } ;
struct ipoib_dev_priv {int pd; TYPE_1__ cm; int recv_cq; } ;
struct ipoib_cm_tx {int dummy; } ;
struct TYPE_4__ {int max_send_sge; int max_send_wr; } ;
struct ib_qp_init_attr {struct ipoib_cm_tx* qp_context; int qp_type; int sq_sig_type; TYPE_2__ cap; int srq; int recv_cq; int send_cq; } ;
struct ib_qp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_qp* FUNC_0 (int ,struct ib_qp_init_attr*) ;
 int VAR_2 ;
 struct ipoib_dev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static struct ib_qp *FUNC_2(struct net_device *VAR_3, struct ipoib_cm_tx *VAR_4)
{
 struct ipoib_dev_priv *VAR_5 = FUNC_1(VAR_3);
 struct ib_qp_init_attr VAR_6 = {
  .send_cq = VAR_5->recv_cq,
  .recv_cq = VAR_5->recv_cq,
  .srq = VAR_5->cm.srq,
  .cap.max_send_wr = VAR_2,
  .cap.max_send_sge = 1,
  .sq_sig_type = VAR_1,
  .qp_type = VAR_0,
  .qp_context = VAR_4
 };

 return FUNC_0(VAR_5->pd, &VAR_6);
}
