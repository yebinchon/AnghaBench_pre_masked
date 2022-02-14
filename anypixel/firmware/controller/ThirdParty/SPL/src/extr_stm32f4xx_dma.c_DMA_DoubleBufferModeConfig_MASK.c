
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ CR; scalar_t__ M1AR; } ;
typedef TYPE_1__ DMA_Stream_TypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

void FUNC_3(DMA_Stream_TypeDef* VAR_2, uint32_t VAR_3,
                                uint32_t VAR_4)
{

  FUNC_2(FUNC_0(VAR_2));
  FUNC_2(FUNC_1(VAR_4));

  if (VAR_4 != VAR_0)
  {

    VAR_2->CR |= (uint32_t)(VAR_1);
  }
  else
  {

    VAR_2->CR &= ~(uint32_t)(VAR_1);
  }


  VAR_2->M1AR = VAR_3;
}
