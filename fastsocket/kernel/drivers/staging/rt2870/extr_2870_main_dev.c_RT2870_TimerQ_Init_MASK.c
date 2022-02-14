
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int status; int * pQTail; int * pQHead; TYPE_2__* pQPollFreeList; scalar_t__ pTimerQPoll; } ;
struct TYPE_7__ {struct TYPE_7__* pNext; } ;
struct TYPE_6__ {int TimerQLock; TYPE_5__ TimerQ; } ;
typedef TYPE_1__ RTMP_ADAPTER ;
typedef TYPE_2__ RT2870_TIMER_ENTRY ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*,scalar_t__*,int) ;

void FUNC_5(RTMP_ADAPTER *VAR_2)
{
 int VAR_3;
 RT2870_TIMER_ENTRY *VAR_4, *VAR_5;
 unsigned long VAR_6;

 FUNC_0(&VAR_2->TimerQLock);

 FUNC_2(&VAR_2->TimerQLock, VAR_6);
 FUNC_1(&VAR_2->TimerQ, sizeof(VAR_2->TimerQ));





 FUNC_4(VAR_2, &VAR_2->TimerQ.pTimerQPoll, sizeof(RT2870_TIMER_ENTRY) * VAR_1);
 if (VAR_2->TimerQ.pTimerQPoll)
 {
  VAR_5 = ((void*)0);
  VAR_4 = (RT2870_TIMER_ENTRY *)VAR_2->TimerQ.pTimerQPoll;
  for (VAR_3 = 0 ;VAR_3 <VAR_1; VAR_3++)
  {
   VAR_4->pNext = VAR_5;
   VAR_5 = VAR_4;
   VAR_4++;
  }
  VAR_2->TimerQ.pQPollFreeList = VAR_5;
  VAR_2->TimerQ.pQHead = ((void*)0);
  VAR_2->TimerQ.pQTail = ((void*)0);
  VAR_2->TimerQ.status = VAR_0;
 }
 FUNC_3(&VAR_2->TimerQLock, VAR_6);
}
