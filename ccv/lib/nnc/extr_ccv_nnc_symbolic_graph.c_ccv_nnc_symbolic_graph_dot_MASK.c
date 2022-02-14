
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* exec_symbol_info; int tensor_symbol_info; int sub_graphs; } ;
typedef TYPE_1__ ccv_nnc_symbolic_graph_t ;
struct TYPE_8__ {scalar_t__ graph_ref_size; TYPE_4__* outgoings; int flags; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_symbol_info_t ;
struct TYPE_9__ {int rnum; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__ const* const,int,int ,int const,int *) ;
 int FUNC_2 (TYPE_2__ const* const,int ,int ,int const,int *,int*) ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_4__*,int const) ;
 int FUNC_6 (int *,char*,int,int,...) ;
 int FUNC_7 (char*,int *) ;

void FUNC_8(const ccv_nnc_symbolic_graph_t* const VAR_0, const int VAR_1, FILE* VAR_2)
{
 FUNC_7("digraph G {\ncompound=true;\n", VAR_2);
 int VAR_3, VAR_4;
 int VAR_5 = 0;
 int* VAR_6 = (int*)FUNC_4(sizeof(int) * VAR_0->exec_symbol_info->rnum);

 for (VAR_3 = 0; VAR_3 < VAR_0->exec_symbol_info->rnum; VAR_3++)
 {
  VAR_6[VAR_3] = VAR_5;
  const ccv_nnc_graph_exec_symbol_info_t* const VAR_7 = (ccv_nnc_graph_exec_symbol_info_t*)FUNC_5(VAR_0->exec_symbol_info, VAR_3);

  if (FUNC_0(VAR_7->flags))
   continue;
  if (VAR_7->graph_ref_size)
   FUNC_2(VAR_7, VAR_0->tensor_symbol_info, VAR_0->sub_graphs, VAR_1, VAR_2, &VAR_5);
  else {
   FUNC_1(VAR_7, VAR_5, VAR_0->tensor_symbol_info, VAR_1, VAR_2);
   ++VAR_5;
  }
 }

 for (VAR_3 = 0; VAR_3 < VAR_0->exec_symbol_info->rnum; VAR_3++)
 {
  const ccv_nnc_graph_exec_symbol_info_t* VAR_8 = (ccv_nnc_graph_exec_symbol_info_t*)FUNC_5(VAR_0->exec_symbol_info, VAR_3);

  if (FUNC_0(VAR_8->flags))
   continue;
  if (VAR_8->outgoings)
   for (VAR_4 = 0; VAR_4 < VAR_8->outgoings->rnum; VAR_4++)
   {
    const int VAR_9 = *(int*)FUNC_5(VAR_8->outgoings, VAR_4);
    const ccv_nnc_graph_exec_symbol_info_t* const VAR_10 = (ccv_nnc_graph_exec_symbol_info_t*)FUNC_5(VAR_0->exec_symbol_info, VAR_9);

    if (VAR_8->graph_ref_size && VAR_10->graph_ref_size)
     FUNC_6(VAR_2, "node%d -> node%d [ltail=cluster%d,lhead=cluster%d];\n", VAR_6[VAR_3], VAR_6[VAR_9], VAR_6[VAR_3], VAR_6[VAR_9]);
    else if (VAR_8->graph_ref_size && !VAR_10->graph_ref_size)
     FUNC_6(VAR_2, "node%d -> node%d [ltail=cluster%d];\n", VAR_6[VAR_3], VAR_6[VAR_9], VAR_6[VAR_3]);
    else if (!VAR_8->graph_ref_size && VAR_10->graph_ref_size)
     FUNC_6(VAR_2, "node%d -> node%d [lhead=cluster%d];\n", VAR_6[VAR_3], VAR_6[VAR_9], VAR_6[VAR_9]);
    else
     FUNC_6(VAR_2, "node%d -> node%d;\n", VAR_6[VAR_3], VAR_6[VAR_9]);
   }
 }
 FUNC_7("}\n", VAR_2);
 FUNC_3(VAR_6);
}
