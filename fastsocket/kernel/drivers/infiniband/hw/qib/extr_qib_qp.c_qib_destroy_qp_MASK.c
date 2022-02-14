
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int wq; } ;
struct TYPE_4__ {int qp_num; } ;
struct qib_qp {scalar_t__ state; int s_flags; struct qib_qp* s_hdr; int s_wq; TYPE_3__ r_rq; TYPE_2__* ip; TYPE_1__ ibqp; int s_lock; int refcount; int wait; int * s_tx; int s_dma_busy; int wait_dma; int s_timer; int s_work; int iowait; } ;
struct qib_ibdev {int n_qps_lock; int n_qps_allocated; int qpn_table; int pending_lock; } ;
struct ib_qp {int device; } ;
struct TYPE_5__ {int ref; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qib_qp*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct qib_qp*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 int FUNC_10 (struct qib_ibdev*,struct qib_qp*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 struct qib_ibdev* FUNC_15 (int ) ;
 struct qib_qp* FUNC_16 (struct ib_qp*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int) ;

int FUNC_19(struct ib_qp *VAR_4)
{
 struct qib_qp *VAR_5 = FUNC_16(VAR_4);
 struct qib_ibdev *VAR_6 = FUNC_15(VAR_4->device);


 FUNC_12(&VAR_5->s_lock);
 if (VAR_5->state != VAR_0) {
  VAR_5->state = VAR_0;
  FUNC_11(&VAR_6->pending_lock);
  if (!FUNC_8(&VAR_5->iowait))
   FUNC_7(&VAR_5->iowait);
  FUNC_13(&VAR_6->pending_lock);
  VAR_5->s_flags &= ~(VAR_2 | VAR_1);
  FUNC_14(&VAR_5->s_lock);
  FUNC_1(&VAR_5->s_work);
  FUNC_3(&VAR_5->s_timer);
  FUNC_18(VAR_5->wait_dma, !FUNC_0(&VAR_5->s_dma_busy));
  if (VAR_5->s_tx) {
   FUNC_9(VAR_5->s_tx);
   VAR_5->s_tx = ((void*)0);
  }
  FUNC_10(VAR_6, VAR_5);
  FUNC_18(VAR_5->wait, !FUNC_0(&VAR_5->refcount));
  FUNC_2(VAR_5, 1);
 } else
  FUNC_14(&VAR_5->s_lock);


 FUNC_4(&VAR_6->qpn_table, VAR_5->ibqp.qp_num);
 FUNC_11(&VAR_6->n_qps_lock);
 VAR_6->n_qps_allocated--;
 FUNC_13(&VAR_6->n_qps_lock);

 if (VAR_5->ip)
  FUNC_6(&VAR_5->ip->ref, VAR_3);
 else
  FUNC_17(VAR_5->r_rq.wq);
 FUNC_17(VAR_5->s_wq);
 FUNC_5(VAR_5->s_hdr);
 FUNC_5(VAR_5);
 return 0;
}
