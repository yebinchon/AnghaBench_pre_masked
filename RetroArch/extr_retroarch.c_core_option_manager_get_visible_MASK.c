
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t size; TYPE_1__* opts; } ;
typedef TYPE_2__ core_option_manager_t ;
struct TYPE_4__ {int visible; } ;



bool FUNC_0(core_option_manager_t *VAR_0,
      size_t VAR_1)
{
   if (!VAR_0)
      return 0;
   if (VAR_1 >= VAR_0->size)
      return 0;
   return VAR_0->opts[VAR_1].visible;
}
