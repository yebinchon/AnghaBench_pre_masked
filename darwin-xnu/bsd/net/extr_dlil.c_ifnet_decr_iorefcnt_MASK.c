
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {scalar_t__ if_refio; int if_refflags; int if_ref_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__*) ;

void
FUNC_4(struct ifnet *VAR_2)
{
 FUNC_1(&VAR_2->if_ref_lock);
 FUNC_0(VAR_2->if_refio > 0);
 FUNC_0(VAR_2->if_refflags & (VAR_0 | VAR_1));
 VAR_2->if_refio--;





 if (VAR_2->if_refio == 0 && (VAR_2->if_refflags & VAR_1))
  FUNC_3(&(VAR_2->if_refio));

 FUNC_2(&VAR_2->if_ref_lock);
}
