
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int CR1; } ;
typedef TYPE_1__ TIM_TypeDef ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

void FUNC_3(TIM_TypeDef* VAR_2, uint16_t VAR_3)
{
  uint16_t VAR_4 = 0;


  FUNC_2(FUNC_1(VAR_2));
  FUNC_2(FUNC_0(VAR_3));

  VAR_4 = VAR_2->CR1;


  VAR_4 &= (uint16_t)~(VAR_1 | VAR_0);


  VAR_4 |= VAR_3;


  VAR_2->CR1 = VAR_4;
}
