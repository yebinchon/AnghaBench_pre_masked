
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int active_menu_tab_index; } ;
struct TYPE_4__ {TYPE_1__ nav_bar; } ;
typedef TYPE_2__ materialui_handle_t ;



__attribute__((used)) static size_t FUNC_0(void *VAR_0)
{
   materialui_handle_t *VAR_1 = (materialui_handle_t*)VAR_0;

   if (!VAR_1)
      return 0;

   return (size_t)VAR_1->nav_bar.active_menu_tab_index;
}
