
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_11__ {int CR2; int CR1; int CR3; void* BRR; } ;
typedef TYPE_1__ USART_TypeDef ;
struct TYPE_12__ {int USART_BaudRate; int USART_Parity; int USART_Mode; int USART_HardwareFlowControl; scalar_t__ USART_WordLength; scalar_t__ USART_StopBits; } ;
typedef TYPE_2__ USART_InitTypeDef ;
struct TYPE_13__ {int PCLK2_Frequency; int PCLK1_Frequency; } ;
typedef TYPE_3__ RCC_ClocksTypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_3__*) ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ) ;

void FUNC_10(USART_TypeDef* VAR_7, USART_InitTypeDef* VAR_8)
{
  uint32_t VAR_9 = 0x00, VAR_10 = 0x00;
  uint32_t VAR_11 = 0x00;
  uint32_t VAR_12 = 0x00;
  RCC_ClocksTypeDef VAR_13;


  FUNC_9(FUNC_1(VAR_7));
  FUNC_9(FUNC_2(VAR_8->USART_BaudRate));
  FUNC_9(FUNC_7(VAR_8->USART_WordLength));
  FUNC_9(FUNC_6(VAR_8->USART_StopBits));
  FUNC_9(FUNC_5(VAR_8->USART_Parity));
  FUNC_9(FUNC_4(VAR_8->USART_Mode));
  FUNC_9(FUNC_3(VAR_8->USART_HardwareFlowControl));


  if (VAR_8->USART_HardwareFlowControl != VAR_6)
  {
    FUNC_9(FUNC_0(VAR_7));
  }


  VAR_9 = VAR_7->CR2;


  VAR_9 &= (uint32_t)~((uint32_t)VAR_5);



  VAR_9 |= (uint32_t)VAR_8->USART_StopBits;


  VAR_7->CR2 = (uint16_t)VAR_9;


  VAR_9 = VAR_7->CR1;


  VAR_9 &= (uint32_t)~((uint32_t)VAR_0);





  VAR_9 |= (uint32_t)VAR_8->USART_WordLength | VAR_8->USART_Parity |
            VAR_8->USART_Mode;


  VAR_7->CR1 = (uint16_t)VAR_9;


  VAR_9 = VAR_7->CR3;


  VAR_9 &= (uint32_t)~((uint32_t)VAR_1);



  VAR_9 |= VAR_8->USART_HardwareFlowControl;


  VAR_7->CR3 = (uint16_t)VAR_9;



  FUNC_8(&VAR_13);

  if ((VAR_7 == VAR_2) || (VAR_7 == VAR_3))
  {
    VAR_10 = VAR_13.PCLK2_Frequency;
  }
  else
  {
    VAR_10 = VAR_13.PCLK1_Frequency;
  }


  if ((VAR_7->CR1 & VAR_4) != 0)
  {

    VAR_11 = ((25 * VAR_10) / (2 * (VAR_8->USART_BaudRate)));
  }
  else
  {

    VAR_11 = ((25 * VAR_10) / (4 * (VAR_8->USART_BaudRate)));
  }
  VAR_9 = (VAR_11 / 100) << 4;


  VAR_12 = VAR_11 - (100 * (VAR_9 >> 4));


  if ((VAR_7->CR1 & VAR_4) != 0)
  {
    VAR_9 |= ((((VAR_12 * 8) + 50) / 100)) & ((uint8_t)0x07);
  }
  else
  {
    VAR_9 |= ((((VAR_12 * 16) + 50) / 100)) & ((uint8_t)0x0F);
  }


  VAR_7->BRR = (uint16_t)VAR_9;
}
