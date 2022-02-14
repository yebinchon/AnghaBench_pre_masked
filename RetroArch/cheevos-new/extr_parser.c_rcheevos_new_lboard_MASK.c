
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int string; } ;
struct TYPE_8__ {TYPE_2__ id; int memaddr; int format; int desc; int title; int lboard_count; TYPE_1__* patchdata; } ;
typedef TYPE_3__ rcheevos_readud_t ;
struct TYPE_9__ {unsigned int id; void* mem; void* format; void* description; void* title; } ;
typedef TYPE_4__ rcheevos_ralboard_t ;
struct TYPE_6__ {TYPE_4__* lboards; } ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *,int) ;

__attribute__((used)) static int FUNC_3(rcheevos_readud_t* VAR_0)
{
   rcheevos_ralboard_t* VAR_1 = VAR_0->patchdata->lboards + VAR_0->lboard_count++;

   VAR_1->title = FUNC_1(&VAR_0->title);
   VAR_1->description = FUNC_1(&VAR_0->desc);
   VAR_1->format = FUNC_1(&VAR_0->format);
   VAR_1->mem = FUNC_1(&VAR_0->memaddr);
   VAR_1->id = (unsigned)FUNC_2(VAR_0->id.string, ((void*)0), 10);

   if ( !VAR_1->title
       || !VAR_1->description
       || !VAR_1->format
       || !VAR_1->mem)
   {
      FUNC_0(VAR_1->title);
      FUNC_0(VAR_1->description);
      FUNC_0(VAR_1->format);
      FUNC_0(VAR_1->mem);
      return -1;
   }

   return 0;
}
