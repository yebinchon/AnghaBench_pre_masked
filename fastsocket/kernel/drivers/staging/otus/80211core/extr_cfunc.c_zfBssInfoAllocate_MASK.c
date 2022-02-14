
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct zsBssInfo {int dummy; } ;
struct TYPE_3__ {scalar_t__ bssInfoFreeCount; size_t bssInfoArrayHead; struct zsBssInfo** bssInfoArray; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

struct zsBssInfo* FUNC_2(zdev_t* VAR_2)
{
    struct zsBssInfo* VAR_3;

    FUNC_1(VAR_2);

    if (VAR_1->sta.bssInfoFreeCount == 0)
        return ((void*)0);

    VAR_3 = VAR_1->sta.bssInfoArray[VAR_1->sta.bssInfoArrayHead];
    VAR_1->sta.bssInfoArray[VAR_1->sta.bssInfoArrayHead] = ((void*)0);
    VAR_1->sta.bssInfoArrayHead = (VAR_1->sta.bssInfoArrayHead + 1) & (VAR_0 - 1);
    VAR_1->sta.bssInfoFreeCount--;

    FUNC_0((u8_t*)VAR_3, sizeof(struct zsBssInfo));

    return VAR_3;
}
