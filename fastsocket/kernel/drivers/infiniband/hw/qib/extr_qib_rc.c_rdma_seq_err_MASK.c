
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ opcode; } ;
struct qib_swqe {TYPE_1__ wr; int lpsn; } ;
struct qib_qp {int s_flags; int rspwait; int refcount; int r_flags; scalar_t__ s_last_psn; int s_acked; int s_timer; } ;
struct qib_ibport {int n_rdma_seq; } ;
struct qib_ctxtdata {int qp_wait_list; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct qib_swqe* FUNC_2 (struct qib_qp*,struct qib_swqe*,struct qib_ibport*) ;
 struct qib_swqe* FUNC_3 (struct qib_qp*,int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (struct qib_qp*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_8(struct qib_qp *VAR_7, struct qib_ibport *VAR_8, u32 VAR_9,
    struct qib_ctxtdata *VAR_10)
{
 struct qib_swqe *VAR_11;


 if (VAR_7->s_flags & (VAR_5 | VAR_6)) {
  VAR_7->s_flags &= ~(VAR_5 | VAR_6);
  FUNC_1(&VAR_7->s_timer);
 }

 VAR_11 = FUNC_3(VAR_7, VAR_7->s_acked);

 while (FUNC_6(VAR_9, VAR_11->lpsn) > 0) {
  if (VAR_11->wr.opcode == VAR_2 ||
      VAR_11->wr.opcode == VAR_0 ||
      VAR_11->wr.opcode == VAR_1)
   break;
  VAR_11 = FUNC_2(VAR_7, VAR_11, VAR_8);
 }

 VAR_8->n_rdma_seq++;
 VAR_7->r_flags |= VAR_3;
 FUNC_7(VAR_7, VAR_7->s_last_psn + 1, 0);
 if (FUNC_5(&VAR_7->rspwait)) {
  VAR_7->r_flags |= VAR_4;
  FUNC_0(&VAR_7->refcount);
  FUNC_4(&VAR_7->rspwait, &VAR_10->qp_wait_list);
 }
}
