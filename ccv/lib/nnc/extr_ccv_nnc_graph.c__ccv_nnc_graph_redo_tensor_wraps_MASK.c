
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int size; scalar_t__* tensor_wraps; } ;
typedef TYPE_1__ ccv_nnc_graph_tensor_wrap_array_t ;
struct TYPE_10__ {int tensor_wraps; } ;
typedef TYPE_2__ ccv_nnc_graph_t ;
struct TYPE_11__ {int input_size; int output_size; int update_size; scalar_t__ tensor_wraps_ref; int updates; int outputs; int inputs; } ;
typedef TYPE_3__ ccv_nnc_graph_exec_info_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__* const) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 TYPE_1__* FUNC_3 (TYPE_2__* const,int const,scalar_t__*) ;
 int FUNC_4 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(ccv_nnc_graph_exec_info_t* const VAR_0, ccv_nnc_graph_t* const VAR_1)
{
 int VAR_2;
 const int VAR_3 = FUNC_5(VAR_0->inputs, VAR_0->input_size) ||
  FUNC_5(VAR_0->outputs, VAR_0->output_size) ||
  FUNC_5(VAR_0->updates, VAR_0->update_size);
 if (VAR_3)
 {
  const int VAR_4 = VAR_0->input_size + VAR_0->output_size + VAR_0->update_size;
  ccv_nnc_graph_tensor_wrap_array_t* const VAR_5 = FUNC_3(VAR_1, VAR_4, &VAR_0->tensor_wraps_ref);
  FUNC_4(VAR_5->tensor_wraps, VAR_0->inputs, VAR_0->input_size);
  const int VAR_6 = VAR_0->input_size;
  FUNC_4(VAR_5->tensor_wraps + VAR_6, VAR_0->outputs, VAR_0->output_size);
  const int VAR_7 = VAR_0->input_size + VAR_0->output_size;
  FUNC_4(VAR_5->tensor_wraps + VAR_7, VAR_0->updates, VAR_0->update_size);
 } else if (VAR_0->tensor_wraps_ref) {
  ccv_nnc_graph_tensor_wrap_array_t** VAR_8 = (ccv_nnc_graph_tensor_wrap_array_t**)FUNC_2(VAR_1->tensor_wraps, VAR_0->tensor_wraps_ref - 1);
  ccv_nnc_graph_tensor_wrap_array_t* const VAR_9 = *VAR_8;
  if (VAR_9)
  {
   for (VAR_2 = 0; VAR_2 < VAR_9->size; VAR_2++)
    if (VAR_9->tensor_wraps[VAR_2])
     FUNC_0(VAR_9->tensor_wraps[VAR_2]);
   FUNC_1(VAR_9);
   *VAR_8 = 0;
   VAR_0->tensor_wraps_ref = 0;
  }
 }
}
