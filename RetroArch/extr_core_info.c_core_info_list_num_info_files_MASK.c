
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t count; TYPE_1__* list; } ;
typedef TYPE_2__ core_info_list_t ;
typedef int config_file_t ;
struct TYPE_4__ {scalar_t__ config_data; } ;



size_t FUNC_0(core_info_list_t *VAR_0)
{
   size_t VAR_1, VAR_2 = 0;

   if (!VAR_0)
      return 0;

   for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++)
   {
      config_file_t *VAR_3 = (config_file_t*)
         VAR_0->list[VAR_1].config_data;
      VAR_2 += !!VAR_3;
   }

   return VAR_2;
}
