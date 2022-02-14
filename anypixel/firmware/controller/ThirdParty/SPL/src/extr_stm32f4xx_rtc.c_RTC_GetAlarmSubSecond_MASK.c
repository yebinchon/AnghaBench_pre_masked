
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int ALRMASSR; int ALRMBSSR; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

uint32_t FUNC_0(uint32_t VAR_4)
{
  uint32_t VAR_5 = 0;


  if (VAR_4 == VAR_3)
  {
    VAR_5 = (uint32_t)((VAR_0->ALRMASSR) & VAR_1);
  }
  else
  {
    VAR_5 = (uint32_t)((VAR_0->ALRMBSSR) & VAR_2);
  }

  return (VAR_5);
}
