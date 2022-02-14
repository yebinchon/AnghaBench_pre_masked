
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_13__ {scalar_t__ p_idx; struct TYPE_13__* p; scalar_t__ exec_idx; TYPE_9__* sub_graphs; int exec_symbol_info; } ;
typedef TYPE_1__ ccv_nnc_symbolic_graph_t ;
struct TYPE_14__ {scalar_t__ d; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_symbol_t ;
struct TYPE_15__ {int graph_ref_size; int flags; } ;
typedef TYPE_3__ ccv_nnc_graph_exec_symbol_info_t ;
struct TYPE_16__ {scalar_t__ rnum; } ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 TYPE_9__* FUNC_4 (int,int,int ) ;
 int FUNC_5 (TYPE_9__*,TYPE_1__* const*) ;
 int FUNC_6 (scalar_t__ const,int ,int ,int ) ;
 TYPE_2__ FUNC_7 (TYPE_1__* const,int ,int ,int ,int ,int ,char const* const) ;

ccv_nnc_graph_exec_symbol_t FUNC_8(ccv_nnc_symbolic_graph_t* const VAR_3, const uint32_t VAR_4, ccv_nnc_symbolic_graph_t* const VAR_5, const char* const VAR_6)
{
 FUNC_2(VAR_4 == VAR_2 || VAR_4 == VAR_0);
 FUNC_2(VAR_5->p == 0);
 FUNC_2(VAR_5->p_idx == 0);

 ccv_nnc_graph_exec_symbol_t VAR_7 = FUNC_7(VAR_3, FUNC_6(VAR_4, 0, FUNC_1(), 0), 0, 0, 0, 0, VAR_6);

 if (!VAR_3->sub_graphs)
  VAR_3->sub_graphs = FUNC_4(sizeof(ccv_nnc_symbolic_graph_t*), 1, 0);
 FUNC_5(VAR_3->sub_graphs, &VAR_5);
 ccv_nnc_graph_exec_symbol_info_t* VAR_8 = (ccv_nnc_graph_exec_symbol_info_t*)FUNC_3(VAR_3->exec_symbol_info, VAR_7.d);
 VAR_8->flags |= VAR_1;
 VAR_8->graph_ref_size = 1;



 FUNC_0(VAR_8)[0] = VAR_3->sub_graphs->rnum;
 VAR_5->p_idx = VAR_3->sub_graphs->rnum;
 VAR_5->exec_idx = VAR_7.d + 1;
 VAR_5->p = VAR_3;
 return VAR_7;
}
