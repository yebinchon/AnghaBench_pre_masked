
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int Status; } ;
typedef scalar_t__ FlagStatus ;
typedef TYPE_1__ ETH_DMADESCTypeDef ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;

FlagStatus FUNC_2(ETH_DMADESCTypeDef *VAR_2, uint32_t VAR_3)
{
  FlagStatus VAR_4 = VAR_0;

  FUNC_1(FUNC_0(VAR_3));
  if ((VAR_2->Status & VAR_3) != (uint32_t)VAR_0)
  {
    VAR_4 = VAR_1;
  }
  else
  {
    VAR_4 = VAR_0;
  }
  return VAR_4;
}
