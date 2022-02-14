
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct string_list {int dummy; } ;
typedef int retro_task_t ;
typedef enum database_type { ____Placeholder_database_type } database_type ;
struct TYPE_6__ {int type; int status; scalar_t__ list_ptr; struct string_list* list; } ;
typedef TYPE_1__ database_info_handle_t ;
struct TYPE_7__ {int * all_ext; } ;
typedef TYPE_2__ core_info_list_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__**) ;
 struct string_list* FUNC_2 (char const*,int *,int,int,int,int) ;
 int FUNC_3 (struct string_list*) ;
 int FUNC_4 (TYPE_1__*) ;

database_info_handle_t *FUNC_5(const char *VAR_1,
      enum database_type VAR_2, retro_task_t *VAR_3,
      bool VAR_4)
{
   core_info_list_t *VAR_5 = ((void*)0);
   struct string_list *VAR_6 = ((void*)0);
   database_info_handle_t *VAR_7 = (database_info_handle_t*)
      FUNC_0(1, sizeof(*VAR_7));

   if (!VAR_7)
      return ((void*)0);

   FUNC_1(&VAR_5);

   VAR_6 = FUNC_2(VAR_1, VAR_5 ? VAR_5->all_ext : ((void*)0),
         0, VAR_4,
         0, 1);

   if (!VAR_6)
   {
      FUNC_4(VAR_7);
      return ((void*)0);
   }

   FUNC_3(VAR_6);

   VAR_7->list = VAR_6;
   VAR_7->list_ptr = 0;
   VAR_7->status = VAR_0;
   VAR_7->type = VAR_2;

   return VAR_7;
}
