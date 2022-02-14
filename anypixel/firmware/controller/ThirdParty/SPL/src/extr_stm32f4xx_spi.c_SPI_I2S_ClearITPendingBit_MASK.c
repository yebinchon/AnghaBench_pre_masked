
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int SR; } ;
typedef TYPE_1__ SPI_TypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

void FUNC_3(SPI_TypeDef* VAR_0, uint8_t VAR_1)
{
  uint16_t VAR_2 = 0;

  FUNC_2(FUNC_0(VAR_0));
  FUNC_2(FUNC_1(VAR_1));


  VAR_2 = 0x01 << (VAR_1 & 0x0F);


  VAR_0->SR = (uint16_t)~VAR_2;
}
