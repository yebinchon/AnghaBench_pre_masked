
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
struct zsBssInfo {int dummy; } ;
struct TYPE_4__ {int * tail; int * head; scalar_t__ bssCount; } ;
struct TYPE_5__ {size_t bssInfoFreeCount; int * bssInfoArray; scalar_t__ bssInfoArrayTail; scalar_t__ bssInfoArrayHead; TYPE_1__ bssList; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;


 size_t VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_2)
{
    u8_t VAR_3;

    FUNC_3(VAR_2);

    FUNC_1();

    FUNC_2(VAR_2);

    VAR_1->sta.bssList.bssCount = 0;
    VAR_1->sta.bssList.head = ((void*)0);
    VAR_1->sta.bssList.tail = ((void*)0);
    VAR_1->sta.bssInfoArrayHead = 0;
    VAR_1->sta.bssInfoArrayTail = 0;
    VAR_1->sta.bssInfoFreeCount = VAR_0;

    for( VAR_3=0; VAR_3< VAR_0; VAR_3++ )
    {

        VAR_1->sta.bssInfoArray[VAR_3] = FUNC_0(VAR_2, sizeof(struct zsBssInfo));

    }

    FUNC_4(VAR_2);
}
