
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* pNext; } ;
struct TYPE_6__ {int status; TYPE_3__* pQHead; int * pQTail; int pTimerQPoll; int * pQPollFreeList; } ;
struct TYPE_7__ {int TimerQLock; TYPE_1__ TimerQ; } ;
typedef TYPE_2__ RTMP_ADAPTER ;
typedef TYPE_3__ RT2870_TIMER_ENTRY ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (TYPE_2__*,int ) ;

void FUNC_3(RTMP_ADAPTER *VAR_1)
{
 RT2870_TIMER_ENTRY *VAR_2;
 unsigned long VAR_3;

 FUNC_0(&VAR_1->TimerQLock, VAR_3);
 while (VAR_1->TimerQ.pQHead)
 {
  VAR_2 = VAR_1->TimerQ.pQHead;
  VAR_1->TimerQ.pQHead = VAR_2->pNext;

 }
 VAR_1->TimerQ.pQPollFreeList = ((void*)0);
 FUNC_2(VAR_1, VAR_1->TimerQ.pTimerQPoll);
 VAR_1->TimerQ.pQTail = ((void*)0);
 VAR_1->TimerQ.pQHead = ((void*)0);
 VAR_1->TimerQ.status = VAR_0;
 FUNC_1(&VAR_1->TimerQLock, VAR_3);

}
