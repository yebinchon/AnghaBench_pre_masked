
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int CR; int FCR; } ;
struct TYPE_8__ {int HISR; int LISR; } ;
typedef scalar_t__ ITStatus ;
typedef TYPE_1__ DMA_TypeDef ;
typedef TYPE_2__ DMA_Stream_TypeDef ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;

ITStatus FUNC_3(DMA_Stream_TypeDef* VAR_10, uint32_t VAR_11)
{
  ITStatus VAR_12 = VAR_6;
  DMA_TypeDef* VAR_13;
  uint32_t VAR_14 = 0, VAR_15 = 0;


  FUNC_2(FUNC_0(VAR_10));
  FUNC_2(FUNC_1(VAR_11));


  if (VAR_10 < VAR_2)
  {

    VAR_13 = VAR_0;
  }
  else
  {

    VAR_13 = VAR_1;
  }


  if ((VAR_11 & VAR_9) != (uint32_t)VAR_6)
  {

    VAR_14 = (uint32_t)((VAR_11 >> 11) & VAR_8);


    VAR_15 = (uint32_t)(VAR_10->CR & VAR_14);
  }
  else
  {

    VAR_15 = (uint32_t)(VAR_10->FCR & VAR_3);
  }


  if ((VAR_11 & VAR_4) != (uint32_t)VAR_6)
  {

    VAR_14 = VAR_13->HISR ;
  }
  else
  {

    VAR_14 = VAR_13->LISR ;
  }


  VAR_14 &= (uint32_t)VAR_5;


  if (((VAR_14 & VAR_11) != (uint32_t)VAR_6) && (VAR_15 != (uint32_t)VAR_6))
  {

    VAR_12 = VAR_7;
  }
  else
  {

    VAR_12 = VAR_6;
  }


  return VAR_12;
}
