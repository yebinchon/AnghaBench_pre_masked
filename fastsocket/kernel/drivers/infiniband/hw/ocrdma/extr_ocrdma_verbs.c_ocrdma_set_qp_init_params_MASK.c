
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int max_sges; } ;
struct TYPE_4__ {int max_sges; } ;
struct ocrdma_qp {int cap_flags; int state; TYPE_2__ rq; TYPE_1__ sq; int max_inline_data; int qp_type; int rq_entry; int sq_entry; int q_lock; struct ocrdma_pd* pd; } ;
struct ocrdma_pd {int dummy; } ;
struct TYPE_6__ {int max_recv_sge; int max_send_sge; int max_inline_data; } ;
struct ib_qp_init_attr {TYPE_3__ cap; int qp_type; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ocrdma_qp *VAR_3,
          struct ocrdma_pd *VAR_4,
          struct ib_qp_init_attr *VAR_5)
{
 VAR_3->pd = VAR_4;
 FUNC_1(&VAR_3->q_lock);
 FUNC_0(&VAR_3->sq_entry);
 FUNC_0(&VAR_3->rq_entry);

 VAR_3->qp_type = VAR_5->qp_type;
 VAR_3->cap_flags = VAR_1 | VAR_2;
 VAR_3->max_inline_data = VAR_5->cap.max_inline_data;
 VAR_3->sq.max_sges = VAR_5->cap.max_send_sge;
 VAR_3->rq.max_sges = VAR_5->cap.max_recv_sge;
 VAR_3->state = VAR_0;
}
