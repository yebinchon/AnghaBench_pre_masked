
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int ISR; } ;
typedef TYPE_1__ I2C_TypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

uint16_t FUNC_2(I2C_TypeDef* VAR_3)
{
  uint32_t VAR_4 = 0;
  uint16_t VAR_5 = 0;


  FUNC_1(FUNC_0(VAR_3));


  VAR_4 = (uint32_t)(VAR_3->ISR & VAR_2);


  if (VAR_4 == 0)
  {

    VAR_5 = VAR_1;
  }
  else
  {

    VAR_5 = VAR_0;
  }
  return VAR_5;
}
