
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef scalar_t__ u16_t ;
struct zsTimerEntry {scalar_t__ event; struct zsTimerEntry* next; struct zsTimerEntry* pre; } ;
struct TYPE_3__ {scalar_t__ freeCount; struct zsTimerEntry* tail; struct zsTimerEntry* head; } ;
struct TYPE_4__ {TYPE_1__ timerList; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;

u16_t FUNC_1(zdev_t* VAR_2, u16_t VAR_3)
{
    struct zsTimerEntry *VAR_4;
    u8_t VAR_5, VAR_6;

    FUNC_0(VAR_2);




    VAR_4 = VAR_1->timerList.head;
    VAR_6 = VAR_0 - VAR_1->timerList.freeCount;

    for( VAR_5=0; VAR_5<VAR_6; VAR_5++ )
    {
        if ( VAR_4->event == VAR_3 )
        {
            if ( VAR_4 == VAR_1->timerList.head )
            {
                VAR_1->timerList.head = VAR_4->next;
                VAR_1->timerList.tail->next = VAR_4;
                VAR_4->pre = VAR_1->timerList.tail;
                VAR_1->timerList.tail = VAR_4;
                VAR_4 = VAR_1->timerList.head;
            }
            else
            {
                VAR_4->pre->next = VAR_4->next;
                VAR_4->next->pre = VAR_4->pre;
                VAR_1->timerList.tail->next = VAR_4;
                VAR_4->pre = VAR_1->timerList.tail;
                VAR_1->timerList.tail = VAR_4;
                VAR_4 = VAR_4->next;
            }

            VAR_1->timerList.freeCount++;
        }
        else
        {
            VAR_4 = VAR_4->next;
        }
    }



    return 0;
}
