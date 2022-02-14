
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_21__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_26__ {scalar_t__ graph; } ;
typedef TYPE_4__ ccv_nnc_tensor_symbol_t ;
struct TYPE_27__ {int type; } ;
typedef TYPE_5__ ccv_nnc_tensor_param_t ;
typedef int ccv_nnc_cmd_t ;
struct TYPE_28__ {int const input_size; int output_size; TYPE_21__* compiled_data; scalar_t__ graph; int outputs; int * inputs; } ;
typedef TYPE_6__ ccv_cnnp_model_t ;
struct TYPE_22__ {scalar_t__ sequences; } ;
struct TYPE_29__ {char prefix; TYPE_1__ sequence; TYPE_8__* ids; TYPE_8__* symbols; } ;
typedef TYPE_7__ ccv_cnnp_model_add_to_array_context_t ;
typedef int ccv_cnnp_compiled_data_t ;
struct TYPE_30__ {int rnum; } ;
typedef TYPE_8__ ccv_array_t ;
struct TYPE_25__ {int minimizer; } ;
struct TYPE_24__ {TYPE_8__* retainables; TYPE_8__* trainables; } ;
struct TYPE_23__ {int loss; TYPE_3__ minimize; TYPE_2__ ids; TYPE_8__* retainables; TYPE_8__* trainables; int stream_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 TYPE_21__* FUNC_5 (int,int) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_8__* const,int) ;
 TYPE_8__* FUNC_10 (int,int ,int ) ;
 int FUNC_11 (TYPE_6__* const,int ,TYPE_7__*) ;
 int FUNC_12 (TYPE_6__* const,int ,TYPE_7__*) ;
 int FUNC_13 (TYPE_6__* const,scalar_t__,int *,int const,int ,int ) ;
 int FUNC_14 (scalar_t__,int ,int ,int) ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (scalar_t__,int ,int ,int,int ,int ) ;
 TYPE_4__ FUNC_17 (scalar_t__,TYPE_4__ const) ;
 int FUNC_18 (scalar_t__,TYPE_5__ const,int ) ;

void FUNC_19(ccv_cnnp_model_t* const VAR_10, const ccv_nnc_tensor_param_t* const VAR_11, const int VAR_12, const ccv_nnc_cmd_t VAR_13, const ccv_nnc_cmd_t VAR_14)
{
 FUNC_4(VAR_12 == VAR_10->input_size);
 if (!VAR_10->graph)
 {
  VAR_10->graph = FUNC_15();
  VAR_10->inputs = FUNC_6(sizeof(ccv_nnc_tensor_symbol_t) * VAR_12);
  int VAR_15;
  for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++)
   VAR_10->inputs[VAR_15] = FUNC_18(VAR_10->graph, VAR_11[VAR_15], 0);
  FUNC_13(VAR_10, VAR_10->graph, VAR_10->inputs, VAR_12, 0, 0);
  ccv_array_t* const VAR_16 = FUNC_10(sizeof(ccv_nnc_tensor_symbol_t), 0, 0);
  ccv_array_t* const VAR_17 = FUNC_10(sizeof(char*), 0, 0);
  ccv_cnnp_model_add_to_array_context_t VAR_18 = {
   .sequence = {},
   .prefix = 't',
   .symbols = VAR_16,
   .ids = VAR_17,
  };
  FUNC_12(VAR_10, VAR_9, &VAR_18);

  for (VAR_15 = 0; VAR_15 < VAR_16->rnum; VAR_15++)
  {
   const ccv_nnc_tensor_symbol_t VAR_19 = *(ccv_nnc_tensor_symbol_t*)FUNC_9(VAR_16, VAR_15);
   const ccv_nnc_tensor_symbol_t VAR_20 = FUNC_17(VAR_19.graph, VAR_19);
   FUNC_4(VAR_20.graph == 0);
  }
  ccv_array_t* const VAR_21 = FUNC_10(sizeof(ccv_nnc_tensor_symbol_t), 0, 0);
  ccv_array_t* const VAR_22 = FUNC_10(sizeof(char*), 0, 0);
  if (VAR_18.sequence.sequences)
   FUNC_7(VAR_18.sequence.sequences);
  VAR_18.prefix = 'r';
  VAR_18.symbols = VAR_21;
  VAR_18.ids = VAR_22;
  FUNC_11(VAR_10, VAR_9, &VAR_18);
  FUNC_8(VAR_18.sequence.sequences);

  for (VAR_15 = 0; VAR_15 < VAR_21->rnum; VAR_15++)
  {
   const ccv_nnc_tensor_symbol_t VAR_23 = *(ccv_nnc_tensor_symbol_t*)FUNC_9(VAR_21, VAR_15);
   const ccv_nnc_tensor_symbol_t VAR_24 = FUNC_17(VAR_23.graph, VAR_23);
   FUNC_4(VAR_24.graph == 0);
  }
  FUNC_14(VAR_10->graph, 0, 0, VAR_0 | VAR_1);
  FUNC_16(VAR_10->graph,
   FUNC_2(VAR_2,
    VAR_3,
    VAR_5,
    VAR_4),
   VAR_10->outputs, VAR_10->output_size,
   FUNC_3(VAR_10->graph), FUNC_1(VAR_10->graph));
  int VAR_25 = 0;
  for (VAR_15 = 0; !VAR_25 && VAR_15 < VAR_12; VAR_15++)
   VAR_25 = (FUNC_0(VAR_11[VAR_15].type) == VAR_8);
  VAR_10->compiled_data = FUNC_5(1, sizeof(ccv_cnnp_compiled_data_t) + sizeof(ccv_nnc_tensor_symbol_t) * (VAR_10->output_size - 1));

  VAR_10->compiled_data->stream_type = VAR_25 ? VAR_7 : VAR_6;
  VAR_10->compiled_data->trainables = VAR_16;
  VAR_10->compiled_data->retainables = VAR_21;
  VAR_10->compiled_data->ids.trainables = VAR_17;
  VAR_10->compiled_data->ids.retainables = VAR_22;
  VAR_10->compiled_data->minimize.minimizer = VAR_13;
  VAR_10->compiled_data->loss = VAR_14;
 }
}
