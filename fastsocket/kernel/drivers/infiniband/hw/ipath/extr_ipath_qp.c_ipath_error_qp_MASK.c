
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wc ;
typedef scalar_t__ u32 ;
struct ipath_rwq {scalar_t__ head; scalar_t__ tail; } ;
struct TYPE_4__ {scalar_t__ event_handler; int recv_cq; int device; } ;
struct TYPE_6__ {scalar_t__ size; int lock; struct ipath_rwq* wq; } ;
struct ipath_qp {scalar_t__ state; scalar_t__ s_last; scalar_t__ s_head; TYPE_1__ ibqp; TYPE_3__ r_rq; int r_wr_id; int r_aflags; int piowait; int timerwait; } ;
struct ipath_ibdev {int pending_lock; } ;
struct ib_wc {int status; int wr_id; int opcode; TYPE_1__* qp; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;
struct TYPE_5__ {int wr_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (int ,struct ib_wc*,int) ;
 int FUNC_2 (struct ipath_qp*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ib_wc*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ) ;
 struct ipath_ibdev* FUNC_10 (int ) ;

int FUNC_11(struct ipath_qp *VAR_4, enum ib_wc_status VAR_5)
{
 struct ipath_ibdev *VAR_6 = FUNC_10(VAR_4->ibqp.device);
 struct ib_wc VAR_7;
 int VAR_8 = 0;

 if (VAR_4->state == VAR_0)
  goto bail;

 VAR_4->state = VAR_0;

 FUNC_6(&VAR_6->pending_lock);
 if (!FUNC_4(&VAR_4->timerwait))
  FUNC_3(&VAR_4->timerwait);
 if (!FUNC_4(&VAR_4->piowait))
  FUNC_3(&VAR_4->piowait);
 FUNC_7(&VAR_6->pending_lock);


 if (VAR_4->s_last != VAR_4->s_head)
  FUNC_2(VAR_4);

 FUNC_5(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.qp = &VAR_4->ibqp;
 VAR_7.opcode = VAR_1;

 if (FUNC_8(VAR_3, &VAR_4->r_aflags)) {
  VAR_7.wr_id = VAR_4->r_wr_id;
  VAR_7.status = VAR_5;
  FUNC_1(FUNC_9(VAR_4->ibqp.recv_cq), &VAR_7, 1);
 }
 VAR_7.status = VAR_2;

 if (VAR_4->r_rq.wq) {
  struct ipath_rwq *VAR_9;
  u32 VAR_10;
  u32 VAR_11;

  FUNC_6(&VAR_4->r_rq.lock);


  VAR_9 = VAR_4->r_rq.wq;
  VAR_10 = VAR_9->head;
  if (VAR_10 >= VAR_4->r_rq.size)
   VAR_10 = 0;
  VAR_11 = VAR_9->tail;
  if (VAR_11 >= VAR_4->r_rq.size)
   VAR_11 = 0;
  while (VAR_11 != VAR_10) {
   VAR_7.wr_id = FUNC_0(&VAR_4->r_rq, VAR_11)->wr_id;
   if (++VAR_11 >= VAR_4->r_rq.size)
    VAR_11 = 0;
   FUNC_1(FUNC_9(VAR_4->ibqp.recv_cq), &VAR_7, 1);
  }
  VAR_9->tail = VAR_11;

  FUNC_7(&VAR_4->r_rq.lock);
 } else if (VAR_4->ibqp.event_handler)
  VAR_8 = 1;

bail:
 return VAR_8;
}
