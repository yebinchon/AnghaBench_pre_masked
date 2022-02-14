
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union string_list_elem_attr {int member_0; } ;
struct TYPE_2__ {int object_depth; int array_depth; int ** current_meta_val; int ** current_entry_val; int * current_meta_string; scalar_t__ in_items; scalar_t__* current_entry_string_list_val; scalar_t__ in_subsystem_roms; } ;
typedef int JSON_StringAttributes ;
typedef int JSON_Parser_HandlerResult ;
typedef int JSON_Parser ;
typedef TYPE_1__ JSONContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__,char*,union string_list_elem_attr) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static JSON_Parser_HandlerResult FUNC_6(JSON_Parser VAR_1, char *VAR_2, size_t VAR_3, JSON_StringAttributes VAR_4)
{
   JSONContext *VAR_5 = (JSONContext*)FUNC_0(VAR_1);
   (void)VAR_4;

   if (VAR_5->in_items && VAR_5->in_subsystem_roms && VAR_5->object_depth == 2 && VAR_5->array_depth == 2)
   {
      if (VAR_5->current_entry_string_list_val && VAR_3 && !FUNC_3(VAR_2))
      {
         union string_list_elem_attr VAR_6 = {0};

         if (!*VAR_5->current_entry_string_list_val)
            *VAR_5->current_entry_string_list_val = FUNC_5();

         FUNC_4(*VAR_5->current_entry_string_list_val, VAR_2, VAR_6);
      }
   }
   else if (VAR_5->in_items && VAR_5->object_depth == 2)
   {
      if (VAR_5->array_depth == 1)
      {
         if (VAR_5->current_entry_val && VAR_3 && !FUNC_3(VAR_2))
         {
            if (*VAR_5->current_entry_val)
               FUNC_1(*VAR_5->current_entry_val);
            *VAR_5->current_entry_val = FUNC_2(VAR_2);
         }
         else
         {

         }
      }
   }
   else if (VAR_5->object_depth == 1)
   {
      if (VAR_5->array_depth == 0)
      {
         if (VAR_5->current_meta_val && VAR_3 && !FUNC_3(VAR_2))
         {



            FUNC_1(VAR_5->current_meta_string);
            VAR_5->current_meta_string = ((void*)0);

            if (*VAR_5->current_meta_val)
               FUNC_1(*VAR_5->current_meta_val);

            *VAR_5->current_meta_val = FUNC_2(VAR_2);
         }
      }
   }

   VAR_5->current_entry_val = ((void*)0);
   VAR_5->current_meta_val = ((void*)0);

   return VAR_0;
}
