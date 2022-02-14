
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_menu_tabs; } ;
struct TYPE_4__ {TYPE_1__ nav_bar; } ;
typedef TYPE_2__ materialui_handle_t ;
typedef enum menu_list_type { ____Placeholder_menu_list_type } menu_list_type ;




 size_t FUNC_0 (int ) ;

__attribute__((used)) static size_t FUNC_1(void *VAR_0, enum menu_list_type VAR_1)
{
   materialui_handle_t *VAR_2 = (materialui_handle_t*)VAR_0;

   switch (VAR_1)
   {
      case 129:
         return FUNC_0(0);
      case 128:
         if (!VAR_2)
            return 0;
         return (size_t)VAR_2->nav_bar.num_menu_tabs;
      default:
         break;
   }

   return 0;
}
