
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


union string_list_elem_attr {scalar_t__ i; } ;
struct string_list {int dummy; } ;
typedef int retro_task_t ;
typedef enum database_type { ____Placeholder_database_type } database_type ;
struct TYPE_4__ {int type; int status; struct string_list* list; scalar_t__ list_ptr; } ;
typedef TYPE_1__ database_info_handle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct string_list*,char const*,union string_list_elem_attr) ;
 struct string_list* FUNC_3 () ;

database_info_handle_t *FUNC_4(const char *VAR_1,
      enum database_type VAR_2, retro_task_t *VAR_3)
{
   union string_list_elem_attr VAR_4;
   struct string_list *VAR_5 = ((void*)0);
   database_info_handle_t *VAR_6 = (database_info_handle_t*)
      FUNC_0(1, sizeof(*VAR_6));

   if (!VAR_6)
      return ((void*)0);

   VAR_4.i = 0;

   VAR_5 = FUNC_3();

   if (!VAR_5)
   {
      FUNC_1(VAR_6);
      return ((void*)0);
   }

   FUNC_2(VAR_5, VAR_1, VAR_4);

   VAR_6->list_ptr = 0;
   VAR_6->list = VAR_5;
   VAR_6->status = VAR_0;
   VAR_6->type = VAR_2;

   return VAR_6;
}
