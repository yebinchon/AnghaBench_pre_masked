
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int GPIO_Pin; scalar_t__ GPIO_Mode; scalar_t__ GPIO_PuPd; scalar_t__ GPIO_OType; scalar_t__ GPIO_Speed; } ;
struct TYPE_6__ {int OSPEEDR; int OTYPER; int MODER; int PUPDR; } ;
typedef TYPE_1__ GPIO_TypeDef ;
typedef TYPE_2__ GPIO_InitTypeDef ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;

void FUNC_7(GPIO_TypeDef* VAR_6, GPIO_InitTypeDef* VAR_7)
{
  uint32_t VAR_8 = 0x00, VAR_9 = 0x00 , VAR_10 = 0x00;


  FUNC_6(FUNC_0(VAR_6));
  FUNC_6(FUNC_3(VAR_7->GPIO_Pin));
  FUNC_6(FUNC_1(VAR_7->GPIO_Mode));
  FUNC_6(FUNC_4(VAR_7->GPIO_PuPd));



  for (VAR_8 = 0x00; VAR_8 < 0x10; VAR_8++)
  {
    VAR_9 = ((uint32_t)0x01) << VAR_8;


    VAR_10 = (VAR_7->GPIO_Pin) & VAR_9;

    if (VAR_10 == VAR_9)
    {
      if ((VAR_7->GPIO_Mode == VAR_2) || (VAR_7->GPIO_Mode == VAR_1))
      {

        FUNC_6(FUNC_5(VAR_7->GPIO_Speed));


        VAR_6->OSPEEDR &= ~(VAR_3 << (VAR_8 * 2));
        VAR_6->OSPEEDR |= ((uint32_t)(VAR_7->GPIO_Speed) << (VAR_8 * 2));


        FUNC_6(FUNC_2(VAR_7->GPIO_OType));


        VAR_6->OTYPER &= ~((VAR_4) << ((uint16_t)VAR_8));
        VAR_6->OTYPER |= (uint16_t)(((uint16_t)VAR_7->GPIO_OType) << ((uint16_t)VAR_8));
      }

      VAR_6->MODER &= ~(VAR_0 << (VAR_8 * 2));

      VAR_6->MODER |= (((uint32_t)VAR_7->GPIO_Mode) << (VAR_8 * 2));


      VAR_6->PUPDR &= ~(VAR_5 << ((uint16_t)VAR_8 * 2));
      VAR_6->PUPDR |= (((uint32_t)VAR_7->GPIO_PuPd) << (VAR_8 * 2));
    }
  }
}
