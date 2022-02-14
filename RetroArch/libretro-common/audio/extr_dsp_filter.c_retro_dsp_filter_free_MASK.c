
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int num_instances; unsigned int num_plugs; scalar_t__ conf; struct TYPE_6__* plugs; scalar_t__ lib; struct TYPE_6__* instances; scalar_t__ impl_data; TYPE_1__* impl; } ;
typedef TYPE_2__ retro_dsp_filter_t ;
struct TYPE_5__ {int (* free ) (scalar_t__) ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(retro_dsp_filter_t *VAR_0)
{
   unsigned VAR_1;
   if (!VAR_0)
      return;

   for (VAR_1 = 0; VAR_1 < VAR_0->num_instances; VAR_1++)
   {
      if (VAR_0->instances[VAR_1].impl_data && VAR_0->instances[VAR_1].impl)
         VAR_0->instances[VAR_1].impl->free(VAR_0->instances[VAR_1].impl_data);
   }
   FUNC_2(VAR_0->instances);
   if (VAR_0->conf)
      FUNC_0(VAR_0->conf);

   FUNC_2(VAR_0);
}
