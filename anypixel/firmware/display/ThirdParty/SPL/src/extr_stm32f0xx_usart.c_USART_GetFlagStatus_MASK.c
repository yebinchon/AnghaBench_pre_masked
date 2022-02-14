
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int ISR; } ;
typedef TYPE_1__ USART_TypeDef ;
typedef scalar_t__ FlagStatus ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;

FlagStatus FUNC_3(USART_TypeDef* VAR_2, uint32_t VAR_3)
{
  FlagStatus VAR_4 = VAR_0;

  FUNC_2(FUNC_0(VAR_2));
  FUNC_2(FUNC_1(VAR_3));

  if ((VAR_2->ISR & VAR_3) != (uint16_t)VAR_0)
  {
    VAR_4 = VAR_1;
  }
  else
  {
    VAR_4 = VAR_0;
  }
  return VAR_4;
}
