
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ccv_nnc_tensor_multiview_t ;
struct TYPE_9__ {size_t index; size_t zone; } ;
typedef TYPE_2__ ccv_nnc_tensor_dot_t ;
struct TYPE_10__ {int* remap; int * rename_zone; int * rename_index; TYPE_2__* dots; } ;
typedef TYPE_3__ ccv_nnc_tensor_dot_recovery_t ;
typedef int ccv_nnc_graph_t ;
struct TYPE_8__ {int cmd; } ;
struct TYPE_11__ {int input_size; int output_size; scalar_t__* outputs; scalar_t__* inputs; TYPE_1__ cmd; } ;
typedef TYPE_4__ ccv_nnc_graph_exec_info_t ;
typedef int FILE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ,int const,int const,int *) ;
 int FUNC_2 (int *,TYPE_3__ const,int const,int const,int*,int *) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int const) ;
 int FUNC_5 (char,int *) ;
 int FUNC_6 (char*,int *) ;

__attribute__((used)) static void FUNC_7(const ccv_nnc_graph_exec_info_t* const VAR_0, const int VAR_1, const ccv_nnc_tensor_dot_recovery_t VAR_2, const ccv_nnc_graph_t* const VAR_3, const int VAR_4, const int VAR_5, FILE* VAR_6, int* VAR_7)
{
 int VAR_8;
 FUNC_4(VAR_6, "label=<<b>while%d </b>Command: ", VAR_1);
 FUNC_6(FUNC_3(VAR_0->cmd.cmd), VAR_6);
 FUNC_6(">;\n", VAR_6);
 FUNC_4(VAR_6, "label%d [shape=record,label=\"{", VAR_1);
 int VAR_9 = *VAR_7;
 if (VAR_0->input_size > 0)
 {
  FUNC_6("{Input|{", VAR_6);
  for (VAR_8 = 0; VAR_8 < VAR_0->input_size; VAR_8++)
  {
   if (VAR_8 > 0)
    FUNC_5('|', VAR_6);
   if (VAR_0->inputs[VAR_8])
   {
    if (FUNC_0(VAR_0->inputs[VAR_8]))
     FUNC_2((ccv_nnc_tensor_multiview_t*)VAR_0->inputs[VAR_8], VAR_2, VAR_4, VAR_5, &VAR_9, VAR_6);
    else {
     const ccv_nnc_tensor_dot_t* const VAR_10 = VAR_2.dots + VAR_2.remap[VAR_9];
     FUNC_1(VAR_2.rename_index[VAR_10->index], VAR_0->inputs[VAR_8], VAR_2.rename_zone[VAR_10->zone], VAR_4, VAR_5, VAR_6);
     ++VAR_9;
    }
   } else
    FUNC_5('-', VAR_6);
  }
  FUNC_6("}}", VAR_6);
 }
 if (VAR_0->output_size > 0)
 {
  if (VAR_0->input_size > 0)
   FUNC_6("|", VAR_6);
  FUNC_6("{Output|{", VAR_6);
  for (VAR_8 = 0; VAR_8 < VAR_0->output_size; VAR_8++)
  {
   if (VAR_8 > 0)
    FUNC_5('|', VAR_6);
   if (VAR_0->outputs[VAR_8])
   {
    if (FUNC_0(VAR_0->outputs[VAR_8]))
     FUNC_2((ccv_nnc_tensor_multiview_t*)VAR_0->outputs[VAR_8], VAR_2, VAR_4, VAR_5, &VAR_9, VAR_6);
    else {
     const ccv_nnc_tensor_dot_t* const VAR_11 = VAR_2.dots + VAR_2.remap[VAR_9];
     FUNC_1(VAR_2.rename_index[VAR_11->index], VAR_0->outputs[VAR_8], VAR_2.rename_zone[VAR_11->zone], VAR_4, VAR_5, VAR_6);
     ++VAR_9;
    }
   } else
    FUNC_5('-', VAR_6);
  }
  FUNC_6("}}", VAR_6);
 }
 FUNC_6("}\"];\n", VAR_6);
 *VAR_7 = VAR_9;
}
