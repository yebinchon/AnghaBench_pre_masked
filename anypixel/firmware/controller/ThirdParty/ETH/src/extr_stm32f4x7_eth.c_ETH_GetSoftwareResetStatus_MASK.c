
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int DMABMR; } ;
typedef scalar_t__ FlagStatus ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

FlagStatus FUNC_0(void)
{
  FlagStatus VAR_4 = VAR_2;
  if((VAR_0->DMABMR & VAR_1) != (uint32_t)VAR_2)
  {
    VAR_4 = VAR_3;
  }
  else
  {
    VAR_4 = VAR_2;
  }
  return VAR_4;
}
