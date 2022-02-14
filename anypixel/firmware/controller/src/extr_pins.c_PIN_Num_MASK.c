
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int pin; int GPIOx; } ;
typedef TYPE_1__ CONFIG_Pin_TypeDef ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(const CONFIG_Pin_TypeDef *VAR_0, uint16_t VAR_1, uint8_t VAR_2) {
    int VAR_3;
    for(VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        if(VAR_1 & 1)
            FUNC_1(VAR_0[VAR_3].GPIOx, VAR_0[VAR_3].pin);
        else
            FUNC_0(VAR_0[VAR_3].GPIOx, VAR_0[VAR_3].pin);
        VAR_1 >>= 1;
    }
}
