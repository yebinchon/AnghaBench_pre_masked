
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sub_arena_size; struct TYPE_4__** sub_arenas; } ;
typedef TYPE_1__ ccv_nnc_graph_exec_arena_t ;


 int FUNC_0 (TYPE_1__* const) ;

void FUNC_1(ccv_nnc_graph_exec_arena_t* const VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->sub_arena_size; VAR_1++)
  if (VAR_0->sub_arenas[VAR_1])
   FUNC_1(VAR_0->sub_arenas[VAR_1]);
 FUNC_0(VAR_0);
}
