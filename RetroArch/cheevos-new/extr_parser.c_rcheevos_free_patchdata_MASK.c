
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int core_count; unsigned int unofficial_count; unsigned int lboard_count; TYPE_2__* lboards; TYPE_2__* unofficial; TYPE_2__* core; scalar_t__ console_id; } ;
typedef TYPE_1__ rcheevos_rapatchdata_t ;
struct TYPE_7__ {struct TYPE_7__* mem; struct TYPE_7__* format; struct TYPE_7__* description; struct TYPE_7__* title; struct TYPE_7__* memaddr; struct TYPE_7__* badge; } ;
typedef TYPE_2__ rcheevos_ralboard_t ;
typedef TYPE_2__ rcheevos_racheevo_t ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(rcheevos_rapatchdata_t* VAR_0)
{
   unsigned VAR_1 = 0, VAR_2 = 0;
   const rcheevos_racheevo_t* VAR_3 = ((void*)0);
   const rcheevos_ralboard_t* VAR_4 = ((void*)0);

   VAR_3 = VAR_0->core;

   for (VAR_1 = 0, VAR_2 = VAR_0->core_count; VAR_1 < VAR_2; VAR_1++, VAR_3++)
   {
      FUNC_0(VAR_3->title);
      FUNC_0(VAR_3->description);
      FUNC_0(VAR_3->badge);
      FUNC_0(VAR_3->memaddr);
   }

   VAR_3 = VAR_0->unofficial;

   for (VAR_1 = 0, VAR_2 = VAR_0->unofficial_count; VAR_1 < VAR_2; VAR_1++, VAR_3++)
   {
      FUNC_0(VAR_3->title);
      FUNC_0(VAR_3->description);
      FUNC_0(VAR_3->badge);
      FUNC_0(VAR_3->memaddr);
   }

   VAR_4 = VAR_0->lboards;

   for (VAR_1 = 0, VAR_2 = VAR_0->lboard_count; VAR_1 < VAR_2; VAR_1++, VAR_4++)
   {
      FUNC_0(VAR_4->title);
      FUNC_0(VAR_4->description);
      FUNC_0(VAR_4->format);
      FUNC_0(VAR_4->mem);
   }

   FUNC_0(VAR_0->core);
   FUNC_0(VAR_0->unofficial);
   FUNC_0(VAR_0->lboards);

   VAR_0->console_id = 0;
   VAR_0->core = ((void*)0);
   VAR_0->unofficial = ((void*)0);
   VAR_0->lboards = ((void*)0);
   VAR_0->core_count = 0;
   VAR_0->unofficial_count = 0;
   VAR_0->lboard_count = 0;
}
