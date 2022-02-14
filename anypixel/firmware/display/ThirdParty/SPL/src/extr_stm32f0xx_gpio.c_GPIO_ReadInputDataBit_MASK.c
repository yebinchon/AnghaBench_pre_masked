
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int IDR; } ;
typedef TYPE_1__ GPIO_TypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

uint8_t FUNC_3(GPIO_TypeDef* VAR_2, uint16_t VAR_3)
{
  uint8_t VAR_4 = 0x00;


  FUNC_2(FUNC_1(VAR_2));
  FUNC_2(FUNC_0(VAR_3));

  if ((VAR_2->IDR & VAR_3) != (uint32_t)VAR_0)
  {
    VAR_4 = (uint8_t)VAR_1;
  }
  else
  {
    VAR_4 = (uint8_t)VAR_0;
  }
  return VAR_4;
}
