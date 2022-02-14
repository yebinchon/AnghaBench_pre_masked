
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_qp {scalar_t__ sq_cq; scalar_t__ rq_cq; int srq; } ;
struct ocrdma_cqe {int flags_status_srcqpn; } ;
struct ib_wc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ocrdma_qp*) ;
 scalar_t__ FUNC_1 (struct ocrdma_qp*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ib_wc*,struct ocrdma_cqe*,struct ocrdma_qp*,int) ;
 int FUNC_4 (struct ib_wc*,struct ocrdma_cqe*,struct ocrdma_qp*,int) ;

__attribute__((used)) static bool FUNC_5(struct ocrdma_qp *VAR_3,
     struct ocrdma_cqe *VAR_4, struct ib_wc *VAR_5,
     bool *VAR_6, bool *VAR_7)
{
 bool VAR_8;
 int VAR_9 = (FUNC_2(VAR_4->flags_status_srcqpn) &
  VAR_0) >> VAR_1;




 if (FUNC_1(VAR_3) && !FUNC_0(VAR_3)) {



  if (!VAR_3->srq && (VAR_3->sq_cq == VAR_3->rq_cq)) {
   *VAR_6 = 1;
   VAR_9 = VAR_2;
   VAR_8 = FUNC_3(VAR_5, VAR_4, VAR_3, VAR_9);
  } else {





   *VAR_6 = 0;
   *VAR_7 = 1;
   VAR_8 = 0;
  }
 } else {
  *VAR_6 = 1;
  VAR_8 = FUNC_4(VAR_5, VAR_4, VAR_3, VAR_9);
 }
 return VAR_8;
}
