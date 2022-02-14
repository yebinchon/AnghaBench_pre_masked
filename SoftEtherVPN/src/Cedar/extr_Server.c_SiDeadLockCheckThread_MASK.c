
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ HaltDeadLockThread; int DeadLockWaitEvent; } ;
typedef int THREAD ;
typedef TYPE_1__ SERVER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(THREAD *VAR_2, void *VAR_3)
{
 SERVER *VAR_4 = (SERVER *)VAR_3;

 if (VAR_4 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 while (1)
 {
  FUNC_1(VAR_4->DeadLockWaitEvent, VAR_0);

  if (VAR_4->HaltDeadLockThread)
  {
   break;
  }

  FUNC_0(VAR_4, VAR_1);
 }
}
