
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int len; scalar_t__ pa; } ;
struct TYPE_4__ {int len; scalar_t__ pa; } ;
struct ocrdma_qp {struct ocrdma_qp* rqe_wr_id_tbl; struct ocrdma_qp* wqe_wr_id_tbl; TYPE_2__ rq; int srq; TYPE_1__ sq; TYPE_3__* rq_cq; TYPE_3__* sq_cq; struct ocrdma_pd* pd; struct ocrdma_dev* dev; } ;
struct ocrdma_pd {scalar_t__ uctx; } ;
struct ocrdma_dev {int dev_lock; } ;
struct ib_qp_attr {int qp_state; } ;
struct ib_qp {int dummy; } ;
struct TYPE_6__ {int cq_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_qp*,struct ib_qp_attr*,int) ;
 struct ocrdma_qp* FUNC_1 (struct ib_qp*) ;
 int FUNC_2 (struct ocrdma_qp*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ocrdma_qp*) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (struct ocrdma_dev*,struct ocrdma_qp*) ;
 int FUNC_8 (struct ocrdma_qp*,TYPE_3__*) ;
 int FUNC_9 (struct ocrdma_dev*,struct ocrdma_qp*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,unsigned long) ;

int FUNC_14(struct ib_qp *VAR_2)
{
 int VAR_3;
 struct ocrdma_pd *VAR_4;
 struct ocrdma_qp *VAR_5;
 struct ocrdma_dev *VAR_6;
 struct ib_qp_attr VAR_7;
 int VAR_8 = VAR_1;
 unsigned long VAR_9;

 VAR_5 = FUNC_1(VAR_2);
 VAR_6 = VAR_5->dev;

 VAR_7.qp_state = VAR_0;
 VAR_4 = VAR_5->pd;


 FUNC_0(VAR_2, &VAR_7, VAR_8);





 FUNC_3(&VAR_6->dev_lock);
 VAR_3 = FUNC_9(VAR_6, VAR_5);





 FUNC_11(&VAR_5->sq_cq->cq_lock, VAR_9);
 if (VAR_5->rq_cq && (VAR_5->rq_cq != VAR_5->sq_cq))
  FUNC_10(&VAR_5->rq_cq->cq_lock);

 FUNC_7(VAR_6, VAR_5);

 if (VAR_5->rq_cq && (VAR_5->rq_cq != VAR_5->sq_cq))
  FUNC_12(&VAR_5->rq_cq->cq_lock);
 FUNC_13(&VAR_5->sq_cq->cq_lock, VAR_9);

 if (!VAR_4->uctx) {
  FUNC_8(VAR_5, VAR_5->sq_cq);
  FUNC_8(VAR_5, VAR_5->rq_cq);
 }
 FUNC_4(&VAR_6->dev_lock);

 if (VAR_4->uctx) {
  FUNC_6(VAR_4->uctx, (u64) VAR_5->sq.pa, VAR_5->sq.len);
  if (!VAR_5->srq)
   FUNC_6(VAR_4->uctx, (u64) VAR_5->rq.pa, VAR_5->rq.len);
 }

 FUNC_5(VAR_5);

 FUNC_2(VAR_5->wqe_wr_id_tbl);
 FUNC_2(VAR_5->rqe_wr_id_tbl);
 FUNC_2(VAR_5);
 return VAR_3;
}
