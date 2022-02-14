
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int sub_prep_size; TYPE_3__** sub_preps; } ;
typedef TYPE_4__ ccv_nnc_symbolic_graph_prep_t ;
struct TYPE_10__ {TYPE_2__* symbolic_graph; TYPE_1__* graph; } ;
struct TYPE_9__ {scalar_t__ pair; } ;
struct TYPE_8__ {int pair; } ;


 int FUNC_0 (TYPE_4__ const* const,scalar_t__) ;

__attribute__((used)) static void FUNC_1(const ccv_nnc_symbolic_graph_prep_t* const VAR_0, ccv_nnc_symbolic_graph_prep_t* const VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->sub_prep_size; VAR_2++)
  if (VAR_1->sub_preps[VAR_2])
  {
   if (VAR_1->sub_preps[VAR_2]->symbolic_graph->pair)
    VAR_1->sub_preps[VAR_2]->graph->pair = FUNC_0(VAR_0, VAR_1->sub_preps[VAR_2]->symbolic_graph->pair);
  }
}
