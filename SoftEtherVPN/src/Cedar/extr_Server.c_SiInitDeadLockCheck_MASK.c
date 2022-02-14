
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int HaltDeadLockThread; int DeadLockCheckThread; int DeadLockWaitEvent; scalar_t__ DisableDeadLockCheck; } ;
typedef TYPE_1__ SERVER ;


 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_0 ;

void FUNC_2(SERVER *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }
 if (VAR_1->DisableDeadLockCheck)
 {
  return;
 }

 VAR_1->HaltDeadLockThread = 0;
 VAR_1->DeadLockWaitEvent = FUNC_0();
 VAR_1->DeadLockCheckThread = FUNC_1(VAR_0, VAR_1);
}
