
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xkb_handling; } ;
typedef TYPE_1__ udev_input_t ;
typedef int udev_input_device_t ;
struct input_event {int type; int value; int code; } ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;

 int VAR_0 ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void *VAR_2,
      const struct input_event *VAR_3, udev_input_device_t *VAR_4)
{



   unsigned VAR_5;

   switch (VAR_3->type)
   {
      case 128:
         VAR_5 = FUNC_5(VAR_3->code);
         if (VAR_3->value && FUNC_6())
            FUNC_1(VAR_1, VAR_5);
         else
            FUNC_0(VAR_1, VAR_5);






         FUNC_3(VAR_3->value,
               FUNC_4(VAR_5),
               0, 0, VAR_0);
         break;

      default:
         break;
   }
}
