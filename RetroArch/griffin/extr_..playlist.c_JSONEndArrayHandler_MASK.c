
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int array_depth; int object_depth; int in_items; int in_subsystem_roms; int * current_items_string; int * current_meta_string; } ;
typedef int JSON_Parser_HandlerResult ;
typedef int JSON_Parser ;
typedef TYPE_1__ JSONContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,char*) ;

__attribute__((used)) static JSON_Parser_HandlerResult FUNC_4(JSON_Parser VAR_1)
{
   JSONContext *VAR_2 = (JSONContext*)FUNC_0(VAR_1);

   FUNC_2(VAR_2->array_depth > 0);

   VAR_2->array_depth--;

   if (VAR_2->object_depth == 1)
   {
      if (VAR_2->in_items && FUNC_3(VAR_2->current_meta_string, "items") && VAR_2->array_depth == 0)
      {
         FUNC_1(VAR_2->current_meta_string);
         VAR_2->current_meta_string = ((void*)0);
         VAR_2->in_items = 0;

         if (VAR_2->current_items_string)
         {
            FUNC_1(VAR_2->current_items_string);
            VAR_2->current_items_string = ((void*)0);
         }
      }
   }
   else if (VAR_2->object_depth == 2)
   {
      if (VAR_2->in_subsystem_roms && FUNC_3(VAR_2->current_items_string, "subsystem_roms") && VAR_2->array_depth == 1)
      {
         VAR_2->in_subsystem_roms = 0;
      }
   }

   return VAR_0;
}
