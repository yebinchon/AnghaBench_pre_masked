
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__** top; struct TYPE_3__** dir; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(void)
{
 int VAR_3, VAR_4;
 FUNC_1(&VAR_2);
 if (!VAR_1)
  goto out_destroy;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!VAR_1->top[VAR_3])
   continue;

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (!VAR_1->top[VAR_3]->dir[VAR_4])
    continue;

   FUNC_0(VAR_1->top[VAR_3]->dir[VAR_4]);
  }

  FUNC_0(VAR_1->top[VAR_3]);
 }

 FUNC_0(VAR_1);
 VAR_1 = ((void*)0);
out_destroy:
 FUNC_2(&VAR_2);
}
