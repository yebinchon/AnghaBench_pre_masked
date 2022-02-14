
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int CFGR2; } ;
typedef scalar_t__ FlagStatus ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;

FlagStatus FUNC_2(uint32_t VAR_4)
{
  FlagStatus VAR_5 = VAR_0;


  FUNC_1(FUNC_0(VAR_4));


  if ((VAR_2->CFGR2 & VAR_3) != (uint32_t)VAR_0)
  {

    VAR_5 = VAR_1;
  }
  else
  {

    VAR_5 = VAR_0;
  }

  return VAR_5;
}
