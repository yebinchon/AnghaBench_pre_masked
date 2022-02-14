
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_ref_lock; int if_refio; } ;


 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct ifnet *VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_0->if_ref_lock);
 if ((VAR_2 = FUNC_0(VAR_0))) {
  if (VAR_1 > 0)
   VAR_0->if_refio++;
 }
 FUNC_2(&VAR_0->if_ref_lock);

 return (VAR_2);
}
