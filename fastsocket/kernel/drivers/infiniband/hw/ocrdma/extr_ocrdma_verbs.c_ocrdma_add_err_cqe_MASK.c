
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t tail; } ;
struct ocrdma_qp {TYPE_1__ rq; int * rqe_wr_id_tbl; struct ocrdma_cq* rq_cq; TYPE_1__ sq; struct ocrdma_cq* sq_cq; } ;
struct ocrdma_cq {int dummy; } ;
struct ib_wc {int status; scalar_t__ byte_len; int wr_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ocrdma_qp*) ;
 scalar_t__ FUNC_1 (struct ocrdma_qp*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct ocrdma_qp*,struct ib_wc*,size_t) ;

__attribute__((used)) static int FUNC_4(struct ocrdma_cq *VAR_1, int VAR_2,
         struct ocrdma_qp *VAR_3, struct ib_wc *VAR_4)
{
 int VAR_5 = 0;

 while (VAR_2) {
  if (FUNC_1(VAR_3) && FUNC_0(VAR_3))
   break;
  if (!FUNC_1(VAR_3) && VAR_3->sq_cq == VAR_1) {
   FUNC_3(VAR_3, VAR_4, VAR_3->sq.tail);
   FUNC_2(&VAR_3->sq);
  } else if (!FUNC_0(VAR_3) && VAR_3->rq_cq == VAR_1) {
   VAR_4->wr_id = VAR_3->rqe_wr_id_tbl[VAR_3->rq.tail];
   FUNC_2(&VAR_3->rq);
  } else
   return VAR_5;
  VAR_4->byte_len = 0;
  VAR_4->status = VAR_0;
  VAR_4 = VAR_4 + 1;
  VAR_5 += 1;
  VAR_2 -= 1;
 }
 return VAR_5;
}
