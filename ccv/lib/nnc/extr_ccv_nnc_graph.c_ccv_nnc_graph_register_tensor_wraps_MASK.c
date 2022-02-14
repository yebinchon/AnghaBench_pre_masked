
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int const d; TYPE_2__* graph; } ;
typedef TYPE_1__ ccv_nnc_graph_tensor_wraps_ref_t ;
struct TYPE_9__ {struct TYPE_9__* p; TYPE_4__* tensor_wraps_refs; } ;
typedef TYPE_2__ ccv_nnc_graph_t ;
struct TYPE_10__ {int rnum; } ;


 scalar_t__ FUNC_0 (TYPE_4__*,int) ;
 TYPE_4__* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_1__ const*) ;

void FUNC_3(ccv_nnc_graph_t* VAR_0, const int VAR_1)
{
 ccv_nnc_graph_t* VAR_2 = VAR_0;
 const ccv_nnc_graph_tensor_wraps_ref_t VAR_3 = {
  .d = VAR_1,
  .graph = VAR_0,
 };
 do {
  if (!VAR_2->tensor_wraps_refs)
  {
   VAR_2->tensor_wraps_refs = FUNC_1(sizeof(ccv_nnc_graph_tensor_wraps_ref_t), 0, 0);
   FUNC_2(VAR_2->tensor_wraps_refs, &VAR_3);
  } else {
   int VAR_4;
   int VAR_5 = 0;
   for (VAR_4 = 0; !VAR_5 && VAR_4 < VAR_2->tensor_wraps_refs->rnum; VAR_4++)
   {
    ccv_nnc_graph_tensor_wraps_ref_t* VAR_6 = (ccv_nnc_graph_tensor_wraps_ref_t*)FUNC_0(VAR_2->tensor_wraps_refs, VAR_4);
    VAR_5 = (VAR_6->d == VAR_1 && VAR_6->graph == VAR_0);
   }
   if (!VAR_5)
    FUNC_2(VAR_2->tensor_wraps_refs, &VAR_3);
  }
  VAR_2 = VAR_2->p;
 } while (VAR_2);
}
