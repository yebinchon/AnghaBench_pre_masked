
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ graph_exec_arena; scalar_t__ tensor_arena; scalar_t__ graph; } ;
typedef TYPE_1__ ccv_cnnp_compiled_data_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(ccv_cnnp_compiled_data_t* const VAR_0)
{
 if (VAR_0->graph)
  FUNC_1(VAR_0->graph);
 VAR_0->graph = 0;
 if (VAR_0->tensor_arena)
  FUNC_2(VAR_0->tensor_arena);
 VAR_0->tensor_arena = 0;
 if (VAR_0->graph_exec_arena)
  FUNC_0(VAR_0->graph_exec_arena);
 VAR_0->graph_exec_arena = 0;
}
