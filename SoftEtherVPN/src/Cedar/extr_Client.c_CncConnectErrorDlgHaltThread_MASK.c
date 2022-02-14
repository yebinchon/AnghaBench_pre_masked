
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int Sock; int Event; scalar_t__ HaltThread; TYPE_1__* Session; } ;
struct TYPE_3__ {scalar_t__ Halt; } ;
typedef int THREAD ;
typedef TYPE_2__ CNC_CONNECT_ERROR_DLG_THREAD_PARAM ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(THREAD *VAR_0, void *VAR_1)
{
 CNC_CONNECT_ERROR_DLG_THREAD_PARAM *VAR_2 = (CNC_CONNECT_ERROR_DLG_THREAD_PARAM *)VAR_1;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 while (1)
 {
  if (VAR_2->Session->Halt || VAR_2->HaltThread)
  {
   break;
  }

  FUNC_1(VAR_2->Event, 100);
 }

 FUNC_0(VAR_2->Sock);
}
