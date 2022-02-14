
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {scalar_t__ if_poll_thread; int if_poll_lock; int if_poll_active; int if_poll_req; } ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_1)
{



 FUNC_0(&VAR_1->if_poll_lock);
 VAR_1->if_poll_req++;
 if (!VAR_1->if_poll_active && VAR_1->if_poll_thread != VAR_0) {
  FUNC_2((caddr_t)&VAR_1->if_poll_thread);
 }
 FUNC_1(&VAR_1->if_poll_lock);
}
