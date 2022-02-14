
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int isActive; } ;
typedef size_t HvLpIndex ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;

int FUNC_0(HvLpIndex VAR_3)
{
 if (VAR_3 == VAR_1)
  return 0;
 if (VAR_3 < VAR_0)
  return VAR_2[VAR_3].isActive;
 else
  return 0;
}
