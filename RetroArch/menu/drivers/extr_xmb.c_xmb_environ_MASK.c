
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mouse_show; } ;
typedef TYPE_1__ xmb_handle_t ;
typedef enum menu_environ_cb { ____Placeholder_menu_environ_cb } menu_environ_cb ;





 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(enum menu_environ_cb VAR_0, void *VAR_1, void *VAR_2)
{
   xmb_handle_t *VAR_3 = (xmb_handle_t*)VAR_2;

   switch (VAR_0)
   {
      case 129:
         if (!VAR_3)
            return -1;
         VAR_3->mouse_show = 1;
         break;
      case 130:
         if (!VAR_3)
            return -1;
         VAR_3->mouse_show = 0;
         break;
      case 128:
         if (!VAR_3)
            return -1;

         FUNC_0(VAR_3);
         break;
      default:
         return -1;
   }

   return 0;
}
