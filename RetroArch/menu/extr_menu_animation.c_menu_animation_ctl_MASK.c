
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tween {int * subject; } ;
typedef int menu_animation_t ;
typedef enum menu_animation_ctl_state { ____Placeholder_menu_animation_ctl_state } menu_animation_ctl_state ;
struct TYPE_3__ {int pending; int list; } ;






 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct tween* FUNC_2 (int ,size_t) ;
 float VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

bool FUNC_4(enum menu_animation_ctl_state VAR_6, void *VAR_7)
{
   switch (VAR_6)
   {
      case 130:
         {
            size_t VAR_8;

            for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_0.list); VAR_8++)
            {
               struct tween *VAR_9 = FUNC_2(VAR_0.list, VAR_8);
               if (!VAR_9)
                  continue;

               if (VAR_9->subject)
                  VAR_9->subject = ((void*)0);
            }

            FUNC_1(VAR_0.list);
            FUNC_1(VAR_0.pending);

            FUNC_3(&VAR_0, 0, sizeof(menu_animation_t));
         }
         VAR_2 = 0;
         VAR_4 = 0;
         VAR_3 = 0.0f;
         break;
      case 131:
         VAR_1 = 0;
         VAR_5 = 0;
         break;
      case 128:
         VAR_1 = 1;
         VAR_5 = 1;
         break;
      case 129:
      default:
         break;
   }

   return 1;
}
