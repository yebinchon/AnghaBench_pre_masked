
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int ISR; } ;
typedef TYPE_1__ I2C_TypeDef ;
typedef int FlagStatus ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

FlagStatus FUNC_3(I2C_TypeDef* VAR_2, uint32_t VAR_3)
{
  uint32_t VAR_4 = 0;
  FlagStatus VAR_5 = VAR_0;


  FUNC_2(FUNC_0(VAR_2));
  FUNC_2(FUNC_1(VAR_3));


  VAR_4 = VAR_2->ISR;


  VAR_4 &= VAR_3;

  if(VAR_4 != 0)
  {

    VAR_5 = VAR_1;
  }
  else
  {

    VAR_5 = VAR_0;
  }
  return VAR_5;
}
