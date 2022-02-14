
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int object_depth; int array_depth; int capacity_exceeded; TYPE_1__* playlist; int * current_entry; scalar_t__ in_items; } ;
struct TYPE_3__ {size_t size; size_t cap; int modified; int * entries; } ;
typedef int JSON_Parser_HandlerResult ;
typedef int JSON_Parser ;
typedef TYPE_2__ JSONContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static JSON_Parser_HandlerResult FUNC_2(JSON_Parser VAR_1)
{
   JSONContext *VAR_2 = (JSONContext*)FUNC_0(VAR_1);

   VAR_2->object_depth++;

   if (VAR_2->in_items && VAR_2->object_depth == 2)
   {
      if ((VAR_2->array_depth == 1) && !VAR_2->capacity_exceeded)
      {
         if (VAR_2->playlist->size < VAR_2->playlist->cap)
            VAR_2->current_entry = &VAR_2->playlist->entries[VAR_2->playlist->size];
         else
         {



            FUNC_1("JSON file contains more entries than current playlist capacity. Excess entries will be discarded.\n");
            VAR_2->capacity_exceeded = 1;
            VAR_2->current_entry = ((void*)0);




            VAR_2->playlist->modified = 1;
         }
      }
   }

   return VAR_0;
}
