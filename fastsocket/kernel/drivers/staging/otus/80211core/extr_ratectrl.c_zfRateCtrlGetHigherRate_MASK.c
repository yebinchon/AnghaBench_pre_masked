
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8_t ;
struct zsRcCell {size_t currentRateIndex; scalar_t__ operationRateCount; size_t* operationRateSet; } ;



u8_t FUNC_0(struct zsRcCell* VAR_0)
{
    u8_t VAR_1;

    VAR_1 = VAR_0->currentRateIndex
            + (((VAR_0->currentRateIndex+1) < VAR_0->operationRateCount)?1:0);
    return VAR_0->operationRateSet[VAR_1];
}
