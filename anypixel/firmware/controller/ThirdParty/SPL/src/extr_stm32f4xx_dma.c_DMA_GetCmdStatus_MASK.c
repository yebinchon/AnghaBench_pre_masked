
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int CR; } ;
typedef int FunctionalState ;
typedef TYPE_1__ DMA_Stream_TypeDef ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

FunctionalState FUNC_2(DMA_Stream_TypeDef* VAR_3)
{
  FunctionalState VAR_4 = VAR_0;


  FUNC_1(FUNC_0(VAR_3));

  if ((VAR_3->CR & (uint32_t)VAR_1) != 0)
  {

    VAR_4 = VAR_2;
  }
  else
  {


    VAR_4 = VAR_0;
  }
  return VAR_4;
}
