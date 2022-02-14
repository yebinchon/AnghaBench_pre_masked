
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_sge; scalar_t__ size; } ;
struct qib_srq {int limit; TYPE_1__ rq; } ;
struct ib_srq_attr {int srq_limit; int max_sge; scalar_t__ max_wr; } ;
struct ib_srq {int dummy; } ;


 struct qib_srq* FUNC_0 (struct ib_srq*) ;

int FUNC_1(struct ib_srq *VAR_0, struct ib_srq_attr *VAR_1)
{
 struct qib_srq *VAR_2 = FUNC_0(VAR_0);

 VAR_1->max_wr = VAR_2->rq.size - 1;
 VAR_1->max_sge = VAR_2->rq.max_sge;
 VAR_1->srq_limit = VAR_2->limit;
 return 0;
}
