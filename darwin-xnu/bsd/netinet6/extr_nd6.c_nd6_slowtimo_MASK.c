
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nd_ifinfo {scalar_t__ initialized; scalar_t__ recalctm; int lock; scalar_t__ basereachable; int reachable; } ;
struct TYPE_3__ {struct ifnet* tqe_next; } ;
struct ifnet {TYPE_1__ if_link; } ;
struct TYPE_4__ {struct ifnet* tqh_first; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct nd_ifinfo* FUNC_1 (struct ifnet*) ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (void (*) (void*),int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(void *VAR_5)
{
#pragma unused(arg)
 struct nd_ifinfo *VAR_6 = ((void*)0);
 struct ifnet *VAR_7 = ((void*)0);

 FUNC_3();
 for (VAR_7 = VAR_3.tqh_first; VAR_7;
     VAR_7 = VAR_7->if_link.tqe_next) {
  VAR_6 = FUNC_1(VAR_7);
  if ((((void*)0) == VAR_6) || (VAR_0 == VAR_6->initialized)) {
   continue;
  }

  FUNC_4(&VAR_6->lock);
  if (VAR_6->basereachable &&
      (VAR_6->recalctm -= VAR_1) <= 0) {






   VAR_6->recalctm = VAR_4;
   VAR_6->reachable =
       FUNC_0(VAR_6->basereachable);
  }
  FUNC_5(&VAR_6->lock);
 }
 FUNC_2();
 FUNC_6(FUNC_7, ((void*)0), VAR_1 * VAR_2);
}
