
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
typedef size_t u16_t ;
struct zsRcCell {size_t operationRateCount; scalar_t__* operationRateSet; size_t currentRateIndex; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

u8_t FUNC_1(struct zsRcCell* VAR_1, u8_t VAR_2)
{
    u16_t VAR_3;


    for (VAR_3=0; VAR_3<VAR_1->operationRateCount; VAR_3++)
    {
        if (VAR_2 == VAR_1->operationRateSet[VAR_3])
        {
            if (VAR_3 < VAR_1->currentRateIndex)
            {
                return ((VAR_1->currentRateIndex - VAR_3)+1)>>1;
            }
            else if (VAR_3 == VAR_1->currentRateIndex == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }

    FUNC_0(VAR_0, "Not in operation rate set:", VAR_2);
    return 1;

}
