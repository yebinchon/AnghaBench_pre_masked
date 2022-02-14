
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int l; int r; int m; int wu; int wd; int whu; int whd; } ;
typedef TYPE_1__ udev_input_mouse_t ;
struct TYPE_7__ {TYPE_1__ mouse; } ;
typedef TYPE_2__ udev_input_device_t ;
struct input_event {int type; int value; int code; } ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0,
      const struct input_event *VAR_1, udev_input_device_t *VAR_2)
{
   udev_input_mouse_t *VAR_3 = &VAR_2->mouse;

   switch (VAR_1->type)
   {
      case 133:
         switch (VAR_1->code)
         {
            case 137:
               VAR_3->l = VAR_1->value;
               break;

            case 135:
               VAR_3->r = VAR_1->value;
               break;

            case 136:
               VAR_3->m = VAR_1->value;
               break;
            default:
               break;
         }
         break;

      case 132:
         switch (VAR_1->code)
         {
            case 129:
               FUNC_0(VAR_3, VAR_1->value, 0);
               break;
            case 128:
               FUNC_1(VAR_3, VAR_1->value, 0);
               break;
            case 130:
               if (VAR_1->value == 1)
                  VAR_3->wu = 1;
               else if (VAR_1->value == -1)
                  VAR_3->wd = 1;
               break;
            case 131:
               if (VAR_1->value == 1)
                  VAR_3->whu = 1;
               else if (VAR_1->value == -1)
                  VAR_3->whd = 1;
               break;
         }
         break;

      case 134:
         switch (VAR_1->code)
         {
            case 139:
               FUNC_0(VAR_3, VAR_1->value, 1);
               break;
            case 138:
               FUNC_1(VAR_3, VAR_1->value, 1);
               break;
         }
         break;
   }
}
