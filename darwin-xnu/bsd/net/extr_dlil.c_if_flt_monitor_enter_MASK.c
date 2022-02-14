
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_flt_lock; int if_flt_head; int if_flt_waiters; scalar_t__ if_flt_busy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (int *,int *,scalar_t__,char*,int *) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_2)
{
 FUNC_0(&VAR_2->if_flt_lock, VAR_0);

 while (VAR_2->if_flt_busy) {
  ++VAR_2->if_flt_waiters;
  (void) FUNC_2(&VAR_2->if_flt_head, &VAR_2->if_flt_lock,
      (VAR_1 - 1), "if_flt_monitor", ((void*)0));
 }
 FUNC_1(VAR_2);
}
