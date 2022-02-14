
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int CR1; } ;
typedef TYPE_1__ SPI_TypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

void FUNC_2(SPI_TypeDef* VAR_1)
{

  FUNC_1(FUNC_0(VAR_1));


  VAR_1->CR1 |= VAR_0;
}
