
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ccv_nnc_tensor_t ;
struct TYPE_10__ {TYPE_7__* exec_info; } ;
typedef TYPE_1__ ccv_nnc_graph_t ;
struct TYPE_11__ {scalar_t__ d; TYPE_1__* const graph; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_t ;
struct TYPE_12__ {int update_size; scalar_t__ tensor_wraps_ref; int ** updates; } ;
typedef TYPE_3__ ccv_nnc_graph_exec_info_t ;
struct TYPE_13__ {scalar_t__ rnum; } ;


 int FUNC_0 (int * const) ;
 int FUNC_1 (TYPE_3__* const,TYPE_1__* const) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int **,int) ;
 scalar_t__ FUNC_5 (TYPE_7__*,scalar_t__) ;
 int FUNC_6 (TYPE_1__* const,scalar_t__) ;

void FUNC_7(ccv_nnc_graph_t* const VAR_0, const ccv_nnc_graph_exec_t VAR_1, ccv_nnc_tensor_t* const VAR_2)
{
 FUNC_2(FUNC_0(VAR_2));
 FUNC_2(VAR_1.d < VAR_0->exec_info->rnum);
 FUNC_2(VAR_1.graph == VAR_0);
 ccv_nnc_graph_exec_info_t* const VAR_3 = (ccv_nnc_graph_exec_info_t*)FUNC_5(VAR_0->exec_info, VAR_1.d);
 const int VAR_4 = !VAR_3->tensor_wraps_ref;
 const int VAR_5 = VAR_3->update_size;
 ++VAR_3->update_size;
 if (VAR_3->updates)
  VAR_3->updates = (ccv_nnc_tensor_t**)FUNC_4(VAR_3->updates, sizeof(ccv_nnc_tensor_t*) * VAR_3->update_size);
 else
  VAR_3->updates = (ccv_nnc_tensor_t**)FUNC_3(sizeof(ccv_nnc_tensor_t*) * VAR_3->update_size);
 VAR_3->updates[VAR_5] = VAR_2;
 FUNC_1(VAR_3, VAR_0);
 if (VAR_4)
  FUNC_6(VAR_0, VAR_3->tensor_wraps_ref - 1);
}
