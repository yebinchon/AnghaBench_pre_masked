
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int HISR; int LISR; } ;
typedef scalar_t__ FlagStatus ;
typedef TYPE_1__ DMA_TypeDef ;
typedef int DMA_Stream_TypeDef ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;

FlagStatus FUNC_3(DMA_Stream_TypeDef* VAR_7, uint32_t VAR_8)
{
  FlagStatus VAR_9 = VAR_5;
  DMA_TypeDef* VAR_10;
  uint32_t VAR_11 = 0;


  FUNC_2(FUNC_0(VAR_7));
  FUNC_2(FUNC_1(VAR_8));


  if (VAR_7 < VAR_2)
  {

    VAR_10 = VAR_0;
  }
  else
  {

    VAR_10 = VAR_1;
  }


  if ((VAR_8 & VAR_3) != (uint32_t)VAR_5)
  {

    VAR_11 = VAR_10->HISR;
  }
  else
  {

    VAR_11 = VAR_10->LISR;
  }


  VAR_11 &= (uint32_t)VAR_4;


  if ((VAR_11 & VAR_8) != (uint32_t)VAR_5)
  {

    VAR_9 = VAR_6;
  }
  else
  {

    VAR_9 = VAR_5;
  }


  return VAR_9;
}
