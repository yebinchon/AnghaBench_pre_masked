
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int d; TYPE_3__* const graph; } ;
typedef TYPE_1__ ccv_nnc_tensor_symbol_t ;
struct TYPE_19__ {int format; int datatype; int type; } ;
struct TYPE_16__ {TYPE_7__ info; } ;
typedef TYPE_2__ ccv_nnc_tensor_symbol_info_t ;
struct TYPE_17__ {int tensor_symbol_info; } ;
typedef TYPE_3__ ccv_nnc_symbolic_graph_t ;
struct TYPE_20__ {int backend; } ;
struct TYPE_18__ {int input_size; int output_size; int* inputs; int* outputs; TYPE_8__ cmd; } ;
typedef TYPE_4__ ccv_nnc_graph_exec_symbol_info_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__* const,TYPE_1__ const,int ) ;
 int* FUNC_2 (int) ;
 int* FUNC_3 (int*,int) ;
 scalar_t__ FUNC_4 (int ,int const) ;
 int FUNC_5 (TYPE_8__,int,int,int) ;
 scalar_t__ FUNC_6 (TYPE_7__) ;
 int FUNC_7 (TYPE_3__* const,TYPE_1__ const) ;

__attribute__((used)) static void FUNC_8(ccv_nnc_symbolic_graph_t* const VAR_1, ccv_nnc_graph_exec_symbol_info_t* const VAR_2, const ccv_nnc_tensor_symbol_t* const VAR_3, const int VAR_4, const ccv_nnc_tensor_symbol_t* const VAR_5, const int VAR_6)
{
 VAR_2->input_size = VAR_4;
 VAR_2->output_size = VAR_6;
 if (VAR_4 > 0 || VAR_6 > 0)
 {
  if (!VAR_2->inputs)
   VAR_2->inputs = FUNC_2(sizeof(int) * (VAR_4 + VAR_6));
  else
   VAR_2->inputs = FUNC_3(VAR_2->inputs, sizeof(int) * (VAR_4 + VAR_6));
  VAR_2->outputs = VAR_2->inputs + VAR_4;
 }
 int VAR_7;
 int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
 {
  const int VAR_12 = FUNC_7(VAR_1, VAR_3[VAR_7]);
  VAR_2->inputs[VAR_7] = VAR_12;
  if (VAR_12 >= 0)
  {
   const ccv_nnc_tensor_symbol_info_t* const VAR_13 = (ccv_nnc_tensor_symbol_info_t*)FUNC_4(VAR_1->tensor_symbol_info, VAR_12);
   VAR_11 = VAR_11 || FUNC_6(VAR_13->info);
   VAR_8 |= FUNC_0(VAR_13->info.type), VAR_9 |= VAR_13->info.format, VAR_10 |= VAR_13->info.datatype;
  }
 }
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
 {
  const int VAR_14 = (VAR_5[VAR_7].graph != VAR_1 && VAR_5[VAR_7].d >= 0) ? FUNC_1(VAR_1, VAR_5[VAR_7], VAR_0) : VAR_5[VAR_7].d;
  VAR_2->outputs[VAR_7] = VAR_14;
  if (VAR_14 >= 0)
  {
   const ccv_nnc_tensor_symbol_info_t* const VAR_15 = (ccv_nnc_tensor_symbol_info_t*)FUNC_4(VAR_1->tensor_symbol_info, VAR_14);
   VAR_11 = VAR_11 || FUNC_6(VAR_15->info);
   VAR_8 |= FUNC_0(VAR_15->info.type), VAR_9 |= VAR_15->info.format, VAR_10 |= VAR_15->info.datatype;
  }
 }

 if (!VAR_11)
  VAR_2->cmd.backend = FUNC_5(VAR_2->cmd, VAR_8, VAR_9, VAR_10);
}
