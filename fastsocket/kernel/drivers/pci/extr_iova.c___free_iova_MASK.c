
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iova_domain {int iova_rbtree_lock; int rbroot; } ;
struct iova {int node; } ;


 int FUNC_0 (struct iova_domain*,struct iova*) ;
 int FUNC_1 (struct iova*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void
FUNC_5(struct iova_domain *VAR_0, struct iova *VAR_1)
{
 unsigned long VAR_2;

 FUNC_3(&VAR_0->iova_rbtree_lock, VAR_2);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_1->node, &VAR_0->rbroot);
 FUNC_4(&VAR_0->iova_rbtree_lock, VAR_2);
 FUNC_1(VAR_1);
}
