
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int CMPCR; } ;
typedef scalar_t__ FlagStatus ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

FlagStatus FUNC_0(void)
{
  FlagStatus VAR_4 = VAR_0;

  if ((VAR_2->CMPCR & VAR_3 ) != (uint32_t)VAR_0)
  {
    VAR_4 = VAR_1;
  }
  else
  {
    VAR_4 = VAR_0;
  }
  return VAR_4;
}
