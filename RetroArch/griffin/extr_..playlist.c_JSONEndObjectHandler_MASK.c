
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int object_depth; int array_depth; TYPE_1__* playlist; int capacity_exceeded; scalar_t__ in_items; } ;
struct TYPE_3__ {int size; } ;
typedef int JSON_Parser_HandlerResult ;
typedef int JSON_Parser ;
typedef TYPE_2__ JSONContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static JSON_Parser_HandlerResult FUNC_2(JSON_Parser VAR_1)
{
   JSONContext *VAR_2 = (JSONContext*)FUNC_0(VAR_1);

   if (VAR_2->in_items && VAR_2->object_depth == 2)
   {
      if ((VAR_2->array_depth == 1) && !VAR_2->capacity_exceeded)
         VAR_2->playlist->size++;
   }

   FUNC_1(VAR_2->object_depth > 0);

   VAR_2->object_depth--;

   return VAR_0;
}
