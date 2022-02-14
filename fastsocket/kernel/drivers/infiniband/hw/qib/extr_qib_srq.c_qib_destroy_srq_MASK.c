
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wq; } ;
struct qib_srq {TYPE_1__ rq; TYPE_2__* ip; } ;
struct qib_ibdev {int n_srqs_lock; int n_srqs_allocated; } ;
struct ib_srq {int device; } ;
struct TYPE_4__ {int ref; } ;


 int FUNC_0 (struct qib_srq*) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct qib_ibdev* FUNC_4 (int ) ;
 struct qib_srq* FUNC_5 (struct ib_srq*) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct ib_srq *VAR_1)
{
 struct qib_srq *VAR_2 = FUNC_5(VAR_1);
 struct qib_ibdev *VAR_3 = FUNC_4(VAR_1->device);

 FUNC_2(&VAR_3->n_srqs_lock);
 VAR_3->n_srqs_allocated--;
 FUNC_3(&VAR_3->n_srqs_lock);
 if (VAR_2->ip)
  FUNC_1(&VAR_2->ip->ref, VAR_0);
 else
  FUNC_6(VAR_2->rq.wq);
 FUNC_0(VAR_2);

 return 0;
}
