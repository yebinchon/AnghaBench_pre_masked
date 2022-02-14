
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct TYPE_5__ {int freeCount; TYPE_1__* list; TYPE_1__* tail; TYPE_1__* head; } ;
struct TYPE_6__ {int bTimerReady; TYPE_2__ timerList; } ;
struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* pre; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_3)
{
    u8_t VAR_4;

    FUNC_1(VAR_3);

    FUNC_0("");

    VAR_2->timerList.freeCount = VAR_1;
    VAR_2->timerList.head = &(VAR_2->timerList.list[0]);
    VAR_2->timerList.tail = &(VAR_2->timerList.list[VAR_1-1]);
    VAR_2->timerList.head->pre = ((void*)0);
    VAR_2->timerList.head->next = &(VAR_2->timerList.list[1]);
    VAR_2->timerList.tail->pre = &(VAR_2->timerList.list[VAR_1-2]);
    VAR_2->timerList.tail->next = ((void*)0);

    for( VAR_4=1; VAR_4<(VAR_1-1); VAR_4++ )
    {
        VAR_2->timerList.list[VAR_4].pre = &(VAR_2->timerList.list[VAR_4-1]);
        VAR_2->timerList.list[VAR_4].next = &(VAR_2->timerList.list[VAR_4+1]);
    }

    VAR_2->bTimerReady = VAR_0;
}
