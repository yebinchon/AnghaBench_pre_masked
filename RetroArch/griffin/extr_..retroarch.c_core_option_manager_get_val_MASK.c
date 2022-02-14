
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct core_option {size_t index; TYPE_2__* vals; } ;
struct TYPE_7__ {size_t size; int * opts; } ;
typedef TYPE_3__ core_option_manager_t ;
struct TYPE_6__ {TYPE_1__* elems; } ;
struct TYPE_5__ {char const* data; } ;



const char *FUNC_0(core_option_manager_t *VAR_0, size_t VAR_1)
{
   struct core_option *VAR_2 = ((void*)0);
   if (!VAR_0)
      return ((void*)0);
   if (VAR_1 >= VAR_0->size)
      return ((void*)0);
   VAR_2 = (struct core_option*)&VAR_0->opts[VAR_1];
   return VAR_2->vals->elems[VAR_2->index].data;
}
