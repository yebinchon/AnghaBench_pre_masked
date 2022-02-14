
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int ccv_nnc_tensor_symbol_t ;
typedef int ccv_nnc_symbolic_graph_t ;
struct TYPE_18__ {int output_size; int * outputs; } ;
typedef TYPE_4__ ccv_cnnp_model_t ;
typedef TYPE_5__* ccv_cnnp_model_io_t ;
struct TYPE_15__ {int const input_size; int const output_size; } ;
struct TYPE_20__ {int sequence_size; TYPE_3__** sequence; TYPE_1__ super; } ;
typedef TYPE_6__ ccv_cnnp_functional_model_t ;
struct TYPE_21__ {int rnum; } ;
typedef TYPE_7__ const ccv_array_t ;
struct TYPE_19__ {int * outputs; TYPE_2__* model; } ;
struct TYPE_17__ {int * outputs; TYPE_4__* model; TYPE_7__ const* incomings; } ;
struct TYPE_16__ {int output_size; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__ const*) ;
 int FUNC_2 (TYPE_7__ const*) ;
 scalar_t__ FUNC_3 (TYPE_7__ const*,int) ;
 TYPE_7__ const* FUNC_4 (int,int,int ) ;
 int FUNC_5 (TYPE_7__ const*,int *) ;
 int FUNC_6 (TYPE_4__* const,int * const,int *,int,int *,int) ;

__attribute__((used)) static void FUNC_7(ccv_cnnp_model_t* const VAR_0, ccv_nnc_symbolic_graph_t* const VAR_1, const ccv_nnc_tensor_symbol_t* const VAR_2, const int VAR_3, ccv_nnc_tensor_symbol_t* const VAR_4, const int VAR_5)
{
 ccv_cnnp_functional_model_t* const VAR_6 = (ccv_cnnp_functional_model_t*)VAR_0;
 FUNC_0(VAR_6->super.input_size == VAR_3);
 FUNC_0(VAR_6->super.output_size == VAR_5);
 int VAR_7, VAR_8, VAR_9;
 for (VAR_7 = 0; VAR_7 < VAR_6->super.input_size; VAR_7++)
  VAR_6->sequence[VAR_7]->outputs[0] = VAR_6->sequence[VAR_7]->model->outputs[0] = VAR_2[VAR_7];
 ccv_array_t* VAR_10 = FUNC_4(sizeof(ccv_nnc_tensor_symbol_t), 1, 0);
 for (VAR_7 = VAR_6->super.input_size; VAR_7 < VAR_6->sequence_size; VAR_7++)
 {
  ccv_cnnp_model_t* const VAR_11 = VAR_6->sequence[VAR_7]->model;
  FUNC_1(VAR_10);
  const ccv_array_t* const VAR_12 = VAR_6->sequence[VAR_7]->incomings;
  for (VAR_8 = 0; VAR_8 < VAR_12->rnum; VAR_8++)
  {
   const ccv_cnnp_model_io_t VAR_13 = *(ccv_cnnp_model_io_t*)FUNC_3(VAR_12, VAR_8);
   for (VAR_9 = 0; VAR_9 < VAR_13->model->output_size; VAR_9++)
    FUNC_5(VAR_10, &VAR_13->outputs[VAR_9]);
  }

  FUNC_6(VAR_11, VAR_1, (ccv_nnc_tensor_symbol_t*)FUNC_3(VAR_10, 0), VAR_10->rnum, VAR_6->sequence[VAR_7]->outputs, VAR_11->output_size);
 }
 FUNC_2(VAR_10);
 for (VAR_7 = VAR_5, VAR_9 = VAR_6->sequence_size - 1; VAR_9 >= 0; VAR_9--)
 {
  ccv_cnnp_model_t* const VAR_14 = VAR_6->sequence[VAR_9]->model;
  VAR_7 -= VAR_14->output_size;
  if (VAR_7 < 0)
   break;
  for (VAR_8 = 0; VAR_8 < VAR_14->output_size; VAR_8++)
   VAR_4[VAR_7 + VAR_8] = VAR_6->sequence[VAR_9]->outputs[VAR_8];
 }
 FUNC_0(VAR_7 <= 0);
}
