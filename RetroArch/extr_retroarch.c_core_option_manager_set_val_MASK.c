
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct core_option {size_t index; TYPE_1__* vals; } ;
struct TYPE_5__ {size_t size; int updated; int * opts; } ;
typedef TYPE_2__ core_option_manager_t ;
struct TYPE_4__ {size_t size; } ;



void FUNC_0(core_option_manager_t *VAR_0,
      size_t VAR_1, size_t VAR_2)
{
   struct core_option *VAR_3= ((void*)0);

   if (!VAR_0)
      return;
   if (VAR_1 >= VAR_0->size)
      return;

   VAR_3 = (struct core_option*)&VAR_0->opts[VAR_1];
   VAR_3->index = VAR_2 % VAR_3->vals->size;

   VAR_0->updated = 1;
}
