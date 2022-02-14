
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int FCR; int CR; } ;
typedef scalar_t__ FunctionalState ;
typedef TYPE_1__ DMA_Stream_TypeDef ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;

void FUNC_4(DMA_Stream_TypeDef* VAR_3, uint32_t VAR_4, FunctionalState VAR_5)
{

  FUNC_3(FUNC_0(VAR_3));
  FUNC_3(FUNC_1(VAR_4));
  FUNC_3(FUNC_2(VAR_5));


  if ((VAR_4 & VAR_1) != 0)
  {
    if (VAR_5 != VAR_0)
    {

      VAR_3->FCR |= (uint32_t)VAR_1;
    }
    else
    {

      VAR_3->FCR &= ~(uint32_t)VAR_1;
    }
  }


  if (VAR_4 != VAR_1)
  {
    if (VAR_5 != VAR_0)
    {

      VAR_3->CR |= (uint32_t)(VAR_4 & VAR_2);
    }
    else
    {

      VAR_3->CR &= ~(uint32_t)(VAR_4 & VAR_2);
    }
  }
}
