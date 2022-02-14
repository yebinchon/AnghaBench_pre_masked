
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* restore_clear_color ) () ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;

bool FUNC_1(void)
{
   if (!VAR_0 || !VAR_0->restore_clear_color)
      return 0;
   VAR_0->restore_clear_color();
   return 1;
}
