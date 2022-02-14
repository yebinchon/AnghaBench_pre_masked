
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tensor_view; scalar_t__ destinations; scalar_t__ sources; int index; } ;
typedef TYPE_1__ ccv_nnc_tensor_variable_graph_bind_t ;
typedef int ccv_nnc_tensor_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(ccv_nnc_tensor_variable_graph_bind_t* const VAR_1, const int VAR_2)
{
 VAR_1->index = VAR_0;
 if (VAR_1->sources)
  FUNC_2(VAR_1->sources);
 if (VAR_1->destinations)
  FUNC_2(VAR_1->destinations);
 if (VAR_1->tensor_view && !FUNC_1(VAR_1->tensor_view))
 {
  if (FUNC_0(VAR_1->tensor_view))
   FUNC_4(VAR_1->tensor_view);
  else
   FUNC_3((ccv_nnc_tensor_t*)VAR_1->tensor_view);
 }
 if (VAR_2)
 {
  VAR_1->sources = 0;
  VAR_1->destinations = 0;
  VAR_1->tensor_view = 0;
 }
}
