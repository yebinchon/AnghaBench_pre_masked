
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int pin; int GPIOx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* VAR_1 ;

void FUNC_2(uint16_t VAR_2) {
    int VAR_3;
    for(VAR_3=0; VAR_3 < VAR_0; VAR_3++) {
        if(VAR_2 & 1)
            FUNC_1(VAR_1[VAR_3].GPIOx, VAR_1[VAR_3].pin);
        else
            FUNC_0(VAR_1[VAR_3].GPIOx, VAR_1[VAR_3].pin);
        VAR_2 >>= 1;
    }
}
