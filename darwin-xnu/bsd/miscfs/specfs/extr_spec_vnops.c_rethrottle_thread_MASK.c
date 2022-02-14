
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
typedef int boolean_t ;
struct TYPE_4__ {int uu_is_throttled; int uu_was_rethrottled; int uu_on_throttlelist; int uu_rethrottle_lock; int uu_thread; int * uu_throttle_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int,int,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int*) ;

void
FUNC_8(uthread_t VAR_3)
{




 if (VAR_3->uu_throttle_info == ((void*)0))
  return;

 boolean_t VAR_4 = FUNC_4(VAR_1);
 FUNC_2(&VAR_3->uu_rethrottle_lock);

 if (!VAR_3->uu_is_throttled)
  VAR_3->uu_was_rethrottled = 1;
 else {
  int VAR_5 = FUNC_6(VAR_3);

  if (VAR_5 != VAR_3->uu_on_throttlelist) {






   VAR_3->uu_is_throttled = 0;
   FUNC_7(&VAR_3->uu_on_throttlelist);

   VAR_2++;
   FUNC_1((FUNC_0(VAR_0, 102)), FUNC_5(VAR_3->uu_thread), VAR_3->uu_on_throttlelist, VAR_5, 0, 0);
  }
 }
 FUNC_3(&VAR_3->uu_rethrottle_lock);
 FUNC_4(VAR_4);
}
