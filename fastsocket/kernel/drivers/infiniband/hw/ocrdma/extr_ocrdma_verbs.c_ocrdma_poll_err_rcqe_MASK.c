
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_qp {scalar_t__ sq_cq; scalar_t__ rq_cq; int srq; } ;
struct ocrdma_cqe {int dummy; } ;
struct ib_wc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ocrdma_qp*) ;
 int FUNC_1 (struct ocrdma_qp*) ;
 int FUNC_2 (struct ib_wc*,struct ocrdma_cqe*,struct ocrdma_qp*,int) ;
 int FUNC_3 (struct ib_wc*,struct ocrdma_cqe*,struct ocrdma_qp*,int) ;

__attribute__((used)) static bool FUNC_4(struct ocrdma_qp *VAR_1, struct ocrdma_cqe *VAR_2,
    struct ib_wc *VAR_3, bool *VAR_4, bool *VAR_5,
    int VAR_6)
{
 bool VAR_7;




 if (FUNC_0(VAR_1) && !FUNC_1(VAR_1)) {
  if (!VAR_1->srq && (VAR_1->sq_cq == VAR_1->rq_cq)) {
   *VAR_4 = 1;
   VAR_6 = VAR_0;
   VAR_7 = FUNC_3(VAR_3, VAR_2, VAR_1, VAR_6);
  } else {
   *VAR_4 = 0;
   *VAR_5 = 1;
   VAR_7 = 0;
  }
 } else {
  *VAR_4 = 1;
  VAR_7 = FUNC_2(VAR_3, VAR_2, VAR_1, VAR_6);
 }
 return VAR_7;
}
