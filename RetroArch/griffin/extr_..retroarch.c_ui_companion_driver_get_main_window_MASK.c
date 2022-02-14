
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* (* get_main_window ) (int ) ;} ;
typedef TYPE_1__ ui_companion_driver_t ;


 void* FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

void *FUNC_1(void)
{
   const ui_companion_driver_t *VAR_2 = VAR_0;
   if (!VAR_2 || !VAR_2->get_main_window)
      return ((void*)0);
   return VAR_2->get_main_window(VAR_1);
}
