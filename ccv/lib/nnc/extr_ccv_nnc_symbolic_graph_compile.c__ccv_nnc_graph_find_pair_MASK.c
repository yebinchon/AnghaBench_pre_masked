
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ccv_nnc_symbolic_graph_t ;
struct TYPE_3__ {int sub_prep_size; struct TYPE_3__** sub_preps; int * graph; int const* const symbolic_graph; } ;
typedef TYPE_1__ ccv_nnc_symbolic_graph_prep_t ;
typedef int ccv_nnc_graph_t ;



__attribute__((used)) static ccv_nnc_graph_t* FUNC_0(const ccv_nnc_symbolic_graph_prep_t* const VAR_0, const ccv_nnc_symbolic_graph_t* const VAR_1)
{
 if (VAR_0->symbolic_graph == VAR_1)
  return VAR_0->graph;
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->sub_prep_size; VAR_2++)
  if (VAR_0->sub_preps[VAR_2])
  {
   ccv_nnc_graph_t* const VAR_3 = FUNC_0(VAR_0->sub_preps[VAR_2], VAR_1);
   if (VAR_3)
    return VAR_3;
  }
 return 0;
}
