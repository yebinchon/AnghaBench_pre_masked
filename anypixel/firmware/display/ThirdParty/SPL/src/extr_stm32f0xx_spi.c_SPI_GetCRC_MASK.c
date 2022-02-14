
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int RXCRCR; int TXCRCR; } ;
typedef TYPE_1__ SPI_TypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;

uint16_t FUNC_3(SPI_TypeDef* VAR_1, uint8_t VAR_2)
{
  uint16_t VAR_3 = 0;

  FUNC_2(FUNC_0(VAR_1));
  FUNC_2(FUNC_1(VAR_2));

  if (VAR_2 != VAR_0)
  {

    VAR_3 = VAR_1->TXCRCR;
  }
  else
  {

    VAR_3 = VAR_1->RXCRCR;
  }

  return VAR_3;
}
