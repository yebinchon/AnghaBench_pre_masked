
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef int u16_t ;
struct zsTimerEntry {scalar_t__ timer; struct zsTimerEntry* pre; struct zsTimerEntry* next; int event; } ;
struct TYPE_3__ {int freeCount; struct zsTimerEntry* tail; struct zsTimerEntry* head; } ;
struct TYPE_4__ {scalar_t__ tick; TYPE_1__ timerList; int bTimerReady; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

u16_t FUNC_5(zdev_t* VAR_2)
{
    struct zsTimerEntry *VAR_3;
    struct zsTimerEntry *VAR_4 = ((void*)0);
    u16_t VAR_5[VAR_0];
    u8_t VAR_6, VAR_7=0, VAR_8;

    FUNC_3(VAR_2);

    FUNC_1();

    if ( !VAR_1->bTimerReady )
    {
        return 0;
    }

    FUNC_2(VAR_2);

    VAR_3 = VAR_1->timerList.head;
    VAR_8 = VAR_0 - VAR_1->timerList.freeCount;

    for( VAR_6=0; VAR_6<VAR_8; VAR_6++ )
    {

        if ( ( VAR_3->timer > VAR_1->tick )&&
             ((VAR_3->timer - VAR_1->tick) < 1000000000) )
        {
            break;
        }

        VAR_5[VAR_7++] = VAR_3->event;
        VAR_4 = VAR_3;
        VAR_3 = VAR_3->next;
    }

    if ( VAR_7 > 0 )
    {
        VAR_1->timerList.tail->next = VAR_1->timerList.head;
        VAR_1->timerList.head->pre = VAR_1->timerList.tail;
        VAR_1->timerList.head = VAR_3;
        VAR_1->timerList.tail = VAR_4;
        VAR_1->timerList.freeCount += VAR_7;

    }

    FUNC_4(VAR_2);

    FUNC_0(VAR_2, VAR_5, VAR_7);

    return 0;
}
