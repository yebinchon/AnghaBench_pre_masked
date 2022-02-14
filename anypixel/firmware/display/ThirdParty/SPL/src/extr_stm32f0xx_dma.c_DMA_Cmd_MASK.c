
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ CCR; } ;
typedef scalar_t__ FunctionalState ;
typedef TYPE_1__ DMA_Channel_TypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

void FUNC_3(DMA_Channel_TypeDef* VAR_2, FunctionalState VAR_3)
{

  FUNC_2(FUNC_0(VAR_2));
  FUNC_2(FUNC_1(VAR_3));

  if (VAR_3 != VAR_0)
  {

    VAR_2->CCR |= VAR_1;
  }
  else
  {

    VAR_2->CCR &= (uint16_t)(~VAR_1);
  }
}
