
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {int CR1; int CR2; int CR3; int SR; } ;
typedef TYPE_1__ USART_TypeDef ;
typedef scalar_t__ ITStatus ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;

ITStatus FUNC_4(USART_TypeDef* VAR_4, uint16_t VAR_5)
{
  uint32_t VAR_6 = 0x00, VAR_7 = 0x00, VAR_8 = 0x00;
  ITStatus VAR_9 = VAR_1;

  FUNC_3(FUNC_1(VAR_4));
  FUNC_3(FUNC_2(VAR_5));


  if (VAR_5 == VAR_3)
  {
    FUNC_3(FUNC_0(VAR_4));
  }


  VAR_8 = (((uint8_t)VAR_5) >> 0x05);

  VAR_7 = VAR_5 & VAR_0;
  VAR_7 = (uint32_t)0x01 << VAR_7;

  if (VAR_8 == 0x01)
  {
    VAR_7 &= VAR_4->CR1;
  }
  else if (VAR_8 == 0x02)
  {
    VAR_7 &= VAR_4->CR2;
  }
  else
  {
    VAR_7 &= VAR_4->CR3;
  }

  VAR_6 = VAR_5 >> 0x08;
  VAR_6 = (uint32_t)0x01 << VAR_6;
  VAR_6 &= VAR_4->SR;
  if ((VAR_7 != (uint16_t)VAR_1)&&(VAR_6 != (uint16_t)VAR_1))
  {
    VAR_9 = VAR_2;
  }
  else
  {
    VAR_9 = VAR_1;
  }

  return VAR_9;
}
