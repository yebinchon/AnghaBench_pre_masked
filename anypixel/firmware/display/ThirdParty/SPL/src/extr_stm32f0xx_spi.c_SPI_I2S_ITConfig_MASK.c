
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int CR2; } ;
typedef TYPE_1__ SPI_TypeDef ;
typedef scalar_t__ FunctionalState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

void FUNC_4(SPI_TypeDef* VAR_1, uint8_t VAR_2, FunctionalState VAR_3)
{
  uint16_t VAR_4 = 0, VAR_5 = 0 ;


  FUNC_3(FUNC_1(VAR_1));
  FUNC_3(FUNC_0(VAR_3));
  FUNC_3(FUNC_2(VAR_2));


  VAR_4 = VAR_2 >> 4;


  VAR_5 = (uint16_t)1 << (uint16_t)VAR_4;

  if (VAR_3 != VAR_0)
  {

    VAR_1->CR2 |= VAR_5;
  }
  else
  {

    VAR_1->CR2 &= (uint16_t)~VAR_5;
  }
}
