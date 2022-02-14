
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int GPIOx; int speed; int PuPd; int otype; int mode; int pin; int af; int pinsource; } ;
struct TYPE_5__ {int GPIO_Speed; int GPIO_PuPd; int GPIO_OType; int GPIO_Mode; int GPIO_Pin; } ;
typedef TYPE_1__ GPIO_InitTypeDef ;
typedef TYPE_2__ CONFIG_Pin_TypeDef ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(const CONFIG_Pin_TypeDef *VAR_0, int VAR_1 ) {
    GPIO_InitTypeDef VAR_2;
    int VAR_3;

    for(VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {

        FUNC_1(VAR_0[VAR_3].GPIOx, VAR_0[VAR_3].pinsource, VAR_0[VAR_3].af);

        VAR_2.GPIO_Pin = VAR_0[VAR_3].pin;
        VAR_2.GPIO_Mode = VAR_0[VAR_3].mode;
        VAR_2.GPIO_OType = VAR_0[VAR_3].otype;
        VAR_2.GPIO_PuPd = VAR_0[VAR_3].PuPd;
        VAR_2.GPIO_Speed = VAR_0[VAR_3].speed;
        FUNC_0(VAR_0[VAR_3].GPIOx, &VAR_2);

    }
}
