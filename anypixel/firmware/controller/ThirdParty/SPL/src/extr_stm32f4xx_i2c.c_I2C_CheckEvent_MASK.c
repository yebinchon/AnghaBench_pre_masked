
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int SR1; int SR2; } ;
typedef TYPE_1__ I2C_TypeDef ;
typedef int ErrorStatus ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

ErrorStatus FUNC_3(I2C_TypeDef* VAR_3, uint32_t VAR_4)
{
  uint32_t VAR_5 = 0;
  uint32_t VAR_6 = 0, VAR_7 = 0;
  ErrorStatus VAR_8 = VAR_0;


  FUNC_2(FUNC_0(VAR_3));
  FUNC_2(FUNC_1(VAR_4));


  VAR_6 = VAR_3->SR1;
  VAR_7 = VAR_3->SR2;
  VAR_7 = VAR_7 << 16;


  VAR_5 = (VAR_6 | VAR_7) & VAR_1;


  if ((VAR_5 & VAR_4) == VAR_4)
  {

    VAR_8 = VAR_2;
  }
  else
  {

    VAR_8 = VAR_0;
  }

  return VAR_8;
}
