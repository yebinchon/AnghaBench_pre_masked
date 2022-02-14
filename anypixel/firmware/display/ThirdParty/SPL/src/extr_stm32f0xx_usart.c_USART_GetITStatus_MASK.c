
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int CR1; int CR2; int CR3; int ISR; } ;
typedef TYPE_1__ USART_TypeDef ;
typedef scalar_t__ ITStatus ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;

ITStatus FUNC_3(USART_TypeDef* VAR_3, uint32_t VAR_4)
{
  uint32_t VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
  ITStatus VAR_8 = VAR_1;

  FUNC_2(FUNC_0(VAR_3));
  FUNC_2(FUNC_1(VAR_4));


  VAR_7 = (((uint16_t)VAR_4) >> 0x08);

  VAR_6 = VAR_4 & VAR_0;
  VAR_6 = (uint32_t)0x01 << VAR_6;

  if (VAR_7 == 0x01)
  {
    VAR_6 &= VAR_3->CR1;
  }
  else if (VAR_7 == 0x02)
  {
    VAR_6 &= VAR_3->CR2;
  }
  else
  {
    VAR_6 &= VAR_3->CR3;
  }

  VAR_5 = VAR_4 >> 0x10;
  VAR_5 = (uint32_t)0x01 << VAR_5;
  VAR_5 &= VAR_3->ISR;
  if ((VAR_6 != (uint16_t)VAR_1)&&(VAR_5 != (uint16_t)VAR_1))
  {
    VAR_8 = VAR_2;
  }
  else
  {
    VAR_8 = VAR_1;
  }

  return VAR_8;
}
