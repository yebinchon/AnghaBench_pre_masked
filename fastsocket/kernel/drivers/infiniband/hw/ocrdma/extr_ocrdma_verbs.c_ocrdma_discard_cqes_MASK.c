
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ocrdma_qp {int id; int rq; TYPE_2__* srq; int sq; } ;
struct TYPE_3__ {int qpn; } ;
struct ocrdma_cqe {TYPE_1__ cmn; } ;
struct ocrdma_cq {int getp; int max_hw_cqe; int cq_lock; struct ocrdma_cqe* va; } ;
struct TYPE_4__ {int q_lock; int rq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ocrdma_cqe*) ;
 scalar_t__ FUNC_1 (struct ocrdma_qp*) ;
 scalar_t__ FUNC_2 (struct ocrdma_qp*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct ocrdma_qp *VAR_1, struct ocrdma_cq *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;
 int VAR_5 = 0;
 u32 VAR_6, VAR_7;
 struct ocrdma_cqe *VAR_8;
 u32 VAR_9 = 0;

 FUNC_5(&VAR_2->cq_lock, VAR_3);
 VAR_6 = VAR_2->getp;

 VAR_7 = VAR_6;
 do {
  if (FUNC_2(VAR_1) && (!VAR_1->srq && FUNC_1(VAR_1)))
   break;

  VAR_8 = VAR_2->va + VAR_6;




  VAR_9 = VAR_8->cmn.qpn & VAR_0;


  if (VAR_9 == 0 || VAR_9 != VAR_1->id)
   goto skip_cqe;




  VAR_5 += 1;
  VAR_8->cmn.qpn = 0;
  if (FUNC_0(VAR_8))
   FUNC_3(&VAR_1->sq);
  else {
   if (VAR_1->srq) {
    FUNC_5(&VAR_1->srq->q_lock, VAR_4);
    FUNC_3(&VAR_1->srq->rq);
    FUNC_4(VAR_1->srq, VAR_6);
    FUNC_6(&VAR_1->srq->q_lock, VAR_4);

   } else
    FUNC_3(&VAR_1->rq);
  }
skip_cqe:
  VAR_6 = (VAR_6 + 1) % VAR_2->max_hw_cqe;
 } while (VAR_6 != VAR_7);
 FUNC_6(&VAR_2->cq_lock, VAR_3);
}
