
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ SR; } ;
typedef TYPE_1__ SPI_TypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

void FUNC_3(SPI_TypeDef* VAR_0, uint16_t VAR_1)
{

  FUNC_2(FUNC_0(VAR_0));
  FUNC_2(FUNC_1(VAR_1));


  VAR_0->SR = (uint16_t)~VAR_1;
}
