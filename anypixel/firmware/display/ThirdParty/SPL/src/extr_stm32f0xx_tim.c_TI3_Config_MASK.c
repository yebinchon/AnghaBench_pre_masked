
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int CCER; int CCMR2; } ;
typedef TYPE_1__ TIM_TypeDef ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_0(TIM_TypeDef* VAR_5, uint16_t VAR_6, uint16_t VAR_7,
                       uint16_t VAR_8)
{
  uint16_t VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;

  VAR_5->CCER &= (uint16_t)~((uint16_t)VAR_0);
  VAR_9 = VAR_5->CCMR2;
  VAR_10 = VAR_5->CCER;
  VAR_11 = (uint16_t)(VAR_6 << 8);

  VAR_9 &= (uint16_t)(((uint16_t)~((uint16_t)VAR_3)) & ((uint16_t)~((uint16_t)VAR_4)));
  VAR_9 |= (uint16_t)(VAR_7 | (uint16_t)(VAR_8 << (uint16_t)4));

  VAR_10 &= (uint16_t)~((uint16_t)(VAR_2 | VAR_1));
  VAR_10 |= (uint16_t)(VAR_11 | (uint16_t)VAR_0);

  VAR_5->CCMR2 = VAR_9;
  VAR_5->CCER = VAR_10;
}
