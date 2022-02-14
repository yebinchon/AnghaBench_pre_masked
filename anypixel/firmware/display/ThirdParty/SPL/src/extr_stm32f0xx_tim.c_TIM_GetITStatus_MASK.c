
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int SR; int DIER; } ;
typedef TYPE_1__ TIM_TypeDef ;
typedef scalar_t__ ITStatus ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;

ITStatus FUNC_3(TIM_TypeDef* VAR_2, uint16_t VAR_3)
{
  ITStatus VAR_4 = VAR_0;
  uint16_t VAR_5 = 0x0, VAR_6 = 0x0;


  FUNC_2(FUNC_0(VAR_2));
  FUNC_2(FUNC_1(VAR_3));

  VAR_5 = VAR_2->SR & VAR_3;

  VAR_6 = VAR_2->DIER & VAR_3;
  if ((VAR_5 != (uint16_t)VAR_0) && (VAR_6 != (uint16_t)VAR_0))
  {
    VAR_4 = VAR_1;
  }
  else
  {
    VAR_4 = VAR_0;
  }
  return VAR_4;
}
