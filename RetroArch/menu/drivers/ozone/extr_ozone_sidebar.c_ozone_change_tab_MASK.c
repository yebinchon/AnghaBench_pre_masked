
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ozone_handle_t ;
struct TYPE_12__ {int (* action_content_list_switch ) (TYPE_4__*,TYPE_4__*,char*,char*,int ) ;} ;
typedef TYPE_2__ menu_file_list_cbs_t ;
struct TYPE_13__ {int action; int type; } ;
typedef TYPE_3__ menu_ctx_list_t ;
struct TYPE_14__ {size_t size; TYPE_1__* list; } ;
typedef TYPE_4__ file_list_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;
typedef enum menu_settings_type { ____Placeholder_menu_settings_type } menu_settings_type ;
struct TYPE_11__ {int type; int * label; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_4__* FUNC_3 (int ) ;
 TYPE_4__* FUNC_4 (int ) ;
 size_t FUNC_5 () ;
 int FUNC_6 (int) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (TYPE_4__*,TYPE_4__*,char*,char*,int ) ;

void FUNC_9(ozone_handle_t *VAR_2,
      enum msg_hash_enums VAR_3,
      enum menu_settings_type VAR_4)
{
   file_list_t *VAR_5 = FUNC_3(0);
   size_t VAR_6;
   menu_ctx_list_t VAR_7;
   file_list_t *VAR_8 = FUNC_4(0);
   size_t VAR_9 = FUNC_5();
   menu_file_list_cbs_t *VAR_10 = VAR_8 ?
      (menu_file_list_cbs_t*)FUNC_0(VAR_8,
            VAR_9) : ((void*)0);

   VAR_7.type = VAR_1;
   VAR_7.action = VAR_0;

   VAR_6 = VAR_5->size;

   if (VAR_5->list[VAR_6 - 1].label)
      FUNC_1(VAR_5->list[VAR_6 - 1].label);
   VAR_5->list[VAR_6 - 1].label = ((void*)0);

   VAR_5->list[VAR_6 - 1].label =
      FUNC_7(FUNC_6(VAR_3));
   VAR_5->list[VAR_6 - 1].type =
      VAR_4;

   FUNC_2(&VAR_7);

   if (VAR_10 && VAR_10->action_content_list_switch)
      VAR_10->action_content_list_switch(VAR_8, VAR_5, "", "", 0);
}
