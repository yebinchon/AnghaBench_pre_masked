
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int wq; } ;
struct TYPE_8__ {int qp_num; } ;
struct ipath_qp {scalar_t__ state; int s_wq; struct ipath_qp* r_ud_sg_list; TYPE_5__ r_rq; TYPE_4__* ip; TYPE_3__ ibqp; int refcount; int wait; TYPE_2__* s_tx; int s_lock; int s_dma_busy; int wait_dma; int s_task; int s_flags; int piowait; int timerwait; } ;
struct ipath_ibdev {int n_qps_lock; int n_qps_allocated; int qp_table; int pending_lock; int txreq_free; } ;
struct ib_qp {int device; } ;
struct TYPE_9__ {int ref; } ;
struct TYPE_6__ {int flags; int list; struct ipath_qp* map_addr; } ;
struct TYPE_7__ {TYPE_1__ txreq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,struct ipath_qp*) ;
 int VAR_3 ;
 int FUNC_4 (struct ipath_qp*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct ipath_ibdev* FUNC_14 (int ) ;
 struct ipath_qp* FUNC_15 (struct ib_qp*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int) ;

int FUNC_18(struct ib_qp *VAR_4)
{
 struct ipath_qp *VAR_5 = FUNC_15(VAR_4);
 struct ipath_ibdev *VAR_6 = FUNC_14(VAR_4->device);


 FUNC_10(&VAR_5->s_lock);
 if (VAR_5->state != VAR_0) {
  VAR_5->state = VAR_0;
  FUNC_9(&VAR_6->pending_lock);
  if (!FUNC_8(&VAR_5->timerwait))
   FUNC_7(&VAR_5->timerwait);
  if (!FUNC_8(&VAR_5->piowait))
   FUNC_7(&VAR_5->piowait);
  FUNC_11(&VAR_6->pending_lock);
  VAR_5->s_flags &= ~VAR_2;
  FUNC_12(&VAR_5->s_lock);

  FUNC_13(&VAR_5->s_task);
  FUNC_17(VAR_5->wait_dma, !FUNC_1(&VAR_5->s_dma_busy));
 } else
  FUNC_12(&VAR_5->s_lock);

 FUNC_3(&VAR_6->qp_table, VAR_5);

 if (VAR_5->s_tx) {
  FUNC_0(&VAR_5->refcount);
  if (VAR_5->s_tx->txreq.flags & VAR_1)
   FUNC_4(VAR_5->s_tx->txreq.map_addr);
  FUNC_10(&VAR_6->pending_lock);
  FUNC_6(&VAR_5->s_tx->txreq.list, &VAR_6->txreq_free);
  FUNC_12(&VAR_6->pending_lock);
  VAR_5->s_tx = ((void*)0);
 }

 FUNC_17(VAR_5->wait, !FUNC_1(&VAR_5->refcount));


 FUNC_2(&VAR_6->qp_table, VAR_5->ibqp.qp_num);
 FUNC_9(&VAR_6->n_qps_lock);
 VAR_6->n_qps_allocated--;
 FUNC_11(&VAR_6->n_qps_lock);

 if (VAR_5->ip)
  FUNC_5(&VAR_5->ip->ref, VAR_3);
 else
  FUNC_16(VAR_5->r_rq.wq);
 FUNC_4(VAR_5->r_ud_sg_list);
 FUNC_16(VAR_5->s_wq);
 FUNC_4(VAR_5);
 return 0;
}
