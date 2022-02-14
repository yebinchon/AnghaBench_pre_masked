
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_eflags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*,int ) ;

void
FUNC_1(struct ifnet *VAR_1)
{
 if (VAR_1 != ((void*)0) && (VAR_1->if_eflags & VAR_0))
  FUNC_0(VAR_1, 0);
}
