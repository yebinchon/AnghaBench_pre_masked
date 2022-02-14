
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int PCR2; } ;
struct TYPE_3__ {int PCR3; } ;
typedef scalar_t__ FunctionalState ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;

void FUNC_3(uint32_t VAR_6, FunctionalState VAR_7)
{
  FUNC_2(FUNC_0(VAR_6));
  FUNC_2(FUNC_1(VAR_7));

  if (VAR_7 != VAR_0)
  {

    if(VAR_6 == VAR_2)
    {
      VAR_1->PCR2 |= VAR_5;
    }
    else
    {
      VAR_3->PCR3 |= VAR_5;
    }
  }
  else
  {

    if(VAR_6 == VAR_2)
    {
      VAR_1->PCR2 &= VAR_4;
    }
    else
    {
      VAR_3->PCR3 &= VAR_4;
    }
  }
}
