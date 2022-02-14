
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mouse_show; } ;
typedef TYPE_1__ materialui_handle_t ;
typedef enum menu_environ_cb { ____Placeholder_menu_environ_cb } menu_environ_cb ;





__attribute__((used)) static int FUNC_0(enum menu_environ_cb VAR_0, void *VAR_1, void *VAR_2)
{
   materialui_handle_t *VAR_3 = (materialui_handle_t*)VAR_2;

   switch (VAR_0)
   {
      case 128:
         if (!VAR_3)
            return -1;
         VAR_3->mouse_show = 1;
         break;
      case 129:
         if (!VAR_3)
            return -1;
         VAR_3->mouse_show = 0;
         break;
      case 0:
      default:
         break;
   }

   return -1;
}
