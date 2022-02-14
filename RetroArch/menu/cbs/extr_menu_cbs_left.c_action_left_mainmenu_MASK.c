
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ menu_navigation_wraparound_enable; } ;
struct TYPE_17__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
typedef int menu_handle_t ;
struct TYPE_18__ {int (* action_content_list_switch ) (TYPE_6__*,TYPE_6__*,char*,char*,int ) ;} ;
typedef TYPE_4__ menu_file_list_cbs_t ;
struct TYPE_19__ {int size; scalar_t__ selection; int action; int type; } ;
typedef TYPE_5__ menu_ctx_list_t ;
struct TYPE_20__ {TYPE_2__* list; } ;
typedef TYPE_6__ file_list_t ;
struct TYPE_16__ {scalar_t__ actiondata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 () ;
 int * FUNC_3 () ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 TYPE_6__* FUNC_7 (int ) ;
 TYPE_6__* FUNC_8 (int ) ;
 size_t FUNC_9 () ;
 int FUNC_10 (TYPE_6__*,TYPE_6__*,char*,char*,int ) ;

__attribute__((used)) static int FUNC_11(unsigned VAR_3, const char *VAR_4,
      bool VAR_5)
{
   menu_ctx_list_t VAR_6;
   unsigned VAR_7 = 0;
   menu_handle_t *VAR_8 = FUNC_3();

   if (!VAR_8)
      return FUNC_2();

   FUNC_5(&VAR_6);

   VAR_6.type = VAR_2;

   FUNC_6(&VAR_6);

   if (VAR_6.size == 1)
   {
      settings_t *VAR_9 = FUNC_1();

      if ((VAR_6.selection != 0)
         || VAR_9->bools.menu_navigation_wraparound_enable)
         VAR_7 = 1;
   }
   else
      VAR_7 = 2;

   switch (VAR_7)
   {
      case 1:
         {
            menu_ctx_list_t VAR_10;
            file_list_t *VAR_11 = FUNC_7(0);
            file_list_t *VAR_12 = FUNC_8(0);
            size_t VAR_13 = FUNC_9();
            menu_file_list_cbs_t *VAR_14 = VAR_12 ?
               (menu_file_list_cbs_t*)
               VAR_12->list[VAR_13].actiondata : ((void*)0);

            VAR_10.type = VAR_1;
            VAR_10.action = VAR_0;

            FUNC_4(&VAR_10);

            if (VAR_14 && VAR_14->action_content_list_switch)
               return VAR_14->action_content_list_switch(
                     VAR_12, VAR_11, "", "", 0);
         }
         break;
      case 2:
         FUNC_0(0, "", 0);
         break;
      case 0:
      default:
         break;
   }

   return 0;
}
