
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_4__ {scalar_t__ max_sges; } ;
struct ocrdma_srq {int q_lock; TYPE_1__ rq; int * rqe_wr_id_tbl; } ;
struct ocrdma_hdr_wqe {int dummy; } ;
struct ib_srq {int dummy; } ;
struct ib_recv_wr {scalar_t__ num_sge; struct ib_recv_wr* next; int wr_id; } ;


 int VAR_0 ;
 struct ocrdma_srq* FUNC_0 (struct ib_srq*) ;
 int FUNC_1 (struct ocrdma_hdr_wqe*,struct ib_recv_wr*,size_t) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 struct ocrdma_hdr_wqe* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct ocrdma_srq*) ;
 size_t FUNC_6 (struct ocrdma_srq*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 () ;

int FUNC_10(struct ib_srq *VAR_1, struct ib_recv_wr *VAR_2,
    struct ib_recv_wr **VAR_3)
{
 int VAR_4 = 0;
 unsigned long VAR_5;
 struct ocrdma_srq *VAR_6;
 struct ocrdma_hdr_wqe *VAR_7;
 u16 VAR_8;

 VAR_6 = FUNC_0(VAR_1);

 FUNC_7(&VAR_6->q_lock, VAR_5);
 while (VAR_2) {
  if (FUNC_2(&VAR_6->rq) == 0 ||
      VAR_2->num_sge > VAR_6->rq.max_sges) {
   VAR_4 = -VAR_0;
   *VAR_3 = VAR_2;
   break;
  }
  VAR_8 = FUNC_6(VAR_6);
  VAR_7 = FUNC_3(&VAR_6->rq);
  FUNC_1(VAR_7, VAR_2, VAR_8);

  VAR_6->rqe_wr_id_tbl[VAR_8] = VAR_2->wr_id;

  FUNC_9();

  FUNC_5(VAR_6);

  FUNC_4(&VAR_6->rq);
  VAR_2 = VAR_2->next;
 }
 FUNC_8(&VAR_6->q_lock, VAR_5);
 return VAR_4;
}
