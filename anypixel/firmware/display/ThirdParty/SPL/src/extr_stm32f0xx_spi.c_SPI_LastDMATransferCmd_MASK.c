
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int CR2; } ;
typedef TYPE_1__ SPI_TypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(SPI_TypeDef* VAR_1, uint16_t VAR_2)
{

  FUNC_2(FUNC_0(VAR_1));
  FUNC_2(FUNC_1(VAR_2));


  VAR_1->CR2 &= VAR_0;


  VAR_1->CR2 |= VAR_2;
}
