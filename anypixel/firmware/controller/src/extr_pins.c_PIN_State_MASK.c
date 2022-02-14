
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {int pin; int GPIOx; } ;
typedef TYPE_1__ CONFIG_Pin_TypeDef ;


 int FUNC_0 (int ,int ) ;

bool FUNC_1(const CONFIG_Pin_TypeDef *VAR_0, uint8_t VAR_1) {
    return FUNC_0(VAR_0[VAR_1].GPIOx, VAR_0[VAR_1].pin);
}
