
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_9__ {int d; TYPE_3__* graph; } ;
typedef TYPE_1__ ccv_nnc_graph_tensor_wraps_ref_t ;
typedef int ccv_nnc_graph_tensor_wrap_t ;
struct TYPE_10__ {int size; int ** tensor_wraps; } ;
typedef TYPE_2__ ccv_nnc_graph_tensor_wrap_array_t ;
struct TYPE_11__ {TYPE_4__* tensor_wraps; TYPE_4__* tensor_wraps_refs; } ;
typedef TYPE_3__ ccv_nnc_graph_t ;
struct TYPE_12__ {int rnum; } ;


 int FUNC_0 (TYPE_3__ const* const,int const,int const,TYPE_3__ const* const) ;
 int FUNC_1 (TYPE_3__ const* const,int const,int const,int * const) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int) ;

__attribute__((used)) static void FUNC_3(const ccv_nnc_graph_t* const VAR_0, const int64_t VAR_1, const int64_t VAR_2)
{
 if (!VAR_0->tensor_wraps_refs)
  return;
 int VAR_3, VAR_4;
 for (VAR_3 = 0; VAR_3 < VAR_0->tensor_wraps_refs->rnum; VAR_3++)
 {
  const ccv_nnc_graph_tensor_wraps_ref_t* const VAR_5 = (const ccv_nnc_graph_tensor_wraps_ref_t*)FUNC_2(VAR_0->tensor_wraps_refs, VAR_3);
  const ccv_nnc_graph_t* const VAR_6 = VAR_5->graph;
  ccv_nnc_graph_tensor_wrap_array_t* const VAR_7 = *(ccv_nnc_graph_tensor_wrap_array_t**)FUNC_2(VAR_6->tensor_wraps, VAR_5->d);
  if (VAR_7)
   for (VAR_4 = 0; VAR_4 < VAR_7->size; VAR_4++)
   {
    ccv_nnc_graph_tensor_wrap_t* const VAR_8 = VAR_7->tensor_wraps[VAR_4];
    if (!VAR_8)
     continue;
    FUNC_1(VAR_0, VAR_1, VAR_2, VAR_8);
   }
 }
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_0);
}
