
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int* IP; int* ISER; int* ICER; } ;
struct TYPE_6__ {int AIRCR; } ;
struct TYPE_5__ {scalar_t__ NVIC_IRQChannelCmd; int NVIC_IRQChannelPreemptionPriority; int NVIC_IRQChannelSubPriority; size_t NVIC_IRQChannel; } ;
typedef TYPE_1__ NVIC_InitTypeDef ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_4__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (int ) ;

void FUNC_4(NVIC_InitTypeDef* VAR_3)
{
  uint8_t VAR_4 = 0x00, VAR_5 = 0x00, VAR_6 = 0x0F;


  FUNC_3(FUNC_0(VAR_3->NVIC_IRQChannelCmd));
  FUNC_3(FUNC_1(VAR_3->NVIC_IRQChannelPreemptionPriority));
  FUNC_3(FUNC_2(VAR_3->NVIC_IRQChannelSubPriority));

  if (VAR_3->NVIC_IRQChannelCmd != VAR_0)
  {

    VAR_4 = (0x700 - ((VAR_2->AIRCR) & (uint32_t)0x700))>> 0x08;
    VAR_5 = (0x4 - VAR_4);
    VAR_6 = VAR_6 >> VAR_4;

    VAR_4 = VAR_3->NVIC_IRQChannelPreemptionPriority << VAR_5;
    VAR_4 |= (uint8_t)(VAR_3->NVIC_IRQChannelSubPriority & VAR_6);

    VAR_4 = VAR_4 << 0x04;

    VAR_1->IP[VAR_3->NVIC_IRQChannel] = VAR_4;


    VAR_1->ISER[VAR_3->NVIC_IRQChannel >> 0x05] =
      (uint32_t)0x01 << (VAR_3->NVIC_IRQChannel & (uint8_t)0x1F);
  }
  else
  {

    VAR_1->ICER[VAR_3->NVIC_IRQChannel >> 0x05] =
      (uint32_t)0x01 << (VAR_3->NVIC_IRQChannel & (uint8_t)0x1F);
  }
}
