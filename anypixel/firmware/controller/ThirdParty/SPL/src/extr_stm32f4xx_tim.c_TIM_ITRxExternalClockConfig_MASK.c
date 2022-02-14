
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int SMCR; } ;
typedef TYPE_1__ TIM_TypeDef ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

void FUNC_4(TIM_TypeDef* VAR_1, uint16_t VAR_2)
{

  FUNC_3(FUNC_1(VAR_1));
  FUNC_3(FUNC_0(VAR_2));


  FUNC_2(VAR_1, VAR_2);


  VAR_1->SMCR |= VAR_0;
}
