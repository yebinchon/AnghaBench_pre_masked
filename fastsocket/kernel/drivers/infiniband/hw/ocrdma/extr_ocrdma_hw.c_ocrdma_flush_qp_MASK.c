
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocrdma_qp {TYPE_1__* dev; TYPE_3__* rq_cq; int rq_entry; int srq; TYPE_2__* sq_cq; int sq_entry; } ;
struct TYPE_6__ {int rq_head; } ;
struct TYPE_5__ {int sq_head; } ;
struct TYPE_4__ {int flush_q_lock; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_3__*,struct ocrdma_qp*) ;
 int FUNC_2 (TYPE_2__*,struct ocrdma_qp*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct ocrdma_qp *VAR_0)
{
 bool VAR_1;
 unsigned long VAR_2;

 FUNC_3(&VAR_0->dev->flush_q_lock, VAR_2);
 VAR_1 = FUNC_2(VAR_0->sq_cq, VAR_0);
 if (!VAR_1)
  FUNC_0(&VAR_0->sq_entry, &VAR_0->sq_cq->sq_head);
 if (!VAR_0->srq) {
  VAR_1 = FUNC_1(VAR_0->rq_cq, VAR_0);
  if (!VAR_1)
   FUNC_0(&VAR_0->rq_entry, &VAR_0->rq_cq->rq_head);
 }
 FUNC_4(&VAR_0->dev->flush_q_lock, VAR_2);
}
