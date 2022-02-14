
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int string; } ;
struct TYPE_10__ {int string; } ;
struct TYPE_8__ {int string; } ;
struct TYPE_12__ {TYPE_4__ id; TYPE_3__ points; int memaddr; int badge; int desc; int title; int unofficial_count; TYPE_2__* patchdata; int core_count; TYPE_1__ flags; } ;
typedef TYPE_5__ rcheevos_readud_t ;
struct TYPE_13__ {unsigned int points; unsigned int id; void* memaddr; void* badge; void* description; void* title; } ;
typedef TYPE_6__ rcheevos_racheevo_t ;
struct TYPE_9__ {TYPE_6__* unofficial; TYPE_6__* core; } ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *,int) ;

__attribute__((used)) static int FUNC_3(rcheevos_readud_t* VAR_0)
{
   rcheevos_racheevo_t* VAR_1 = ((void*)0);
   unsigned VAR_2 = (unsigned)FUNC_2(VAR_0->flags.string, ((void*)0), 10);

   if (VAR_2 == 3)
      VAR_1 = VAR_0->patchdata->core + VAR_0->core_count++;
   else if (VAR_2 == 5)
      VAR_1 = VAR_0->patchdata->unofficial + VAR_0->unofficial_count++;
   else
      return 0;

   VAR_1->title = FUNC_1(&VAR_0->title);
   VAR_1->description = FUNC_1(&VAR_0->desc);
   VAR_1->badge = FUNC_1(&VAR_0->badge);
   VAR_1->memaddr = FUNC_1(&VAR_0->memaddr);
   VAR_1->points = (unsigned)FUNC_2(VAR_0->points.string, ((void*)0), 10);
   VAR_1->id = (unsigned)FUNC_2(VAR_0->id.string, ((void*)0), 10);

   if ( !VAR_1->title
       || !VAR_1->description
       || !VAR_1->badge
       || !VAR_1->memaddr)
   {
      FUNC_0(VAR_1->title);
      FUNC_0(VAR_1->description);
      FUNC_0(VAR_1->badge);
      FUNC_0(VAR_1->memaddr);
      return -1;
   }

   return 0;
}
