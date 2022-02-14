
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t tail; } ;
struct ocrdma_qp {TYPE_1__ rq; int * rqe_wr_id_tbl; } ;
struct ocrdma_cqe {int dummy; } ;
struct ib_wc {int wr_id; int opcode; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct ib_wc*,struct ocrdma_cqe*,struct ocrdma_qp*,int) ;

__attribute__((used)) static int FUNC_2(struct ib_wc *VAR_1, struct ocrdma_cqe *VAR_2,
      struct ocrdma_qp *VAR_3, int VAR_4)
{
 VAR_1->opcode = VAR_0;
 VAR_1->wr_id = VAR_3->rqe_wr_id_tbl[VAR_3->rq.tail];
 FUNC_0(&VAR_3->rq);

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
