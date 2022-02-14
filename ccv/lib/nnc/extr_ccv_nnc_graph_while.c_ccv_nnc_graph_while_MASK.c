
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int ccv_nnc_graph_tensor_wraps_ref_t ;
struct TYPE_14__ {int p_idx; int exec_idx; TYPE_9__* sub_graphs; struct TYPE_14__* p; TYPE_9__* tensor_wraps_refs; TYPE_9__* exec_info; } ;
typedef TYPE_1__ ccv_nnc_graph_t ;
struct TYPE_15__ {int d; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_t ;
struct TYPE_16__ {int graph_ref_size; int flags; } ;
typedef TYPE_3__ ccv_nnc_graph_exec_info_t ;
struct TYPE_17__ {int rnum; } ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 int* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 TYPE_1__* const* FUNC_3 (TYPE_9__*,int) ;
 void* FUNC_4 (int,int,int ) ;
 int FUNC_5 (TYPE_9__*,TYPE_1__* const*) ;
 int FUNC_6 (scalar_t__ const,int ,int ,int ) ;
 TYPE_2__ FUNC_7 (TYPE_1__* const,int ,int ,int ,int ,int ,int ) ;
 int VAR_3 ;

ccv_nnc_graph_exec_t FUNC_8(ccv_nnc_graph_t* const VAR_4, const uint32_t VAR_5, ccv_nnc_graph_t* const VAR_6)
{
 FUNC_2(VAR_5 == VAR_2 || VAR_5 == VAR_0);
 ccv_nnc_graph_exec_t VAR_7 = FUNC_7(VAR_4, FUNC_6(VAR_5, 0, FUNC_1(), 0), VAR_3, 0, 0, 0, 0);
 ccv_nnc_graph_exec_info_t* VAR_8 = (ccv_nnc_graph_exec_info_t*)FUNC_3(VAR_4->exec_info, VAR_7.d);
 VAR_8->flags |= VAR_1;
 if (!VAR_4->sub_graphs)
  VAR_4->sub_graphs = FUNC_4(sizeof(ccv_nnc_graph_t*), 1, 0);
 int VAR_9;
 if (VAR_6->tensor_wraps_refs)
 {

  if (!VAR_4->tensor_wraps_refs)
   VAR_4->tensor_wraps_refs = FUNC_4(sizeof(ccv_nnc_graph_tensor_wraps_ref_t), VAR_6->tensor_wraps_refs->rnum, 0);
  for (VAR_9 = 0; VAR_9 < VAR_6->tensor_wraps_refs->rnum; VAR_9++)
   FUNC_5(VAR_4->tensor_wraps_refs, FUNC_3(VAR_6->tensor_wraps_refs, VAR_9));
 }
 FUNC_5(VAR_4->sub_graphs, &VAR_6);
 VAR_6->p = VAR_4;
 VAR_6->p_idx = VAR_4->sub_graphs->rnum;
 VAR_6->exec_idx = VAR_7.d + 1;
 VAR_8->graph_ref_size = 1;
 FUNC_0(VAR_8)[0] = VAR_4->sub_graphs->rnum;
 return VAR_7;
}
