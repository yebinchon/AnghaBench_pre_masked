
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int (* action_content_list_switch ) (int *,int *,char*,char*,int ) ;} ;
typedef TYPE_2__ menu_file_list_cbs_t ;
struct TYPE_11__ {int active; } ;
typedef TYPE_3__ materialui_nav_bar_menu_tab_t ;
struct TYPE_9__ {int menu_navigation_wrapped; int num_menu_tabs; TYPE_3__* menu_tabs; scalar_t__ active_menu_tab_index; } ;
struct TYPE_12__ {int menu_stack_flushed; TYPE_1__ nav_bar; } ;
typedef TYPE_4__ materialui_handle_t ;
typedef int file_list_t ;
typedef enum menu_action { ____Placeholder_menu_action } menu_action ;




 scalar_t__ FUNC_0 (int *,size_t) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 size_t FUNC_4 () ;
 int FUNC_5 (int *,int *,char*,char*,int ) ;

__attribute__((used)) static int FUNC_6(
      materialui_handle_t *VAR_0, materialui_nav_bar_menu_tab_t *VAR_1,
      enum menu_action VAR_2)
{
   materialui_nav_bar_menu_tab_t *VAR_3 = VAR_1;



   VAR_0->nav_bar.menu_navigation_wrapped = 0;
   VAR_0->menu_stack_flushed = 0;


   if (!VAR_3)
   {
      int VAR_4 = 0;

      switch (VAR_2)
      {
         case 129:
            {
               VAR_4 = (int)VAR_0->nav_bar.active_menu_tab_index - 1;

               if (VAR_4 < 0)
               {
                  VAR_4 = (int)VAR_0->nav_bar.num_menu_tabs - 1;
                  VAR_0->nav_bar.menu_navigation_wrapped = 1;
               }
            }
            break;
         case 128:
            {
               VAR_4 = (int)VAR_0->nav_bar.active_menu_tab_index + 1;

               if (VAR_4 >= VAR_0->nav_bar.num_menu_tabs)
               {
                  VAR_4 = 0;
                  VAR_0->nav_bar.menu_navigation_wrapped = 1;
               }
            }
            break;
         default:

            return -1;
      }

      VAR_3 = &VAR_0->nav_bar.menu_tabs[VAR_4];
   }


   if (!VAR_3->active)
   {
      file_list_t *VAR_5 = FUNC_3(0);
      file_list_t *VAR_6 = FUNC_2(0);
      size_t VAR_7 = FUNC_4();
      menu_file_list_cbs_t *VAR_8 = VAR_5 ?
            (menu_file_list_cbs_t*)FUNC_0(
                  VAR_5, VAR_7) : ((void*)0);
      bool VAR_9 = 0;
      int VAR_10 = 0;


      if (!VAR_5 || !VAR_6 || !VAR_8)
         return -1;

      if (!VAR_8->action_content_list_switch)
         return -1;


      VAR_9 = FUNC_1(VAR_0, VAR_3);


      VAR_10 = VAR_8->action_content_list_switch(
            VAR_5, VAR_6, "", "", 0);
      VAR_0->menu_stack_flushed = VAR_9;

      return VAR_10;
   }

   return 0;
}
