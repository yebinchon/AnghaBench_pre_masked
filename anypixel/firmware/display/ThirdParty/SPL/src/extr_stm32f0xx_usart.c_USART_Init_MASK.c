
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_10__ {int CR1; int CR2; int CR3; int BRR; } ;
typedef TYPE_1__ USART_TypeDef ;
struct TYPE_11__ {int USART_BaudRate; int USART_Parity; int USART_Mode; int USART_HardwareFlowControl; scalar_t__ USART_WordLength; scalar_t__ USART_StopBits; } ;
typedef TYPE_2__ USART_InitTypeDef ;
struct TYPE_12__ {int USART1CLK_Frequency; int USART2CLK_Frequency; int PCLK_Frequency; } ;
typedef TYPE_3__ RCC_ClocksTypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (int ) ;

void FUNC_9(USART_TypeDef* VAR_7, USART_InitTypeDef* VAR_8)
{
  uint32_t VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
  RCC_ClocksTypeDef VAR_12;


  FUNC_8(FUNC_0(VAR_7));
  FUNC_8(FUNC_1(VAR_8->USART_BaudRate));
  FUNC_8(FUNC_6(VAR_8->USART_WordLength));
  FUNC_8(FUNC_5(VAR_8->USART_StopBits));
  FUNC_8(FUNC_4(VAR_8->USART_Parity));
  FUNC_8(FUNC_3(VAR_8->USART_Mode));
  FUNC_8(FUNC_2(VAR_8->USART_HardwareFlowControl));


  VAR_7->CR1 &= (uint32_t)~((uint32_t)VAR_5);


  VAR_11 = VAR_7->CR2;

  VAR_11 &= (uint32_t)~((uint32_t)VAR_6);



  VAR_11 |= (uint32_t)VAR_8->USART_StopBits;


  VAR_7->CR2 = VAR_11;


  VAR_11 = VAR_7->CR1;

  VAR_11 &= (uint32_t)~((uint32_t)VAR_0);





  VAR_11 |= (uint32_t)VAR_8->USART_WordLength | VAR_8->USART_Parity |
    VAR_8->USART_Mode;


  VAR_7->CR1 = VAR_11;


  VAR_11 = VAR_7->CR3;

  VAR_11 &= (uint32_t)~((uint32_t)VAR_1);



  VAR_11 |= VAR_8->USART_HardwareFlowControl;


  VAR_7->CR3 = VAR_11;



  FUNC_7(&VAR_12);

  if (VAR_7 == VAR_2)
  {
    VAR_10 = VAR_12.USART1CLK_Frequency;
  }
  else if (VAR_7 == VAR_3)
  {
    VAR_10 = VAR_12.USART2CLK_Frequency;
  }
  else
  {
    VAR_10 = VAR_12.PCLK_Frequency;
  }


  if ((VAR_7->CR1 & VAR_4) != 0)
  {

    VAR_9 = (uint32_t)((2 * VAR_10) / (VAR_8->USART_BaudRate));
    VAR_11 = (uint32_t)((2 * VAR_10) % (VAR_8->USART_BaudRate));
  }
  else
  {

    VAR_9 = (uint32_t)((VAR_10) / (VAR_8->USART_BaudRate));
    VAR_11 = (uint32_t)((VAR_10) % (VAR_8->USART_BaudRate));
  }


  if (VAR_11 >= (VAR_8->USART_BaudRate) / 2)
  {
    VAR_9++;
  }


  if ((VAR_7->CR1 & VAR_4) != 0)
  {

    VAR_11 = (VAR_9 & (uint16_t)0x000F) >> 1;


    VAR_9 = (VAR_9 & (uint16_t)0xFFF0) | VAR_11;
  }


  VAR_7->BRR = (uint16_t)VAR_9;
}
