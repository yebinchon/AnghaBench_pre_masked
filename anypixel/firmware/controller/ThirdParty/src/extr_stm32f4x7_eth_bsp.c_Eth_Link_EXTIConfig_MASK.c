
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {void* EXTI_LineCmd; int EXTI_Trigger; int EXTI_Mode; int EXTI_Line; } ;
struct TYPE_8__ {int GPIO_Pin; int GPIO_PuPd; int GPIO_Mode; } ;
struct TYPE_7__ {int NVIC_IRQChannelPreemptionPriority; void* NVIC_IRQChannelCmd; int NVIC_IRQChannel; } ;
typedef TYPE_1__ NVIC_InitTypeDef ;
typedef TYPE_2__ GPIO_InitTypeDef ;
typedef TYPE_3__ EXTI_InitTypeDef ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int ,void*) ;
 int VAR_12 ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(void)
{
  GPIO_InitTypeDef VAR_13;
  EXTI_InitTypeDef VAR_14;
  NVIC_InitTypeDef VAR_15;


  FUNC_3(VAR_4, VAR_0);
  FUNC_4(VAR_12, VAR_0);


  VAR_13.GPIO_Mode = VAR_10;
  VAR_13.GPIO_PuPd = VAR_11;
  VAR_13.GPIO_Pin = VAR_6;
  FUNC_1(VAR_5, &VAR_13);


  FUNC_5(VAR_3, VAR_2);


  VAR_14.EXTI_Line = VAR_1;
  VAR_14.EXTI_Mode = VAR_8;
  VAR_14.EXTI_Trigger = VAR_9;
  VAR_14.EXTI_LineCmd = VAR_0;
  FUNC_0(&VAR_14);


  VAR_15.NVIC_IRQChannel = VAR_7;
  VAR_15.NVIC_IRQChannelPreemptionPriority = 1;
  VAR_15.NVIC_IRQChannelCmd = VAR_0;
  FUNC_2(&VAR_15);
}
