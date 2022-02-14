
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ Status; } ;
typedef scalar_t__ FunctionalState ;
typedef TYPE_1__ ETH_DMADESCTypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

void FUNC_2(ETH_DMADESCTypeDef *VAR_2, FunctionalState VAR_3)
{

  FUNC_1(FUNC_0(VAR_3));

  if (VAR_3 != VAR_0)
  {

    VAR_2->Status |= VAR_1;
  }
  else
  {

    VAR_2->Status &=(~(uint32_t)VAR_1);
  }
}
