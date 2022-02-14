
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int const d; TYPE_2__* graph; } ;
typedef TYPE_1__ ccv_nnc_graph_tensor_wraps_ref_t ;
struct TYPE_8__ {struct TYPE_8__* p; TYPE_5__* tensor_wraps_refs; } ;
typedef TYPE_2__ ccv_nnc_graph_t ;
typedef int ccv_nnc_graph_exec_t ;
struct TYPE_9__ {int rnum; } ;


 scalar_t__ FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (TYPE_1__* const,TYPE_1__* const,int) ;

__attribute__((used)) static void FUNC_2(ccv_nnc_graph_t* VAR_0, const int VAR_1)
{
 ccv_nnc_graph_t* VAR_2 = VAR_0;
 do {
  int VAR_3;

  if (VAR_2->tensor_wraps_refs)
   for (VAR_3 = 0; VAR_3 < VAR_2->tensor_wraps_refs->rnum; VAR_3++)
   {
    ccv_nnc_graph_tensor_wraps_ref_t* const VAR_4 = (ccv_nnc_graph_tensor_wraps_ref_t*)FUNC_0(VAR_2->tensor_wraps_refs, VAR_3);
    if (VAR_4->d == VAR_1 && VAR_4->graph == VAR_0)
    {
     --VAR_2->tensor_wraps_refs->rnum;
     if (VAR_3 < VAR_2->tensor_wraps_refs->rnum)
      FUNC_1(VAR_4, VAR_4 + 1, sizeof(ccv_nnc_graph_exec_t) * (VAR_2->tensor_wraps_refs->rnum - VAR_3));
     break;
    }
   }
  VAR_2 = VAR_2->p;
 } while (VAR_2);
}
