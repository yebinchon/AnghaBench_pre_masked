
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {scalar_t__ if_flt_busy; int if_flt_lock; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct ifnet *VAR_1)
{
 FUNC_0(&VAR_1->if_flt_lock, VAR_0);

 ++VAR_1->if_flt_busy;
 FUNC_1(VAR_1->if_flt_busy != 0);
}
