
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int (* action_up ) (int ,int ) ;int (* action_down ) (int ,int ) ;int (* action_cancel ) (int ,int ,int ,size_t) ;int (* action_ok ) (int ,int ,int ,size_t,int ) ;int (* action_start ) (int ,int ) ;int (* action_left ) (int ,int ,int) ;int (* action_right ) (int ,int ,int) ;int (* action_info ) (int ,int ) ;int (* action_select ) (int ,int ,int ,size_t) ;int (* action_scan ) (int ,int ,int ,size_t) ;int (* action_refresh ) (TYPE_4__*,TYPE_4__*) ;} ;
typedef TYPE_2__ menu_file_list_cbs_t ;
struct TYPE_12__ {int type; int label; int path; int entry_idx; } ;
typedef TYPE_3__ menu_entry_t ;
struct TYPE_13__ {TYPE_1__* list; } ;
typedef TYPE_4__ file_list_t ;
typedef enum menu_action { ____Placeholder_menu_action } menu_action ;
struct TYPE_10__ {scalar_t__ actiondata; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int*) ;
 TYPE_4__* FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,size_t) ;
 int FUNC_7 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,size_t) ;
 int FUNC_10 (int ,int ,int ,size_t,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ,int ,size_t) ;

int FUNC_16(
      void *VAR_4, menu_entry_t *VAR_5, size_t VAR_6, enum menu_action VAR_7)
{
   int VAR_8 = 0;
   file_list_t *VAR_9 = FUNC_3(0);
   menu_file_list_cbs_t *VAR_10 = VAR_9 ?
      (menu_file_list_cbs_t*)VAR_9->list[VAR_6].actiondata : ((void*)0);

   switch (VAR_7)
   {
      case 128:
         if (VAR_10 && VAR_10->action_up)
            VAR_8 = VAR_10->action_up(VAR_5->type, VAR_5->label);
         break;
      case 139:
         if (VAR_10 && VAR_10->action_down)
            VAR_8 = VAR_10->action_down(VAR_5->type, VAR_5->label);
         break;
      case 132:
         FUNC_0(VAR_3, ((void*)0));
         break;
      case 133:
         FUNC_0(VAR_2, ((void*)0));
         break;
      case 140:
         if (VAR_10 && VAR_10->action_cancel)
            VAR_8 = VAR_10->action_cancel(VAR_5->path,
                  VAR_5->label, VAR_5->type, VAR_6);
         break;
      case 136:
         if (VAR_10 && VAR_10->action_ok)
            VAR_8 = VAR_10->action_ok(VAR_5->path,
                  VAR_5->label, VAR_5->type, VAR_6, VAR_5->entry_idx);
         break;
      case 129:
         if (VAR_10 && VAR_10->action_start)
            VAR_8 = VAR_10->action_start(VAR_5->type, VAR_5->label);
         break;
      case 137:
         if (VAR_10 && VAR_10->action_left)
            VAR_8 = VAR_10->action_left(VAR_5->type, VAR_5->label, 0);
         break;
      case 135:
         if (VAR_10 && VAR_10->action_right)
            VAR_8 = VAR_10->action_right(VAR_5->type, VAR_5->label, 0);
         break;
      case 138:
         if (VAR_10 && VAR_10->action_info)
            VAR_8 = VAR_10->action_info(VAR_5->type, VAR_5->label);
         break;
      case 130:
         if (VAR_10 && VAR_10->action_select)
            VAR_8 = VAR_10->action_select(VAR_5->path,
                  VAR_5->label, VAR_5->type, VAR_6);
         break;
      case 131:
         FUNC_4();
         break;
      case 134:
         if (VAR_10 && VAR_10->action_scan)
            VAR_8 = VAR_10->action_scan(VAR_5->path,
                  VAR_5->label, VAR_5->type, VAR_6);
         break;
      default:
         break;
   }

   VAR_10 = VAR_9 ? (menu_file_list_cbs_t*)
      VAR_9->list[VAR_6].actiondata : ((void*)0);

   if (VAR_10 && VAR_10->action_refresh)
   {
      if (FUNC_1(VAR_0, ((void*)0)))
      {
         bool VAR_11 = 0;
         file_list_t *VAR_12 = FUNC_2(0);

         VAR_10->action_refresh(VAR_9, VAR_12);
         FUNC_1(VAR_1, &VAR_11);
      }
   }

   return VAR_8;
}
