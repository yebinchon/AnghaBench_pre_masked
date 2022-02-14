
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
struct zsBssInfo {scalar_t__ sortValue; struct zsBssInfo* next; } ;
struct TYPE_4__ {int bssCount; struct zsBssInfo* head; struct zsBssInfo* tail; } ;
struct TYPE_5__ {TYPE_1__ bssList; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(zdev_t* VAR_1)
{
    struct zsBssInfo* VAR_2 = ((void*)0);
    struct zsBssInfo* VAR_3 = ((void*)0);
    struct zsBssInfo* VAR_4 = ((void*)0);
    struct zsBssInfo* VAR_5 = ((void*)0);
    u8_t VAR_6 = 0;

    FUNC_2(VAR_1);

    FUNC_0();

    FUNC_1(VAR_1);

    if (VAR_0->sta.bssList.bssCount > 1)
    {
        VAR_3 = VAR_0->sta.bssList.head;
        VAR_0->sta.bssList.tail = VAR_3;
        VAR_2 = VAR_3->next;
        VAR_3->next = ((void*)0);
        while (VAR_2 != ((void*)0))
        {
            VAR_6 = 0;
            while (1)
            {

                if( VAR_2->sortValue >= VAR_3->sortValue)
                {
                    if (VAR_6==0)
                    {

                        VAR_0->sta.bssList.head = VAR_2;
                        VAR_4 = VAR_2->next;
                        VAR_2->next = VAR_3;
                        break;
                    }
                    else
                    {

                        VAR_5->next = VAR_2;
                        VAR_4 = VAR_2->next;
                        VAR_2->next = VAR_3;
                        break;
                    }
                }
                else
                {
                    if (VAR_3->next != ((void*)0))
                    {

                        VAR_5 = VAR_3;
                        VAR_3 = VAR_3->next;
                    }
                    else
                    {

                        VAR_3->next = VAR_2;
                        VAR_4 = VAR_2->next;
                        VAR_0->sta.bssList.tail = VAR_2;
                        VAR_2->next = ((void*)0);
                        break;
                    }
                }
                VAR_6++;
            }
            VAR_2 = VAR_4;
            VAR_3 = VAR_0->sta.bssList.head;
        }
    }

    FUNC_3(VAR_1);
}
