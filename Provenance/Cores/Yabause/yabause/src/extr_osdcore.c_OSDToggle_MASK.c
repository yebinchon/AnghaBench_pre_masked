
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hidden; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_0(int VAR_2)
{
   if ((VAR_2 < 0) || (VAR_2 >= VAR_0)) return;

   VAR_1[VAR_2].hidden = 1 - VAR_1[VAR_2].hidden;
}
