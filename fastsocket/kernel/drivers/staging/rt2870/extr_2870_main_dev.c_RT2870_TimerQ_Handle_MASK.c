
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ State; int TimerValue; int TimerObj; scalar_t__ Repeat; scalar_t__ cookie; int (* handle ) (int *,int ,int *,TYPE_4__*) ;} ;
struct TYPE_10__ {struct TYPE_10__* pNext; TYPE_4__* pRaTimer; } ;
struct TYPE_8__ {scalar_t__ status; TYPE_3__* pQPollFreeList; TYPE_3__* pQTail; TYPE_3__* pQHead; } ;
struct TYPE_9__ {TYPE_1__ TimerQ; int PM_FlgSuspend; int TimerQLock; int RTUSBTimer_semaphore; int TimerFunc_kill; } ;
typedef TYPE_2__ RTMP_ADAPTER ;
typedef TYPE_3__ RT2870_TIMER_ENTRY ;
typedef TYPE_4__ RALINK_TIMER_STRUCT ;
typedef int PVOID ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int *,int ,int *,TYPE_4__*) ;

__attribute__((used)) static void FUNC_6(RTMP_ADAPTER *VAR_3)
{
 int VAR_4;
 RALINK_TIMER_STRUCT *VAR_5;
 RT2870_TIMER_ENTRY *VAR_6;
 unsigned long VAR_7;

 while(!VAR_3->TimerFunc_kill)
 {

  VAR_5 = ((void*)0);

  VAR_4 = FUNC_4(&(VAR_3->RTUSBTimer_semaphore));

  if (VAR_3->TimerQ.status == VAR_1)
   break;


  while(VAR_3->TimerQ.pQHead)
  {
   FUNC_0(&VAR_3->TimerQLock, VAR_7);
   VAR_6 = VAR_3->TimerQ.pQHead;
   if (VAR_6)
   {
    VAR_5 = VAR_6->pRaTimer;


    VAR_3->TimerQ.pQHead = VAR_6->pNext;
    if (VAR_6 == VAR_3->TimerQ.pQTail)
     VAR_3->TimerQ.pQTail = ((void*)0);


    VAR_6->pNext = VAR_3->TimerQ.pQPollFreeList;
    VAR_3->TimerQ.pQPollFreeList = VAR_6;
   }
   FUNC_1(&VAR_3->TimerQLock, VAR_7);

   if (VAR_5)
   {
    if (VAR_5->handle != ((void*)0))
    if (!VAR_3->PM_FlgSuspend)
     VAR_5->handle(((void*)0), (PVOID) VAR_5->cookie, ((void*)0), VAR_5);
    if ((VAR_5->Repeat) && (VAR_5->State == VAR_0))
     FUNC_2(&VAR_5->TimerObj, VAR_5->TimerValue);
   }
  }

  if (VAR_4 != 0)
  {
   VAR_3->TimerQ.status = VAR_1;
   FUNC_3(VAR_3, VAR_2);
   break;
  }
 }
}
