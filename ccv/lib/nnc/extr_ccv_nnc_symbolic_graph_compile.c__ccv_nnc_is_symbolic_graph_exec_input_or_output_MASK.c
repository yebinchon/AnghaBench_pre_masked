
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int input_size; int const* inputs; int output_size; int const* outputs; } ;
typedef TYPE_1__ ccv_nnc_graph_exec_symbol_info_t ;


 int FUNC_0 (TYPE_1__ const* const) ;

__attribute__((used)) static int FUNC_1(const int VAR_0, const ccv_nnc_graph_exec_symbol_info_t *const VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;
 FUNC_0(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_1->input_size && !VAR_3; VAR_2++)
  if (VAR_0 == VAR_1->inputs[VAR_2])
   VAR_3 = 1;
 int VAR_4 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_1->output_size && !VAR_4; VAR_2++)
  if (VAR_0 == VAR_1->outputs[VAR_2])
   VAR_4 = 1;

 if (VAR_4)
  return 1;
 if (VAR_3)
  return -1;
 return 0;
}
