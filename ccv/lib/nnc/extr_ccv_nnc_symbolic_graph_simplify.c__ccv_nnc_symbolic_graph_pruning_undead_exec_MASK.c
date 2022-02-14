
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef unsigned int uint32_t ;
struct TYPE_7__ {unsigned int* exec_dead; unsigned int* tensor_dead; TYPE_1__* graph; TYPE_3__* exec_symbol_info; } ;
typedef TYPE_2__ ccv_nnc_symbolic_graph_simplify_t ;
struct TYPE_9__ {scalar_t__ cmd; } ;
struct TYPE_8__ {int input_size; int* inputs; int output_size; int* outputs; TYPE_4__ cmd; } ;
typedef TYPE_3__ ccv_nnc_graph_exec_symbol_info_t ;
typedef int ccv_array_t ;
struct TYPE_6__ {int exec_symbol_info; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int const) ;
 int FUNC_2 (int * const,int const*) ;
 int FUNC_3 (int,int const) ;
 int FUNC_4 (TYPE_4__,int,int,int*,int const,int*,int const) ;

__attribute__((used)) static void FUNC_5(ccv_nnc_symbolic_graph_simplify_t* const VAR_5, const int VAR_6, uint32_t* const VAR_7, ccv_array_t* const VAR_8)
{
 FUNC_0(VAR_6 >= 0);
 uint32_t* const VAR_9 = VAR_5->exec_dead;
 uint32_t* const VAR_10 = VAR_5->tensor_dead;
 VAR_9[VAR_6 >> 5] &= ~(1u << (VAR_6 & 0x1f));
 ccv_nnc_graph_exec_symbol_info_t* const VAR_11 = VAR_5->exec_symbol_info + VAR_6;
 int VAR_12;
 if (VAR_11->cmd.cmd == VAR_3 ||
  VAR_11->cmd.cmd == VAR_2 ||
  VAR_11->cmd.cmd == VAR_1 ||
  VAR_11->cmd.cmd == VAR_0)
 {

  for (VAR_12 = 0; VAR_12 < VAR_11->input_size; VAR_12++)
  {
   const int VAR_13 = VAR_11->inputs[VAR_12];
   if (VAR_13 >= 0 && !(VAR_7[VAR_13 >> 5] & (1u << (VAR_13 & 0x1f))))
   {
    FUNC_2(VAR_8, &VAR_13);
    VAR_7[VAR_13 >> 5] |= (1u << (VAR_13 & 0x1f));
   }
  }
  for (VAR_12 = 0; VAR_12 < VAR_11->output_size; VAR_12++)
  {
   const int VAR_14 = VAR_11->outputs[VAR_12];
   if (VAR_14 >= 0 && !(VAR_7[VAR_14 >> 5] & (1u << (VAR_14 & 0x1f))))
   {
    FUNC_2(VAR_8, &VAR_14);
    VAR_7[VAR_14 >> 5] |= (1u << (VAR_14 & 0x1f));
   }
  }
  return;
 }

 const int VAR_15 = (VAR_11->input_size + 63) >> 6;
 const int VAR_16 = (VAR_11->output_size + 63) >> 6;
 uint64_t VAR_17[FUNC_3(1, VAR_15)];
 for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++)
  VAR_17[VAR_12] = 0;
 uint64_t VAR_18[FUNC_3(1, VAR_16)];
 for (VAR_12 = 0; VAR_12 < VAR_16; VAR_12++)
  VAR_18[VAR_12] = 0;
 for (VAR_12 = 0; VAR_12 < VAR_11->input_size; VAR_12++)
  if (VAR_11->inputs[VAR_12] >= 0)
   VAR_17[VAR_12 >> 6] |= ((uint64_t)1 << (VAR_12 & 63));
 for (VAR_12 = 0; VAR_12 < VAR_11->output_size; VAR_12++)
  if (VAR_11->outputs[VAR_12] >= 0)
   VAR_18[VAR_12 >> 6] |= ((uint64_t)1 << (VAR_12 & 63));

 FUNC_0(FUNC_4(VAR_11->cmd, VAR_11->input_size, VAR_11->output_size, VAR_17, VAR_15, VAR_18, VAR_16));
 int VAR_19;
 do {
  VAR_19 = 0;

  for (VAR_12 = 0; VAR_12 < VAR_11->output_size; VAR_12++)
  {
   const int VAR_20 = VAR_11->outputs[VAR_12];

   if (VAR_20 >= 0 && (VAR_10[VAR_20 >> 5] & (1u << (VAR_20 & 0x1f))) &&
    (VAR_18[VAR_12 >> 6] & ((uint64_t)1 << (VAR_12 & 63))))
   {
    VAR_18[VAR_12 >> 6] &= ~((uint64_t)1 << (VAR_12 & 63));
    if (FUNC_4(VAR_11->cmd, VAR_11->input_size, VAR_11->output_size, VAR_17, VAR_15, VAR_18, VAR_16))
     VAR_19 = 1;
    else
     VAR_18[VAR_12 >> 6] |= ((uint64_t)1 << (VAR_12 & 63));
   }
  }

  for (VAR_12 = 0; VAR_12 < VAR_11->input_size; VAR_12++)
  {
   const int VAR_21 = VAR_11->inputs[VAR_12];

   if (VAR_21 >= 0 && (VAR_17[VAR_12 >> 6] & ((uint64_t)1 << (VAR_12 & 63))))
   {
    VAR_17[VAR_12 >> 6] &= ~((uint64_t)1 << (VAR_12 & 63));
    if (FUNC_4(VAR_11->cmd, VAR_11->input_size, VAR_11->output_size, VAR_17, VAR_15, VAR_18, VAR_16))
     VAR_19 = 1;
    else
     VAR_17[VAR_12 >> 6] |= ((uint64_t)1 << (VAR_12 & 63));
   }
  }
 } while (VAR_19);

 for (VAR_12 = 0; VAR_12 < VAR_11->input_size; VAR_12++)
  if (VAR_17[VAR_12 >> 6] & ((uint64_t)1 << (VAR_12 & 63)))
  {
   const int VAR_22 = VAR_11->inputs[VAR_12];
   if (VAR_22 >= 0 && !(VAR_7[VAR_22 >> 5] & (1u << (VAR_22 & 0x1f))))
   {
    FUNC_2(VAR_8, &VAR_22);
    VAR_7[VAR_22 >> 5] |= (1u << (VAR_22 & 0x1f));
   }
  } else {

   VAR_11->inputs[VAR_12] = VAR_4;
   FUNC_0(((ccv_nnc_graph_exec_symbol_info_t*)FUNC_1(VAR_5->graph->exec_symbol_info, VAR_6))->inputs == VAR_11->inputs);
  }
 for (VAR_12 = 0; VAR_12 < VAR_11->output_size; VAR_12++)
  if (VAR_18[VAR_12 >> 6] & ((uint64_t)1 << (VAR_12 & 63)))
  {
   const int VAR_23 = VAR_11->outputs[VAR_12];
   if (VAR_23 >= 0 && !(VAR_7[VAR_23 >> 5] & (1u << (VAR_23 & 0x1f))))
   {
    FUNC_2(VAR_8, &VAR_23);
    VAR_7[VAR_23 >> 5] |= (1u << (VAR_23 & 0x1f));
   }
  } else {

   VAR_11->outputs[VAR_12] = VAR_4;
   FUNC_0(((ccv_nnc_graph_exec_symbol_info_t*)FUNC_1(VAR_5->graph->exec_symbol_info, VAR_6))->outputs == VAR_11->outputs);
  }
}
