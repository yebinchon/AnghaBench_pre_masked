
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* list; } ;
typedef TYPE_2__ file_list_t ;
struct TYPE_4__ {int * alt; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;

void FUNC_2(file_list_t *VAR_0, size_t VAR_1,
      const char *VAR_2)
{
   if (!VAR_0 || !VAR_2)
      return;

   if (VAR_0->list[VAR_1].alt)
      FUNC_0(VAR_0->list[VAR_1].alt);
   VAR_0->list[VAR_1].alt = ((void*)0);

   if (VAR_2)
      VAR_0->list[VAR_1].alt = FUNC_1(VAR_2);
}
