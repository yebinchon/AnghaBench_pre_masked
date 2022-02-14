
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ modelnum; } ;
typedef TYPE_1__ entity_t ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__* VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;

void FUNC_2(entity_t *VAR_3)
{
 int VAR_4;



 FUNC_1(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  if (VAR_0[VAR_4] == VAR_3->modelnum)
  {
   FUNC_0(&VAR_1[VAR_4], VAR_3);
  }
 }
}
