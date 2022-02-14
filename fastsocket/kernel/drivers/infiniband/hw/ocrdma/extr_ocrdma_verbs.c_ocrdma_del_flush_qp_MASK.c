
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_qp {int rq_entry; int rq_cq; int srq; int sq_entry; int sq_cq; struct ocrdma_dev* dev; } ;
struct ocrdma_dev {int flush_q_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct ocrdma_qp*) ;
 int FUNC_2 (int ,struct ocrdma_qp*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct ocrdma_qp *VAR_0)
{
 int VAR_1 = 0;
 unsigned long VAR_2;
 struct ocrdma_dev *VAR_3 = VAR_0->dev;


 FUNC_3(&VAR_3->flush_q_lock, VAR_2);
 VAR_1 = FUNC_2(VAR_0->sq_cq, VAR_0);
 if (VAR_1)
  FUNC_0(&VAR_0->sq_entry);
 if (!VAR_0->srq) {
  VAR_1 = FUNC_1(VAR_0->rq_cq, VAR_0);
  if (VAR_1)
   FUNC_0(&VAR_0->rq_entry);
 }
 FUNC_4(&VAR_3->flush_q_lock, VAR_2);
}
