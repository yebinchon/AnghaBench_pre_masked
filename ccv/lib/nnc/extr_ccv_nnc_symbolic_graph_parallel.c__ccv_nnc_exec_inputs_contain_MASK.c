
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int input_size; int const* inputs; } ;
typedef TYPE_1__ ccv_nnc_graph_exec_symbol_info_t ;



__attribute__((used)) static int FUNC_0(const ccv_nnc_graph_exec_symbol_info_t* const VAR_0, const int VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->input_size; VAR_2++)
  if (VAR_0->inputs[VAR_2] == VAR_1)
   return 1;
 return 0;
}
