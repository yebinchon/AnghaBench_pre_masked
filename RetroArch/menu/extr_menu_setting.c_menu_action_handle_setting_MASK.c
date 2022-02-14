
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {char const* string; } ;
struct TYPE_20__ {char* name; int (* action_up ) (TYPE_2__*) ;int (* action_down ) (TYPE_2__*) ;int (* action_left ) (TYPE_2__*,int) ;int (* action_right ) (TYPE_2__*,int) ;int (* action_select ) (TYPE_2__*,int) ;int (* action_ok ) (TYPE_2__*,int) ;int (* action_cancel ) (TYPE_2__*) ;int (* action_start ) (TYPE_2__*) ;TYPE_1__ default_value; } ;
typedef TYPE_2__ rarch_setting_t ;
struct TYPE_21__ {unsigned int type; size_t directory_ptr; int * list; void* label; void* path; } ;
typedef TYPE_3__ menu_displaylist_info_t ;
typedef int file_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int *) ;
 int * FUNC_5 (int ) ;
 size_t FUNC_6 () ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*) ;
 void* FUNC_9 (char const*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (TYPE_2__*,int) ;
 int FUNC_14 (TYPE_2__*,int) ;
 int FUNC_15 (TYPE_2__*,int) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;

int FUNC_18(rarch_setting_t *VAR_3,
      unsigned VAR_4, unsigned VAR_5, bool VAR_6)
{
   if (!VAR_3)
      return -1;

   switch (FUNC_8(VAR_3))
   {
      case 132:
         if (VAR_5 == 144)
         {
            menu_displaylist_info_t VAR_7;
            file_list_t *VAR_8 = FUNC_5(0);
            const char *VAR_9 = VAR_3->name;
            size_t VAR_10 = FUNC_6();

            FUNC_2(&VAR_7);

            VAR_7.path = FUNC_9(VAR_3->default_value.string);
            VAR_7.label = FUNC_9(VAR_9);
            VAR_7.type = VAR_4;
            VAR_7.directory_ptr = VAR_10;
            VAR_7.list = VAR_8;

            if (FUNC_0(VAR_0, &VAR_7))
               FUNC_3(&VAR_7);

            FUNC_1(&VAR_7);
         }

      case 137:
      case 133:
      case 128:
      case 131:
      case 134:
      case 135:
      case 130:
      case 129:
      case 136:
      case 138:
      case 139:
         {
            int VAR_11 = -1;
            switch (VAR_5)
            {
               case 140:
                  if (VAR_3->action_up)
                     VAR_11 = VAR_3->action_up(VAR_3);
                  break;
               case 146:
                  if (VAR_3->action_down)
                     VAR_11 = VAR_3->action_down(VAR_3);
                  break;
               case 145:
                  if (VAR_3->action_left)
                  {
                     VAR_11 = VAR_3->action_left(VAR_3, 0);
                     FUNC_4(
                           VAR_2,
                           ((void*)0));
                     FUNC_4(
                           VAR_1,
                           ((void*)0));
                  }
                  break;
               case 143:
                  if (VAR_3->action_right)
                  {
                     VAR_11 = VAR_3->action_right(VAR_3, 0);
                     FUNC_4(
                           VAR_2,
                           ((void*)0));
                     FUNC_4(
                           VAR_1,
                           ((void*)0));
                  }
                  break;
               case 142:
                  if (VAR_3->action_select)
                     VAR_11 = VAR_3->action_select(VAR_3, 1);
                  break;
               case 144:
                  if (VAR_3->action_ok)
                     VAR_11 = VAR_3->action_ok(VAR_3, 0);
                  break;
               case 147:
                  if (VAR_3->action_cancel)
                     VAR_11 = VAR_3->action_cancel(VAR_3);
                  break;
               case 141:
                  if (VAR_3->action_start)
                     VAR_11 = VAR_3->action_start(VAR_3);
                  break;
            }

            if (VAR_11 == 0)
               return FUNC_7(VAR_3, VAR_6);
         }
         break;
      default:
         break;
   }

   return -1;
}
