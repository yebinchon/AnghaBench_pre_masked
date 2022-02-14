
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int SR1; int SR2; } ;
typedef TYPE_1__ I2C_TypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

uint32_t FUNC_2(I2C_TypeDef* VAR_1)
{
  uint32_t VAR_2 = 0;
  uint32_t VAR_3 = 0, VAR_4 = 0;


  FUNC_1(FUNC_0(VAR_1));


  VAR_3 = VAR_1->SR1;
  VAR_4 = VAR_1->SR2;
  VAR_4 = VAR_4 << 16;


  VAR_2 = (VAR_3 | VAR_4) & VAR_0;


  return VAR_2;
}
