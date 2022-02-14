
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int offset; int size; } ;
struct TYPE_6__ {TYPE_1__ argument; } ;
struct TYPE_7__ {int flags; int* outputs; int output_size; int* inputs; int input_size; TYPE_2__ case_of; } ;
typedef TYPE_3__ ccv_nnc_graph_exec_symbol_info_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(const ccv_nnc_graph_exec_symbol_info_t* const VAR_1, int** const VAR_2, int** const VAR_3, int* const VAR_4, int* const VAR_5)
{
 int VAR_6;
 if (VAR_1->flags & VAR_0)
 {
  *VAR_2 = VAR_1->outputs;
  *VAR_4 = VAR_1->output_size;
  for (VAR_6 = 0; VAR_6 < VAR_1->case_of.argument.offset; VAR_6++)
   (*VAR_3)[VAR_6] = VAR_1->inputs[VAR_6];
  const int VAR_7 = VAR_1->case_of.argument.offset;
  const int VAR_8 = VAR_1->case_of.argument.size;

  for (VAR_6 = VAR_7 + VAR_8; VAR_6 < VAR_1->input_size; VAR_6++)
   (*VAR_3)[VAR_6 - VAR_8] = VAR_1->inputs[VAR_6];
  *VAR_5 = VAR_1->input_size - VAR_1->case_of.argument.size;
 } else {
  *VAR_2 = VAR_1->outputs;
  *VAR_4 = VAR_1->output_size;
  *VAR_3 = VAR_1->inputs;
  *VAR_5 = VAR_1->input_size;
 }
}
