
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int CR; } ;
typedef TYPE_1__ DMA_Stream_TypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

uint32_t FUNC_2(DMA_Stream_TypeDef* VAR_1)
{
  uint32_t VAR_2 = 0;


  FUNC_1(FUNC_0(VAR_1));


  if ((VAR_1->CR & VAR_0) != 0)
  {

    VAR_2 = 1;
  }
  else
  {

    VAR_2 = 0;
  }
  return VAR_2;
}
