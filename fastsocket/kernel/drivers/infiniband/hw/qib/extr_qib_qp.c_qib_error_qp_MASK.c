
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wc ;
typedef scalar_t__ u32 ;
struct qib_rwq {scalar_t__ head; scalar_t__ tail; } ;
struct TYPE_4__ {scalar_t__ event_handler; int recv_cq; int device; } ;
struct TYPE_6__ {scalar_t__ size; int lock; struct qib_rwq* wq; } ;
struct qib_qp {scalar_t__ state; int s_flags; scalar_t__ s_last; scalar_t__ s_head; TYPE_1__ ibqp; TYPE_3__ r_rq; int r_wr_id; int r_aflags; int * s_tx; int * s_rdma_mr; scalar_t__ s_hdrwords; int iowait; int s_timer; } ;
struct qib_ibdev {int pending_lock; } ;
struct ib_wc {int status; int wr_id; int opcode; TYPE_1__* qp; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;
struct TYPE_5__ {int wr_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct qib_qp*,int ) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ib_wc*,int ,int) ;
 int FUNC_6 (int ,struct ib_wc*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct qib_qp*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 int FUNC_13 (int ) ;
 struct qib_ibdev* FUNC_14 (int ) ;

int FUNC_15(struct qib_qp *VAR_10, enum ib_wc_status VAR_11)
{
 struct qib_ibdev *VAR_12 = FUNC_14(VAR_10->ibqp.device);
 struct ib_wc VAR_13;
 int VAR_14 = 0;

 if (VAR_10->state == VAR_0 || VAR_10->state == VAR_1)
  goto bail;

 VAR_10->state = VAR_0;

 if (VAR_10->s_flags & (VAR_8 | VAR_9)) {
  VAR_10->s_flags &= ~(VAR_8 | VAR_9);
  FUNC_1(&VAR_10->s_timer);
 }

 if (VAR_10->s_flags & VAR_6)
  VAR_10->s_flags &= ~VAR_6;

 FUNC_10(&VAR_12->pending_lock);
 if (!FUNC_4(&VAR_10->iowait) && !(VAR_10->s_flags & VAR_7)) {
  VAR_10->s_flags &= ~VAR_5;
  FUNC_3(&VAR_10->iowait);
 }
 FUNC_11(&VAR_12->pending_lock);

 if (!(VAR_10->s_flags & VAR_7)) {
  VAR_10->s_hdrwords = 0;
  if (VAR_10->s_rdma_mr) {
   FUNC_7(VAR_10->s_rdma_mr);
   VAR_10->s_rdma_mr = ((void*)0);
  }
  if (VAR_10->s_tx) {
   FUNC_8(VAR_10->s_tx);
   VAR_10->s_tx = ((void*)0);
  }
 }


 if (VAR_10->s_last != VAR_10->s_head)
  FUNC_9(VAR_10);

 FUNC_0(VAR_10, 0);

 FUNC_5(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.qp = &VAR_10->ibqp;
 VAR_13.opcode = VAR_2;

 if (FUNC_12(VAR_4, &VAR_10->r_aflags)) {
  VAR_13.wr_id = VAR_10->r_wr_id;
  VAR_13.status = VAR_11;
  FUNC_6(FUNC_13(VAR_10->ibqp.recv_cq), &VAR_13, 1);
 }
 VAR_13.status = VAR_3;

 if (VAR_10->r_rq.wq) {
  struct qib_rwq *VAR_15;
  u32 VAR_16;
  u32 VAR_17;

  FUNC_10(&VAR_10->r_rq.lock);


  VAR_15 = VAR_10->r_rq.wq;
  VAR_16 = VAR_15->head;
  if (VAR_16 >= VAR_10->r_rq.size)
   VAR_16 = 0;
  VAR_17 = VAR_15->tail;
  if (VAR_17 >= VAR_10->r_rq.size)
   VAR_17 = 0;
  while (VAR_17 != VAR_16) {
   VAR_13.wr_id = FUNC_2(&VAR_10->r_rq, VAR_17)->wr_id;
   if (++VAR_17 >= VAR_10->r_rq.size)
    VAR_17 = 0;
   FUNC_6(FUNC_13(VAR_10->ibqp.recv_cq), &VAR_13, 1);
  }
  VAR_15->tail = VAR_17;

  FUNC_11(&VAR_10->r_rq.lock);
 } else if (VAR_10->ibqp.event_handler)
  VAR_14 = 1;

bail:
 return VAR_14;
}
