
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ alias_ref; } ;
typedef TYPE_2__ const ccv_nnc_tensor_symbol_info_t ;
struct TYPE_7__ {int cmd; } ;
struct TYPE_9__ {char* name; int const input_size; scalar_t__* inputs; int const output_size; scalar_t__* outputs; TYPE_1__ cmd; } ;
typedef TYPE_3__ ccv_nnc_graph_exec_symbol_info_t ;
typedef int ccv_array_t ;
typedef int FILE ;


 int const VAR_0 ;
 int FUNC_0 (scalar_t__,TYPE_2__ const*,TYPE_2__ const*,int,int const,int *) ;
 scalar_t__ FUNC_1 (int const* const,scalar_t__) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int const) ;
 int FUNC_4 (char*,int *) ;

__attribute__((used)) static void FUNC_5(const ccv_nnc_graph_exec_symbol_info_t* const VAR_1, const int VAR_2, const ccv_array_t* const VAR_3, const int VAR_4, FILE* VAR_5)
{
 int VAR_6;
 if (VAR_4 == VAR_0)
  FUNC_4("<table border=\"0\" cellborder=\"1\" cellspacing=\"0\"><tr><td colspan=\"3\" border=\"0\"><b>", VAR_5);
 else
  FUNC_4("<table border=\"0\" cellborder=\"1\" cellspacing=\"0\"><tr><td colspan=\"2\" border=\"0\"><b>", VAR_5);
 if (VAR_1->name)
  FUNC_4(VAR_1->name, VAR_5);
 else
  FUNC_3(VAR_5, "caseof%d", VAR_2);
 FUNC_4(" </b>Command: ", VAR_5);
 FUNC_4(FUNC_2(VAR_1->cmd.cmd), VAR_5);
 FUNC_4("</td></tr>", VAR_5);
 if (VAR_1->input_size > 0)
 {
  FUNC_3(VAR_5, "<tr><td rowspan=\"%d\">Input</td>", VAR_1->input_size);
  for (VAR_6 = 0; VAR_6 < VAR_1->input_size; VAR_6++)
  {
   if (VAR_6 > 0)
    FUNC_4("<tr>", VAR_5);
   if (VAR_1->inputs[VAR_6] >= 0)
   {
    FUNC_4("<td>", VAR_5);
    const ccv_nnc_tensor_symbol_info_t* const VAR_7 = (ccv_nnc_tensor_symbol_info_t*)FUNC_1(VAR_3, VAR_1->inputs[VAR_6]);
    const ccv_nnc_tensor_symbol_info_t* const VAR_8 = VAR_7->alias_ref ? (ccv_nnc_tensor_symbol_info_t*)FUNC_1(VAR_3, VAR_7->alias_ref - 1) : 0;
    FUNC_0(VAR_1->inputs[VAR_6], VAR_7, VAR_8, 1, VAR_4, VAR_5);
    FUNC_4("</td></tr>", VAR_5);
   } else {
    if (VAR_4 == VAR_0)
     FUNC_4("<td colspan=\"2\">-</td></tr>", VAR_5);
    else
     FUNC_4("<td colspan=\"1\">-</td></tr>", VAR_5);
   }
  }
 }
 if (VAR_1->output_size > 0)
 {
  FUNC_3(VAR_5, "<tr><td rowspan=\"%d\">Output</td>", VAR_1->output_size);
  for (VAR_6 = 0; VAR_6 < VAR_1->output_size; VAR_6++)
  {
   if (VAR_6 > 0)
    FUNC_4("<tr>", VAR_5);
   if (VAR_1->outputs[VAR_6] >= 0)
   {
    FUNC_4("<td>", VAR_5);
    ccv_nnc_tensor_symbol_info_t* VAR_9 = (ccv_nnc_tensor_symbol_info_t*)FUNC_1(VAR_3, VAR_1->outputs[VAR_6]);
    ccv_nnc_tensor_symbol_info_t* VAR_10 = VAR_9->alias_ref ? (ccv_nnc_tensor_symbol_info_t*)FUNC_1(VAR_3, VAR_9->alias_ref - 1) : 0;
    FUNC_0(VAR_1->outputs[VAR_6], VAR_9, VAR_10, 1, VAR_4, VAR_5);
    FUNC_4("</td></tr>", VAR_5);
   } else {
    if (VAR_4 == VAR_0)
     FUNC_4("<td colspan=\"2\">-</td></tr>", VAR_5);
    else
     FUNC_4("<td colspan=\"1\">-</td></tr>", VAR_5);
   }
  }
 }
 FUNC_4("</table>", VAR_5);
}
