
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int flags; int (* action_right ) (TYPE_1__*,int) ;int action_select; int action_left; int change_handler; } ;
typedef TYPE_1__ rarch_setting_t ;
typedef enum menu_setting_ctl_state { ____Placeholder_menu_setting_ctl_state } menu_setting_ctl_state ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

bool FUNC_4(enum menu_setting_ctl_state VAR_4, void *VAR_5)
{
   uint64_t VAR_6;

   switch (VAR_4)
   {
      case 130:
         {
            bool VAR_7 = 0;
            rarch_setting_t *VAR_8 = (rarch_setting_t*)VAR_5;

            if (!VAR_8)
               return 0;

            VAR_6 = VAR_8->flags;

            if (FUNC_2(VAR_8) != VAR_3)
               return 0;

            if (!VAR_8->change_handler)
               return 0;

            VAR_7 = (VAR_8->action_right != ((void*)0));
            VAR_7 = VAR_7 || VAR_8->action_left;
            VAR_7 = VAR_7 || VAR_8->action_select;

            if (!VAR_7)
               return 0;

            if (!(VAR_6 & VAR_2))
               return 0;
         }
         break;
      case 129:
         {
            rarch_setting_t **VAR_9 = (rarch_setting_t**)VAR_5;
            if (!VAR_9)
               return 0;
            *VAR_9 = FUNC_1();
         }
         break;
      case 131:
         {
            rarch_setting_t *VAR_10 = (rarch_setting_t*)VAR_5;
            if (!VAR_10)
               return 0;

            if (VAR_10->action_right)
            {
               int VAR_11 = VAR_10->action_right(VAR_10, 0);
               FUNC_0(
                     VAR_1, ((void*)0));
               FUNC_0(
                     VAR_0, ((void*)0));
               if (VAR_11 == -1)
                  return 0;
            }
            else
               return 0;
         }
         break;
      case 128:
      default:
         break;
   }

   return 1;
}
