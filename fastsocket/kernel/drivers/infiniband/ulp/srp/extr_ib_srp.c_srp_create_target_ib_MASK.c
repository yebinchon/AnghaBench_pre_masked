
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct srp_target_port {struct ib_qp* send_cq; struct ib_qp* recv_cq; struct ib_qp* qp; TYPE_3__* srp_host; } ;
struct TYPE_4__ {int max_recv_sge; int max_send_sge; void* max_recv_wr; void* max_send_wr; } ;
struct ib_qp_init_attr {struct ib_qp* recv_cq; struct ib_qp* send_cq; int qp_type; int sq_sig_type; TYPE_1__ cap; int event_handler; } ;
struct ib_qp {int dummy; } ;
typedef struct ib_qp ib_cq ;
struct TYPE_6__ {TYPE_2__* srp_dev; } ;
struct TYPE_5__ {int pd; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ib_qp*) ;
 int FUNC_1 (struct ib_qp*) ;
 void* VAR_5 ;
 void* VAR_6 ;
 struct ib_qp* FUNC_2 (int ,int ,int *,struct srp_target_port*,void*,int ) ;
 struct ib_qp* FUNC_3 (int ,struct ib_qp_init_attr*) ;
 int FUNC_4 (struct ib_qp*) ;
 int FUNC_5 (struct ib_qp*) ;
 int FUNC_6 (struct ib_qp*,int ) ;
 int FUNC_7 (struct ib_qp_init_attr*) ;
 struct ib_qp_init_attr* FUNC_8 (int,int ) ;
 int FUNC_9 (struct srp_target_port*,struct ib_qp*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_10(struct srp_target_port *VAR_10)
{
 struct ib_qp_init_attr *VAR_11;
 struct ib_cq *VAR_12, *VAR_13;
 struct ib_qp *VAR_14;
 int VAR_15;

 VAR_11 = FUNC_8(sizeof *VAR_11, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_2(VAR_10->srp_host->srp_dev->dev,
          VAR_8, ((void*)0), VAR_10, VAR_5, 0);
 if (FUNC_0(VAR_12)) {
  VAR_15 = FUNC_1(VAR_12);
  goto err;
 }

 VAR_13 = FUNC_2(VAR_10->srp_host->srp_dev->dev,
          VAR_9, ((void*)0), VAR_10, VAR_6, 0);
 if (FUNC_0(VAR_13)) {
  VAR_15 = FUNC_1(VAR_13);
  goto err_recv_cq;
 }

 FUNC_6(VAR_12, VAR_2);

 VAR_11->event_handler = VAR_7;
 VAR_11->cap.max_send_wr = VAR_6;
 VAR_11->cap.max_recv_wr = VAR_5;
 VAR_11->cap.max_recv_sge = 1;
 VAR_11->cap.max_send_sge = 1;
 VAR_11->sq_sig_type = VAR_4;
 VAR_11->qp_type = VAR_3;
 VAR_11->send_cq = VAR_13;
 VAR_11->recv_cq = VAR_12;

 VAR_14 = FUNC_3(VAR_10->srp_host->srp_dev->pd, VAR_11);
 if (FUNC_0(VAR_14)) {
  VAR_15 = FUNC_1(VAR_14);
  goto err_send_cq;
 }

 VAR_15 = FUNC_9(VAR_10, VAR_14);
 if (VAR_15)
  goto err_qp;

 if (VAR_10->qp)
  FUNC_5(VAR_10->qp);
 if (VAR_10->recv_cq)
  FUNC_4(VAR_10->recv_cq);
 if (VAR_10->send_cq)
  FUNC_4(VAR_10->send_cq);

 VAR_10->qp = VAR_14;
 VAR_10->recv_cq = VAR_12;
 VAR_10->send_cq = VAR_13;

 FUNC_7(VAR_11);
 return 0;

err_qp:
 FUNC_5(VAR_14);

err_send_cq:
 FUNC_4(VAR_13);

err_recv_cq:
 FUNC_4(VAR_12);

err:
 FUNC_7(VAR_11);
 return VAR_15;
}
