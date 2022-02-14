
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int elements_count; int groups_count; TYPE_2__* param; TYPE_2__* groups; TYPE_2__* elements; } ;
typedef TYPE_1__ scope_t ;
struct TYPE_9__ {struct TYPE_9__* prev; } ;
typedef TYPE_2__ param_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(scope_t *VAR_0)
{
   int VAR_1;
   param_t *VAR_2;
   param_t *VAR_3;

   for (VAR_1 = 0; VAR_1 < VAR_0->elements_count; ++VAR_1)
      FUNC_0(&VAR_0->elements[VAR_1]);
   FUNC_1(VAR_0->elements);

   for (VAR_1 = 0; VAR_1 < VAR_0->groups_count; ++VAR_1)
      FUNC_3(&VAR_0->groups[VAR_1]);
   FUNC_1(VAR_0->groups);

   for (VAR_2 = VAR_0->param; VAR_2; VAR_2 = VAR_3)
   {
      VAR_3 = VAR_2->prev;
      FUNC_2(VAR_2);
      FUNC_1(VAR_2);
   }
}
