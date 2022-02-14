
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int CR2; } ;
typedef TYPE_1__ USART_TypeDef ;
struct TYPE_7__ {int USART_CPOL; int USART_CPHA; int USART_LastBit; scalar_t__ USART_Clock; } ;
typedef TYPE_2__ USART_ClockInitTypeDef ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;

void FUNC_6(USART_TypeDef* VAR_1, USART_ClockInitTypeDef* VAR_2)
{
  uint32_t VAR_3 = 0x00;

  FUNC_5(FUNC_0(VAR_1));
  FUNC_5(FUNC_1(VAR_2->USART_Clock));
  FUNC_5(FUNC_3(VAR_2->USART_CPOL));
  FUNC_5(FUNC_2(VAR_2->USART_CPHA));
  FUNC_5(FUNC_4(VAR_2->USART_LastBit));


  VAR_3 = VAR_1->CR2;

  VAR_3 &= (uint32_t)~((uint32_t)VAR_0);





  VAR_3 |= (uint32_t)VAR_2->USART_Clock | VAR_2->USART_CPOL |
                 VAR_2->USART_CPHA | VAR_2->USART_LastBit;

  VAR_1->CR2 = (uint16_t)VAR_3;
}
