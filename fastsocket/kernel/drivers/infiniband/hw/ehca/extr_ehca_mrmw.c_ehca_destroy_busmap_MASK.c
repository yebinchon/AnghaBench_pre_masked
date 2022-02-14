
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__** top; struct TYPE_4__** dir; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(void)
{
 int VAR_2, VAR_3;

 if (!VAR_1)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (!FUNC_0(VAR_1->top[VAR_2]))
   continue;
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   if (!FUNC_0(VAR_1->top[VAR_2]->dir[VAR_3]))
    continue;

   FUNC_1(VAR_1->top[VAR_2]->dir[VAR_3]);
  }

  FUNC_1(VAR_1->top[VAR_2]);
 }

 FUNC_1(VAR_1);
 VAR_1 = ((void*)0);
}
