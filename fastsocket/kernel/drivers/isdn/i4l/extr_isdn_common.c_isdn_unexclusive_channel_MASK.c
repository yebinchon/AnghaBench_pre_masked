
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* drvmap; int* chanmap; int * usage; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;

void
FUNC_1(int VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if ((VAR_2->drvmap[VAR_5] == VAR_3) &&
      (VAR_2->chanmap[VAR_5] == VAR_4)) {
   VAR_2->usage[VAR_5] &= ~VAR_1;
   FUNC_0();
   return;
  }
}
