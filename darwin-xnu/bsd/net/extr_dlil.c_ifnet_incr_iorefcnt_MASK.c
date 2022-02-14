
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {scalar_t__ if_refio; int if_ref_lock; } ;


 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct ifnet *VAR_0)
{
 FUNC_2(&VAR_0->if_ref_lock);
 FUNC_1(FUNC_0(VAR_0));
 FUNC_1(VAR_0->if_refio > 0);
 VAR_0->if_refio++;
 FUNC_3(&VAR_0->if_ref_lock);
}
