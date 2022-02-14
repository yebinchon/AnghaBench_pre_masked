
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct zsBssInfo {scalar_t__ sortValue; scalar_t__ signalQuality; scalar_t__ signalStrength; } ;
struct TYPE_3__ {size_t bssInfoArrayTail; int bssInfoFreeCount; struct zsBssInfo** bssInfoArray; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_2, struct zsBssInfo* VAR_3)
{
    FUNC_1(VAR_2);

    FUNC_0(VAR_1->sta.bssInfoArray[VAR_1->sta.bssInfoArrayTail] == ((void*)0));

    VAR_3->signalStrength = VAR_3->signalQuality = 0;
    VAR_3->sortValue = 0;

    VAR_1->sta.bssInfoArray[VAR_1->sta.bssInfoArrayTail] = VAR_3;
    VAR_1->sta.bssInfoArrayTail = (VAR_1->sta.bssInfoArrayTail + 1) & (VAR_0 - 1);
    VAR_1->sta.bssInfoFreeCount++;
}
