
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipath_ibdev {int n_cqs_lock; int n_cqs_allocated; } ;
struct ipath_cq {int queue; TYPE_1__* ip; int comptask; } ;
struct ib_cq {int device; } ;
struct TYPE_2__ {int ref; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipath_cq*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ipath_cq* FUNC_5 (struct ib_cq*) ;
 struct ipath_ibdev* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct ib_cq *VAR_1)
{
 struct ipath_ibdev *VAR_2 = FUNC_6(VAR_1->device);
 struct ipath_cq *VAR_3 = FUNC_5(VAR_1);

 FUNC_4(&VAR_3->comptask);
 FUNC_2(&VAR_2->n_cqs_lock);
 VAR_2->n_cqs_allocated--;
 FUNC_3(&VAR_2->n_cqs_lock);
 if (VAR_3->ip)
  FUNC_1(&VAR_3->ip->ref, VAR_0);
 else
  FUNC_7(VAR_3->queue);
 FUNC_0(VAR_3);

 return 0;
}
