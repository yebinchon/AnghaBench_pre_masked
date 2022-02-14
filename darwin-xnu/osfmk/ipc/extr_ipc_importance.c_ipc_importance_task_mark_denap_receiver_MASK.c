
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ipc_importance_task_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {scalar_t__ iit_assertcnt; scalar_t__ iit_externcnt; scalar_t__ iit_receiver; int iit_denap; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;

void
FUNC_5(ipc_importance_task_t VAR_0, boolean_t VAR_1)
{
 FUNC_1(VAR_0 != ((void*)0));

 FUNC_2();
 if (VAR_1) {
  FUNC_1(VAR_0->iit_assertcnt == 0);
  FUNC_1(VAR_0->iit_externcnt == 0);
  FUNC_1(VAR_0->iit_receiver == 0);
  VAR_0->iit_denap = 1;
 } else if (VAR_0->iit_denap) {
  FUNC_1(VAR_0->iit_receiver == 0);
  if (0 < VAR_0->iit_assertcnt || 0 < FUNC_0(VAR_0)) {
   FUNC_4("disabling de-nap on task with pending de-nap boosts!");
  }
  VAR_0->iit_denap = 0;
 }
 FUNC_3();
}
