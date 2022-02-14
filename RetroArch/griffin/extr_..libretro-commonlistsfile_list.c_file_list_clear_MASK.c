
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t size; TYPE_1__* list; } ;
typedef TYPE_2__ file_list_t ;
struct TYPE_4__ {int * alt; int * label; int * path; } ;


 int FUNC_0 (int *) ;

void FUNC_1(file_list_t *VAR_0)
{
   size_t VAR_1;

   if (!VAR_0)
      return;

   for (VAR_1 = 0; VAR_1 < VAR_0->size; VAR_1++)
   {
      if (VAR_0->list[VAR_1].path)
         FUNC_0(VAR_0->list[VAR_1].path);
      VAR_0->list[VAR_1].path = ((void*)0);

      if (VAR_0->list[VAR_1].label)
         FUNC_0(VAR_0->list[VAR_1].label);
      VAR_0->list[VAR_1].label = ((void*)0);

      if (VAR_0->list[VAR_1].alt)
         FUNC_0(VAR_0->list[VAR_1].alt);
      VAR_0->list[VAR_1].alt = ((void*)0);
   }

   VAR_0->size = 0;
}
