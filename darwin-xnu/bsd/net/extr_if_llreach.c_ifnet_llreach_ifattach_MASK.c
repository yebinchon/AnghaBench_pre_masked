
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_llreach_lock; int if_ll_srcs; } ;
typedef int boolean_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct ifnet *VAR_0, boolean_t VAR_1)
{
 FUNC_2(&VAR_0->if_llreach_lock);

 if (!VAR_1)
  FUNC_0(&VAR_0->if_ll_srcs);
 FUNC_1(&VAR_0->if_llreach_lock);
}
