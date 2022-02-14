
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ alias_ref; } ;
typedef TYPE_1__ ccv_nnc_tensor_symbol_info_t ;
struct TYPE_8__ {int input_size; scalar_t__* inputs; int output_size; scalar_t__* outputs; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_symbol_info_t ;
typedef int ccv_array_t ;
typedef int FILE ;


 int FUNC_0 (int const,TYPE_2__ const* const,int const,int *) ;
 int FUNC_1 (scalar_t__,TYPE_1__ const* const,TYPE_1__ const* const,int ,int const,int *) ;
 scalar_t__ FUNC_2 (int const* const,scalar_t__) ;
 int FUNC_3 (int *,char*,int const) ;
 int FUNC_4 (char,int *) ;
 int FUNC_5 (char*,int *) ;

__attribute__((used)) static void FUNC_6(const ccv_nnc_graph_exec_symbol_info_t* const VAR_0, const int VAR_1, const ccv_array_t* const VAR_2, const int VAR_3, FILE* VAR_4)
{
 FUNC_3(VAR_4, "node%d [shape=record,label=\"", VAR_1);
 FUNC_0(VAR_1, VAR_0, VAR_3, VAR_4);
 int VAR_5;
 if (VAR_0->input_size > 0)
 {
  FUNC_5("|{Input", VAR_4);
  for (VAR_5 = 0; VAR_5 < VAR_0->input_size; VAR_5++)
  {
   if (VAR_0->inputs[VAR_5] >= 0)
   {
    FUNC_4('|', VAR_4);
    const ccv_nnc_tensor_symbol_info_t* const VAR_6 = (ccv_nnc_tensor_symbol_info_t*)FUNC_2(VAR_2, VAR_0->inputs[VAR_5]);
    const ccv_nnc_tensor_symbol_info_t* const VAR_7 = VAR_6->alias_ref ? (ccv_nnc_tensor_symbol_info_t*)FUNC_2(VAR_2, VAR_6->alias_ref - 1) : 0;
    FUNC_1(VAR_0->inputs[VAR_5], VAR_6, VAR_7, 0, VAR_3, VAR_4);
   } else
    FUNC_5("|-", VAR_4);
  }
  FUNC_4('}', VAR_4);
 }
 if (VAR_0->output_size > 0)
 {
  FUNC_5("|{Output", VAR_4);
  for (VAR_5 = 0; VAR_5 < VAR_0->output_size; VAR_5++)
  {
   if (VAR_0->outputs[VAR_5] >= 0)
   {
    FUNC_4('|', VAR_4);
    const ccv_nnc_tensor_symbol_info_t* const VAR_8 = (ccv_nnc_tensor_symbol_info_t*)FUNC_2(VAR_2, VAR_0->outputs[VAR_5]);
    const ccv_nnc_tensor_symbol_info_t* const VAR_9 = VAR_8->alias_ref ? (ccv_nnc_tensor_symbol_info_t*)FUNC_2(VAR_2, VAR_8->alias_ref - 1) : 0;
    FUNC_1(VAR_0->outputs[VAR_5], VAR_8, VAR_9, 0, VAR_3, VAR_4);
   } else
    FUNC_5("|-", VAR_4);
  }
  FUNC_4('}', VAR_4);
 }
 FUNC_5("\"];\n", VAR_4);
}
