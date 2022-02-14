
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ graph_exec_arena; scalar_t__ tensor_arena; scalar_t__ accum; scalar_t__ gradients; } ;
struct TYPE_5__ {TYPE_1__ backward; } ;
typedef TYPE_2__ ccv_cnnp_compiled_data_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(ccv_cnnp_compiled_data_t* const VAR_0)
{
 if (VAR_0->backward.gradients)
  FUNC_0(VAR_0->backward.gradients);
 VAR_0->backward.gradients = 0;
 if (VAR_0->backward.accum)
  FUNC_2(VAR_0->backward.accum);
 VAR_0->backward.accum = 0;
 if (VAR_0->backward.tensor_arena)
  FUNC_3(VAR_0->backward.tensor_arena);
 VAR_0->backward.tensor_arena = 0;
 if (VAR_0->backward.graph_exec_arena)
  FUNC_1(VAR_0->backward.graph_exec_arena);
 VAR_0->backward.graph_exec_arena = 0;
}
