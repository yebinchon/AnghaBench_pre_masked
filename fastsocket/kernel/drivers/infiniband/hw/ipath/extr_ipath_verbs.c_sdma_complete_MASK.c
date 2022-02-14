
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; int map_addr; } ;
struct ipath_verbs_txreq {TYPE_2__ txreq; scalar_t__ wqe; struct ipath_qp* qp; } ;
struct TYPE_3__ {int device; } ;
struct ipath_qp {size_t state; scalar_t__ s_last; scalar_t__ s_head; int s_flags; int wait; int refcount; int s_lock; int wait_dma; int s_dma_busy; TYPE_1__ ibqp; } ;
struct ipath_ibdev {int dummy; } ;
typedef enum ib_wc_status { ____Placeholder_ib_wc_status } ib_wc_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int* VAR_6 ;
 int FUNC_1 (struct ipath_qp*) ;
 int FUNC_2 (struct ipath_qp*,scalar_t__,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ipath_ibdev*,struct ipath_verbs_txreq*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct ipath_ibdev* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void *VAR_7, int VAR_8)
{
 struct ipath_verbs_txreq *VAR_9 = VAR_7;
 struct ipath_qp *VAR_10 = VAR_9->qp;
 struct ipath_ibdev *VAR_11 = FUNC_7(VAR_10->ibqp.device);
 unsigned long VAR_12;
 enum ib_wc_status VAR_13 = VAR_8 == VAR_4 ?
  VAR_0 : VAR_1;

 if (FUNC_0(&VAR_10->s_dma_busy)) {
  FUNC_5(&VAR_10->s_lock, VAR_12);
  if (VAR_9->wqe)
   FUNC_2(VAR_10, VAR_9->wqe, VAR_13);
  if ((VAR_6[VAR_10->state] & VAR_2 &&
       VAR_10->s_last != VAR_10->s_head) ||
      (VAR_10->s_flags & VAR_5))
   FUNC_1(VAR_10);
  FUNC_6(&VAR_10->s_lock, VAR_12);
  FUNC_8(&VAR_10->wait_dma);
 } else if (VAR_9->wqe) {
  FUNC_5(&VAR_10->s_lock, VAR_12);
  FUNC_2(VAR_10, VAR_9->wqe, VAR_13);
  FUNC_6(&VAR_10->s_lock, VAR_12);
 }

 if (VAR_9->txreq.flags & VAR_3)
  FUNC_3(VAR_9->txreq.map_addr);
 FUNC_4(VAR_11, VAR_9);

 if (FUNC_0(&VAR_10->refcount))
  FUNC_8(&VAR_10->wait);
}
