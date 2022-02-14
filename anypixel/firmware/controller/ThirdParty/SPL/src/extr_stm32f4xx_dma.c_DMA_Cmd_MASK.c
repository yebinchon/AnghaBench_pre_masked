
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int CR; } ;
typedef scalar_t__ FunctionalState ;
typedef TYPE_1__ DMA_Stream_TypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

void FUNC_3(DMA_Stream_TypeDef* VAR_2, FunctionalState VAR_3)
{

  FUNC_2(FUNC_0(VAR_2));
  FUNC_2(FUNC_1(VAR_3));

  if (VAR_3 != VAR_0)
  {

    VAR_2->CR |= (uint32_t)VAR_1;
  }
  else
  {

    VAR_2->CR &= ~(uint32_t)VAR_1;
  }
}
