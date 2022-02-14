
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ IER; scalar_t__ ISR; } ;
typedef scalar_t__ ITStatus ;
typedef TYPE_1__ ADC_TypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;

ITStatus FUNC_3(ADC_TypeDef* VAR_2, uint32_t VAR_3)
{
  ITStatus VAR_4 = VAR_0;
  uint32_t VAR_5 = 0;


  FUNC_2(FUNC_0(VAR_2));
  FUNC_2(FUNC_1(VAR_3));


  VAR_5 = (uint32_t)(VAR_2->IER & VAR_3);


  if (((uint32_t)(VAR_2->ISR & VAR_3) != (uint32_t)VAR_0) && (VAR_5 != (uint32_t)VAR_0))
  {

    VAR_4 = VAR_1;
  }
  else
  {

    VAR_4 = VAR_0;
  }

  return VAR_4;
}
