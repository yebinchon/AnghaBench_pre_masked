
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t system_tab_end; int horizontal_list; } ;
typedef TYPE_1__ stripes_handle_t ;
typedef enum menu_list_type { ____Placeholder_menu_list_type } menu_list_type ;





 size_t FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static size_t FUNC_2(void *VAR_0, enum menu_list_type VAR_1)
{
   stripes_handle_t *VAR_2 = (stripes_handle_t*)VAR_0;

   switch (VAR_1)
   {
      case 129:
         return FUNC_1(0);
      case 130:
         if (VAR_2 && VAR_2->horizontal_list)
            return FUNC_0(VAR_2->horizontal_list);
         break;
      case 128:
         return VAR_2->system_tab_end;
   }

   return 0;
}
