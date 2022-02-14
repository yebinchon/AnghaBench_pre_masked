
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_ibdev {int n_cqs_lock; int n_cqs_allocated; } ;
struct qib_cq {int queue; TYPE_1__* ip; int comptask; } ;
struct ib_cq {int device; } ;
struct TYPE_2__ {int ref; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct qib_cq*) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct qib_cq* FUNC_5 (struct ib_cq*) ;
 struct qib_ibdev* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct ib_cq *VAR_1)
{
 struct qib_ibdev *VAR_2 = FUNC_6(VAR_1->device);
 struct qib_cq *VAR_3 = FUNC_5(VAR_1);

 FUNC_0(&VAR_3->comptask);
 FUNC_3(&VAR_2->n_cqs_lock);
 VAR_2->n_cqs_allocated--;
 FUNC_4(&VAR_2->n_cqs_lock);
 if (VAR_3->ip)
  FUNC_2(&VAR_3->ip->ref, VAR_0);
 else
  FUNC_7(VAR_3->queue);
 FUNC_1(VAR_3);

 return 0;
}
