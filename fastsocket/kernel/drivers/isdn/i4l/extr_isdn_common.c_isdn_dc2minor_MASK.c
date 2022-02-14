
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* chanmap; int* drvmap; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

int
FUNC_0(int VAR_2, int VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_1->chanmap[VAR_4] == VAR_3 && VAR_1->drvmap[VAR_4] == VAR_2)
   return VAR_4;
 return -1;
}
