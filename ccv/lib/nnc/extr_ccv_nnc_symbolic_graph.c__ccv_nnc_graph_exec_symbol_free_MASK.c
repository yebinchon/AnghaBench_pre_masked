
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ inputs; } ;
struct TYPE_5__ {int flags; scalar_t__ output_size; scalar_t__ outputs; scalar_t__ input_size; scalar_t__ inputs; int * outgoings; scalar_t__ _heap_graph_ref; scalar_t__ name; TYPE_1__ p_while; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_symbol_info_t ;
typedef int ccv_array_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(ccv_nnc_graph_exec_symbol_info_t* const VAR_1, const int VAR_2)
{
 if (VAR_1->name)
  FUNC_0(VAR_1->name);
 if (VAR_1->_heap_graph_ref)
  FUNC_0(VAR_1->_heap_graph_ref);
 ccv_array_t* VAR_3 = VAR_1->outgoings;
 if (VAR_3)
  FUNC_1(VAR_3);

 if (VAR_1->inputs)
  FUNC_0(VAR_1->inputs);
 if (VAR_1->flags & VAR_0)
  if (VAR_1->p_while.inputs)
   FUNC_0(VAR_1->p_while.inputs);
 if (VAR_2)
 {
  VAR_1->name = 0;
  VAR_1->_heap_graph_ref = 0;
  VAR_1->outgoings = 0;
  VAR_1->inputs = 0;
  VAR_1->input_size = 0;
  VAR_1->outputs = 0;
  VAR_1->output_size = 0;
 }
}
