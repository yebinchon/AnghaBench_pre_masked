
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ active; } ;
typedef TYPE_2__ rcheevos_lboard_t ;
struct TYPE_7__ {int last; } ;
typedef TYPE_3__ rcheevos_cheevo_t ;
struct TYPE_5__ {unsigned int core_count; unsigned int unofficial_count; unsigned int lboard_count; } ;
struct TYPE_8__ {TYPE_1__ patchdata; TYPE_2__* lboards; TYPE_3__* unofficial; TYPE_3__* core; } ;


 TYPE_4__ VAR_0 ;

void FUNC_0(void)
{
   rcheevos_cheevo_t* VAR_1;
   rcheevos_lboard_t* VAR_2;
   unsigned VAR_3;

   VAR_1 = VAR_0.core;
   for (VAR_3 = 0; VAR_3 < VAR_0.patchdata.core_count; VAR_3++, VAR_1++)
   {
      VAR_1->last = 1;
   }

   VAR_1 = VAR_0.unofficial;
   for (VAR_3 = 0; VAR_3 < VAR_0.patchdata.unofficial_count; VAR_3++, VAR_1++)
   {
      VAR_1->last = 1;
   }

   VAR_2 = VAR_0.lboards;
   for (VAR_3 = 0; VAR_3 < VAR_0.patchdata.lboard_count; VAR_3++, VAR_2++)
   {
      VAR_2->active = 0;
   }
}
