
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int* IP; int* ISER; int* ICER; } ;
struct TYPE_4__ {scalar_t__ NVIC_IRQChannelCmd; int NVIC_IRQChannel; scalar_t__ NVIC_IRQChannelPriority; } ;
typedef TYPE_1__ NVIC_InitTypeDef ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (int ) ;

void FUNC_3(NVIC_InitTypeDef* VAR_2)
{
  uint32_t VAR_3 = 0x00;


  FUNC_2(FUNC_0(VAR_2->NVIC_IRQChannelCmd));
  FUNC_2(FUNC_1(VAR_2->NVIC_IRQChannelPriority));

  if (VAR_2->NVIC_IRQChannelCmd != VAR_0)
  {

    VAR_3 = VAR_1->IP[VAR_2->NVIC_IRQChannel >> 0x02];
    VAR_3 &= (uint32_t)(~(((uint32_t)0xFF) << ((VAR_2->NVIC_IRQChannel & 0x03) * 8)));
    VAR_3 |= (uint32_t)((((uint32_t)VAR_2->NVIC_IRQChannelPriority << 6) & 0xFF) << ((VAR_2->NVIC_IRQChannel & 0x03) * 8));

    VAR_1->IP[VAR_2->NVIC_IRQChannel >> 0x02] = VAR_3;


    VAR_1->ISER[0] = (uint32_t)0x01 << (VAR_2->NVIC_IRQChannel & (uint8_t)0x1F);
  }
  else
  {

    VAR_1->ICER[0] = (uint32_t)0x01 << (VAR_2->NVIC_IRQChannel & (uint8_t)0x1F);
  }
}
