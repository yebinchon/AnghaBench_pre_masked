
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int path; } ;
typedef TYPE_1__ core_info_t ;
struct TYPE_6__ {int * list; } ;
typedef TYPE_2__ core_info_list_t ;



core_info_t *FUNC_0(core_info_list_t *VAR_0, size_t VAR_1)
{
   core_info_t *VAR_2 = ((void*)0);

   if (!VAR_0)
      return ((void*)0);
   VAR_2 = (core_info_t*)&VAR_0->list[VAR_1];
   if (!VAR_2 || !VAR_2->path)
      return ((void*)0);

   return VAR_2;
}
