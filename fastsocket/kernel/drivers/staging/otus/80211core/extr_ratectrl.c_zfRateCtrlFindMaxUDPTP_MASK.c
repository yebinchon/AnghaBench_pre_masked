
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
typedef scalar_t__ u32_t ;
struct zsRcCell {size_t currentRateIndex; size_t* operationRateSet; scalar_t__ operationRateCount; } ;
struct TYPE_2__ {int * PER; } ;


 TYPE_1__* VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 size_t FUNC_1 (size_t,scalar_t__) ;
 int FUNC_2 (int *) ;

u8_t FUNC_3(zdev_t* VAR_2, struct zsRcCell* VAR_3) {
    u8_t VAR_4, VAR_5=0, VAR_6;
    u32_t VAR_7=0, VAR_8;

    FUNC_2(VAR_2);

    VAR_6 = FUNC_1(VAR_3->currentRateIndex+3, VAR_3->operationRateCount-1);
    for (VAR_4=VAR_3->currentRateIndex; VAR_4 < VAR_6; VAR_4++) {
        VAR_8 = FUNC_0(VAR_2, VAR_1[VAR_3->operationRateSet[VAR_4]],
            VAR_0->PER[VAR_3->operationRateSet[VAR_4]]);
        if (VAR_7 < VAR_8) {
            VAR_7 = VAR_8;
            VAR_5 = VAR_4;
        }
    }

    return VAR_3->operationRateSet[VAR_5];
}
