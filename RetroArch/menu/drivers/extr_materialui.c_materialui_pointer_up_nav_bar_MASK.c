
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int menu_file_list_cbs_t ;
typedef int menu_entry_t ;
struct TYPE_8__ {int type; int enabled; } ;
typedef TYPE_2__ materialui_nav_bar_action_tab_t ;
struct TYPE_7__ {unsigned int num_menu_tabs; scalar_t__ location; int * menu_tabs; TYPE_2__ resume_tab; TYPE_2__ back_tab; } ;
struct TYPE_9__ {TYPE_1__ nav_bar; } ;
typedef TYPE_3__ materialui_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_3__*,int *,size_t,int ) ;
 int FUNC_2 (TYPE_3__*,int *,int ) ;

__attribute__((used)) static int FUNC_3(
      materialui_handle_t *VAR_5,
      unsigned VAR_6, unsigned VAR_7, unsigned VAR_8, unsigned VAR_9, size_t VAR_10,
      menu_file_list_cbs_t *VAR_11, menu_entry_t *VAR_12, unsigned VAR_13)
{
   unsigned VAR_14 = VAR_5->nav_bar.num_menu_tabs + VAR_4;
   unsigned VAR_15;



   if (VAR_5->nav_bar.location == VAR_3)
      VAR_15 = VAR_7 / (VAR_9 / VAR_14);
   else
      VAR_15 = VAR_6 / (VAR_8 / VAR_14);


   if ((VAR_15 == 0) || (VAR_15 >= VAR_14 - 1))
   {
      materialui_nav_bar_action_tab_t *VAR_16 = ((void*)0);

      if (VAR_5->nav_bar.location == VAR_3)
         VAR_16 = (VAR_15 == 0) ?
               &VAR_5->nav_bar.resume_tab : &VAR_5->nav_bar.back_tab;
      else
         VAR_16 = (VAR_15 == 0) ?
               &VAR_5->nav_bar.back_tab : &VAR_5->nav_bar.resume_tab;

      switch (VAR_16->type)
      {
         case 129:
            if (VAR_16->enabled)
               return FUNC_1(VAR_5, VAR_12, VAR_10, VAR_1);
            break;
         case 128:
            if (VAR_16->enabled)
               return FUNC_0(VAR_0, ((void*)0)) ? 0 : -1;
            break;
         default:
            break;
      }
   }

   else
      return FUNC_2(
            VAR_5, &VAR_5->nav_bar.menu_tabs[VAR_15 - 1], VAR_2);

   return 0;
}
