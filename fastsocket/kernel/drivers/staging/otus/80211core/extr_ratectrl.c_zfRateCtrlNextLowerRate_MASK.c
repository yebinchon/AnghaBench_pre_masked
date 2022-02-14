
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct zsRcCell {size_t currentRateIndex; int currentRate; int lastTime; scalar_t__ lasttxCount; scalar_t__ txCount; scalar_t__ failCount; int * operationRateSet; } ;
struct TYPE_2__ {int tick; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;

u8_t FUNC_2(zdev_t* VAR_2, struct zsRcCell* VAR_3)
{
    FUNC_1(VAR_2);
    if (VAR_3->currentRateIndex > 0)
    {
        VAR_3->currentRateIndex--;
        VAR_3->currentRate = VAR_3->operationRateSet[VAR_3->currentRateIndex];
    }
    FUNC_0(VAR_0, "Lower Tx Rate=", VAR_3->currentRate);

    VAR_3->failCount = VAR_3->txCount = 0;
    VAR_3->lasttxCount = 0;
    VAR_3->lastTime = VAR_1->tick;
    return VAR_3->currentRate;
}
