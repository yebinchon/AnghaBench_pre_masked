
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int view_changed; } ;


 TYPE_1__* VAR_0 ;

bool FUNC_0(void)
{
   if (VAR_0->view_changed)
   {
      VAR_0->view_changed = 0;
      return 1;
   }
   return 0;
}
