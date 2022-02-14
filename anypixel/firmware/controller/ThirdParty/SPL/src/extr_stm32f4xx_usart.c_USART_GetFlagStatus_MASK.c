
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int SR; } ;
typedef TYPE_1__ USART_TypeDef ;
typedef scalar_t__ FlagStatus ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

FlagStatus FUNC_4(USART_TypeDef* VAR_3, uint16_t VAR_4)
{
  FlagStatus VAR_5 = VAR_0;

  FUNC_3(FUNC_1(VAR_3));
  FUNC_3(FUNC_2(VAR_4));


  if (VAR_4 == VAR_2)
  {
    FUNC_3(FUNC_0(VAR_3));
  }

  if ((VAR_3->SR & VAR_4) != (uint16_t)VAR_0)
  {
    VAR_5 = VAR_1;
  }
  else
  {
    VAR_5 = VAR_0;
  }
  return VAR_5;
}
