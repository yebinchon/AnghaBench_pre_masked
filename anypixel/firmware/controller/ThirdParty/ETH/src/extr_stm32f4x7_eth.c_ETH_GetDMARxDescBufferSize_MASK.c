
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ ControlBufferSize; } ;
typedef TYPE_1__ ETH_DMADESCTypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;

uint32_t FUNC_2(ETH_DMADESCTypeDef *VAR_4, uint32_t VAR_5)
{

  FUNC_1(FUNC_0(VAR_5));

  if(VAR_5 != VAR_1)
  {

    return ((VAR_4->ControlBufferSize & VAR_3) >> VAR_0);
  }
  else
  {

    return (VAR_4->ControlBufferSize & VAR_2);
  }
}
