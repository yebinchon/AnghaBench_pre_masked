
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct ocrdma_srq {int rq; int q_lock; int * rqe_wr_id_tbl; } ;
struct TYPE_3__ {int srq; } ;
struct ocrdma_qp {TYPE_1__ ibqp; } ;
struct TYPE_4__ {int buftag_qpn; } ;
struct ocrdma_cqe {TYPE_2__ rq; } ;
struct ib_wc {int wr_id; } ;


 size_t VAR_0 ;
 struct ocrdma_srq* FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ocrdma_srq*,size_t) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct ib_wc *VAR_1,
           struct ocrdma_cqe *VAR_2,
           struct ocrdma_qp *VAR_3)
{
 unsigned long VAR_4;
 struct ocrdma_srq *VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_0(VAR_3->ibqp.srq);
 VAR_6 = FUNC_1(VAR_2->rq.buftag_qpn) >> VAR_0;
 VAR_1->wr_id = VAR_5->rqe_wr_id_tbl[VAR_6];
 FUNC_4(&VAR_5->q_lock, VAR_4);
 FUNC_3(VAR_5, VAR_6);
 FUNC_5(&VAR_5->q_lock, VAR_4);
 FUNC_2(&VAR_5->rq);
}
