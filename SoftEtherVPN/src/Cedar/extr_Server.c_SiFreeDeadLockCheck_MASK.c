
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int HaltDeadLockThread; int * DeadLockWaitEvent; int * DeadLockCheckThread; } ;
typedef TYPE_1__ SERVER ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

void FUNC_4(SERVER *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_1->DeadLockCheckThread == ((void*)0))
 {
  return;
 }

 VAR_1->HaltDeadLockThread = 1;
 FUNC_2(VAR_1->DeadLockWaitEvent);

 FUNC_3(VAR_1->DeadLockCheckThread, VAR_0);

 FUNC_1(VAR_1->DeadLockCheckThread);
 VAR_1->DeadLockCheckThread = ((void*)0);

 FUNC_0(VAR_1->DeadLockWaitEvent);
 VAR_1->DeadLockWaitEvent = ((void*)0);

 VAR_1->HaltDeadLockThread = 0;
}
