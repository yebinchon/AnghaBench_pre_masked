
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int CR2; int SR; } ;
typedef TYPE_1__ SPI_TypeDef ;
typedef scalar_t__ ITStatus ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;

ITStatus FUNC_3(SPI_TypeDef* VAR_2, uint8_t VAR_3)
{
  ITStatus VAR_4 = VAR_0;
  uint16_t VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;


  FUNC_2(FUNC_0(VAR_2));
  FUNC_2(FUNC_1(VAR_3));


  VAR_5 = 0x01 << (VAR_3 & 0x0F);


  VAR_6 = VAR_3 >> 4;


  VAR_6 = 0x01 << VAR_6;


  VAR_7 = (VAR_2->CR2 & VAR_6) ;


  if (((VAR_2->SR & VAR_5) != (uint16_t)VAR_0) && VAR_7)
  {

    VAR_4 = VAR_1;
  }
  else
  {

    VAR_4 = VAR_0;
  }

  return VAR_4;
}
