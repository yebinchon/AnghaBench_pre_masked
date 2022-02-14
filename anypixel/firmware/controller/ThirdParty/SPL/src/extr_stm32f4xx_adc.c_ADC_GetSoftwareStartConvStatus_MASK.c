
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int CR2; } ;
typedef scalar_t__ FlagStatus ;
typedef TYPE_1__ ADC_TypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;

FlagStatus FUNC_2(ADC_TypeDef* VAR_3)
{
  FlagStatus VAR_4 = VAR_1;

  FUNC_1(FUNC_0(VAR_3));


  if ((VAR_3->CR2 & VAR_0) != (uint32_t)VAR_1)
  {

    VAR_4 = VAR_2;
  }
  else
  {

    VAR_4 = VAR_1;
  }


  return VAR_4;
}
