
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int uint16_t ;
struct TYPE_13__ {scalar_t__ CMAR; scalar_t__ CPAR; scalar_t__ CNDTR; int CCR; } ;
struct TYPE_12__ {int IFCR; } ;
typedef TYPE_1__ DMA_Channel_TypeDef ;


 TYPE_11__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 TYPE_1__* VAR_11 ;
 TYPE_1__* VAR_12 ;
 TYPE_1__* VAR_13 ;
 TYPE_1__* VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(DMA_Channel_TypeDef* VAR_16)
{

  FUNC_1(FUNC_0(VAR_16));


  VAR_16->CCR &= (uint16_t)(~VAR_15);


  VAR_16->CCR = 0;


  VAR_16->CNDTR = 0;


  VAR_16->CPAR = 0;


  VAR_16->CMAR = 0;

  if (VAR_16 == VAR_8)
  {

    VAR_0->IFCR |= VAR_1;
  }
  else if (VAR_16 == VAR_9)
  {

    VAR_0->IFCR |= VAR_2;
  }
  else if (VAR_16 == VAR_10)
  {

    VAR_0->IFCR |= VAR_3;
  }
  else if (VAR_16 == VAR_11)
  {

    VAR_0->IFCR |= VAR_4;
  }
  else if (VAR_16 == VAR_12)
  {

    VAR_0->IFCR |= VAR_5;
  }
  else if (VAR_16 == VAR_13)
  {

    VAR_0->IFCR |= VAR_6;
  }
  else
  {
    if (VAR_16 == VAR_14)
    {

      VAR_0->IFCR |= VAR_7;
    }
  }
}
