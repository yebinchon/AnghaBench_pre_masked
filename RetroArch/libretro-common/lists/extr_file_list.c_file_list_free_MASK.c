
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t size; struct TYPE_6__* list; struct TYPE_6__* alt; struct TYPE_6__* label; struct TYPE_6__* path; } ;
typedef TYPE_1__ file_list_t ;


 int FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(file_list_t *VAR_0)
{
   size_t VAR_1;

   if (!VAR_0)
      return;

   for (VAR_1 = 0; VAR_1 < VAR_0->size; VAR_1++)
   {
      FUNC_1(VAR_0, VAR_1);
      FUNC_0(VAR_0, VAR_1);

      if (VAR_0->list[VAR_1].path)
         FUNC_2(VAR_0->list[VAR_1].path);
      VAR_0->list[VAR_1].path = ((void*)0);

      if (VAR_0->list[VAR_1].label)
         FUNC_2(VAR_0->list[VAR_1].label);
      VAR_0->list[VAR_1].label = ((void*)0);

      if (VAR_0->list[VAR_1].alt)
         FUNC_2(VAR_0->list[VAR_1].alt);
      VAR_0->list[VAR_1].alt = ((void*)0);
   }
   if (VAR_0->list)
      FUNC_2(VAR_0->list);
   VAR_0->list = ((void*)0);
   FUNC_2(VAR_0);
}
