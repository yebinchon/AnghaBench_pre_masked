
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int alias_ref; char* name; int assign_ref; TYPE_5__ const* const s_ref; } ;
typedef TYPE_2__ const ccv_nnc_tensor_symbol_info_t ;
struct TYPE_14__ {int p_idx; TYPE_5__ const* const tensor_symbol_info; } ;
typedef TYPE_3__ ccv_nnc_symbolic_graph_t ;
struct TYPE_12__ {int cmd; } ;
struct TYPE_15__ {char* name; int input_size; scalar_t__* inputs; int output_size; int* outputs; TYPE_1__ cmd; } ;
typedef TYPE_4__ ccv_nnc_graph_exec_symbol_info_t ;
struct TYPE_16__ {int rnum; } ;
typedef TYPE_5__ ccv_array_t ;
typedef int FILE ;


 int const VAR_0 ;
 int FUNC_0 (int,TYPE_2__ const*,TYPE_2__ const*,int,int const,int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_5__ const* const,int const) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int const) ;
 int FUNC_5 (char*,int *) ;

__attribute__((used)) static void FUNC_6(const ccv_nnc_graph_exec_symbol_info_t* const VAR_1, const int VAR_2, const ccv_array_t* const VAR_3, const ccv_nnc_symbolic_graph_t* const VAR_4, const int VAR_5, FILE* VAR_6)
{
 int VAR_7;
 if (VAR_5 == VAR_0)
  FUNC_5("<table border=\"0\" cellborder=\"1\" cellspacing=\"0\"><tr><td colspan=\"3\" border=\"0\"><b>", VAR_6);
 else
  FUNC_5("<table border=\"0\" cellborder=\"1\" cellspacing=\"0\"><tr><td colspan=\"2\" border=\"0\"><b>", VAR_6);
 if (VAR_1->name)
  FUNC_5(VAR_1->name, VAR_6);
 else
  FUNC_4(VAR_6, "while%d", VAR_2);
 FUNC_5(" </b>Command: ", VAR_6);
 FUNC_5(FUNC_3(VAR_1->cmd.cmd), VAR_6);
 FUNC_5("</td></tr>", VAR_6);
 const int VAR_8 = VAR_4->p_idx - 1;
 FUNC_1(VAR_8 >= 0);
 if (VAR_1->input_size > 0)
 {
  FUNC_4(VAR_6, "<tr><td rowspan=\"%d\">Input</td>", VAR_1->input_size);
  for (VAR_7 = 0; VAR_7 < VAR_1->input_size; VAR_7++)
  {
   if (VAR_7 > 0)
    FUNC_5("<tr>", VAR_6);
   if (VAR_1->inputs[VAR_7] >= 0)
   {
    FUNC_5("<td>", VAR_6);
    const ccv_nnc_tensor_symbol_info_t* const VAR_9 = (ccv_nnc_tensor_symbol_info_t*)FUNC_2(VAR_3, VAR_1->inputs[VAR_7]);
    const ccv_nnc_tensor_symbol_info_t* const VAR_10 = VAR_9->alias_ref ? (ccv_nnc_tensor_symbol_info_t*)FUNC_2(VAR_3, VAR_9->alias_ref - 1) : 0;
    FUNC_0(VAR_1->inputs[VAR_7], VAR_9, VAR_10, 1, VAR_5, VAR_6);
    FUNC_5("</td><td border=\"0\">=&gt; ", VAR_6);
    const int VAR_11 = *(int*)FUNC_2(VAR_9->s_ref, VAR_8) - 1;
    FUNC_1(VAR_11 >= 0);
    const ccv_nnc_tensor_symbol_info_t* const VAR_12 = (ccv_nnc_tensor_symbol_info_t*)FUNC_2(VAR_4->tensor_symbol_info, VAR_11);
    if (VAR_12->name)
     FUNC_5(VAR_12->name, VAR_6);
    else
     FUNC_4(VAR_6, "tensor%d", VAR_11);
    FUNC_5("</td></tr>", VAR_6);
   } else {
    if (VAR_5 == VAR_0)
     FUNC_5("<td colspan=\"3\">-</td></tr>", VAR_6);
    else
     FUNC_5("<td colspan=\"2\">-</td></tr>", VAR_6);
   }
  }
 }
 if (VAR_1->output_size > 0)
 {
  FUNC_4(VAR_6, "<tr><td rowspan=\"%d\">Output</td>", VAR_1->output_size);
  for (VAR_7 = 0; VAR_7 < VAR_1->output_size; VAR_7++)
  {
   if (VAR_7 > 0)
    FUNC_5("<tr>", VAR_6);
   if (VAR_1->outputs[VAR_7] >= 0)
   {
    FUNC_5("<td>", VAR_6);
    ccv_nnc_tensor_symbol_info_t* VAR_13 = (ccv_nnc_tensor_symbol_info_t*)FUNC_2(VAR_3, VAR_1->outputs[VAR_7]);
    ccv_nnc_tensor_symbol_info_t* VAR_14 = VAR_13->alias_ref ? (ccv_nnc_tensor_symbol_info_t*)FUNC_2(VAR_3, VAR_13->alias_ref - 1) : 0;
    FUNC_0(VAR_1->outputs[VAR_7], VAR_13, VAR_14, 1, VAR_5, VAR_6);
    FUNC_5("</td><td border=\"0\">=&gt; ", VAR_6);
    const int VAR_15 = *(int*)FUNC_2(VAR_13->s_ref, VAR_8) - 1;
    FUNC_1(VAR_15 >= 0);
    const ccv_nnc_tensor_symbol_info_t* const VAR_16 = (ccv_nnc_tensor_symbol_info_t*)FUNC_2(VAR_4->tensor_symbol_info, VAR_15);
    if (VAR_16->name)
     FUNC_5(VAR_16->name, VAR_6);
    else
     FUNC_4(VAR_6, "tensor%d", VAR_15);
    FUNC_5("</td></tr>", VAR_6);
   } else {
    if (VAR_5 == VAR_0)
     FUNC_5("<td colspan=\"3\">-</td></tr>", VAR_6);
    else
     FUNC_5("<td colspan=\"2\">-</td></tr>", VAR_6);
   }
  }
 }
 for (VAR_7 = 0; VAR_7 < VAR_4->tensor_symbol_info->rnum; VAR_7++)
 {
  const ccv_nnc_tensor_symbol_info_t* const VAR_17 = (ccv_nnc_tensor_symbol_info_t*)FUNC_2(VAR_4->tensor_symbol_info, VAR_7);
  if (VAR_17->assign_ref)
  {
   if (VAR_5 == VAR_0)
    FUNC_5("<tr><td colspan=\"3\" border=\"0\">", VAR_6);
   else
    FUNC_5("<tr><td colspan=\"2\" border=\"0\">", VAR_6);
   const ccv_nnc_tensor_symbol_info_t* const VAR_18 = (ccv_nnc_tensor_symbol_info_t*)FUNC_2(VAR_4->tensor_symbol_info, VAR_17->assign_ref - 1);
   if (VAR_18->name)
    FUNC_5(VAR_18->name, VAR_6);
   else
    FUNC_4(VAR_6, "tensor%d", VAR_17->assign_ref - 1);
   FUNC_5(" -&gt; ", VAR_6);
   if (VAR_17->name)
    FUNC_5(VAR_17->name, VAR_6);
   else
    FUNC_4(VAR_6, "tensor%d", VAR_7);
   FUNC_5("</td></tr>", VAR_6);
  }
 }
 FUNC_5("</table>", VAR_6);
}
