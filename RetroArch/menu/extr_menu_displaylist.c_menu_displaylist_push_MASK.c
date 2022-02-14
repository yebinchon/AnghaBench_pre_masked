
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ (* action_deferred_push ) (TYPE_2__*) ;} ;
typedef TYPE_1__ menu_file_list_cbs_t ;
struct TYPE_13__ {unsigned int type; int enum_idx; int list; void* label; void* path; int menu_list; } ;
typedef TYPE_2__ menu_displaylist_info_t ;
struct TYPE_14__ {int stack; int list; } ;
typedef TYPE_3__ menu_displaylist_ctx_entry_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (char const*,TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (char const**,char const**,unsigned int*,int*,int *) ;
 TYPE_1__* FUNC_5 () ;
 void* FUNC_6 (char const*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;

bool FUNC_9(menu_displaylist_ctx_entry_t *VAR_1)
{
   menu_displaylist_info_t VAR_2;
   menu_file_list_cbs_t *VAR_3 = ((void*)0);
   const char *VAR_4 = ((void*)0);
   const char *VAR_5 = ((void*)0);
   unsigned VAR_6 = 0;
   bool VAR_7 = 0;
   enum msg_hash_enums VAR_8 = VAR_0;

   if (!VAR_1)
      return 0;

   FUNC_1(&VAR_2);

   FUNC_4(&VAR_4, &VAR_5, &VAR_6, &VAR_8, ((void*)0));

   VAR_2.list = VAR_1->list;
   VAR_2.menu_list = VAR_1->stack;
   VAR_2.type = VAR_6;
   VAR_2.enum_idx = VAR_8;

   if (!FUNC_7(VAR_4))
      VAR_2.path = FUNC_6(VAR_4);

   if (!FUNC_7(VAR_5))
      VAR_2.label = FUNC_6(VAR_5);

   if (!VAR_2.list)
      goto error;

   if (FUNC_3(VAR_5, VAR_1, &VAR_2))
   {
      VAR_7 = FUNC_2(&VAR_2);
      goto end;
   }

   VAR_3 = FUNC_5();

   if (VAR_3 && VAR_3->action_deferred_push)
   {
      if (VAR_3->action_deferred_push(&VAR_2) != 0)
         goto error;
   }

   VAR_7 = 1;

end:
   FUNC_0(&VAR_2);

   return VAR_7;

error:
   FUNC_0(&VAR_2);
   return 0;
}
