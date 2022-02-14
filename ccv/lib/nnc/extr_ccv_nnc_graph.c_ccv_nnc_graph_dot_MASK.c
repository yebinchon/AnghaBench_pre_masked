
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ccv_nnc_tensor_dot_recovery_t ;
struct TYPE_9__ {TYPE_4__* exec_info; int streams; int sub_graphs; } ;
typedef TYPE_1__ ccv_nnc_graph_t ;
struct TYPE_10__ {TYPE_4__* outgoings; } ;
typedef TYPE_2__ const ccv_nnc_graph_exec_info_t ;
struct TYPE_11__ {int rnum; } ;
typedef int FILE ;


 scalar_t__* FUNC_0 (TYPE_2__ const* const) ;
 int FUNC_1 (TYPE_2__ const*,int,int ,int ,int const,int ,int *,int*) ;
 int FUNC_2 (TYPE_2__ const*,int ,int ,int const,int,int *,int*,int*) ;
 int FUNC_3 (TYPE_1__ const* const) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int const) ;
 int FUNC_8 (int *,char*,int,int,...) ;
 int FUNC_9 (char*,int *) ;

void FUNC_10(const ccv_nnc_graph_t* const VAR_0, const int VAR_1, FILE* VAR_2)
{
 FUNC_9("digraph G {\ncompound=true;\n", VAR_2);
 ccv_nnc_tensor_dot_recovery_t VAR_3 = FUNC_3(VAR_0);
 int VAR_4, VAR_5;
 int VAR_6 = 0, VAR_7 = 0;
 int* VAR_8 = (int*)FUNC_6(sizeof(int) * VAR_0->exec_info->rnum);

 for (VAR_4 = 0; VAR_4 < VAR_0->exec_info->rnum; VAR_4++)
 {
  VAR_8[VAR_4] = VAR_7;
  ccv_nnc_graph_exec_info_t* VAR_9 = (ccv_nnc_graph_exec_info_t*)FUNC_7(VAR_0->exec_info, VAR_4);
  if (FUNC_0(VAR_9)[0])
   FUNC_2(VAR_9, VAR_3, VAR_0->sub_graphs, VAR_1, 1, VAR_2, &VAR_6, &VAR_7);
  else {
   FUNC_1(VAR_9, VAR_7, VAR_0->streams, VAR_3, VAR_1, 0, VAR_2, &VAR_6);
   ++VAR_7;
  }
 }

 for (VAR_4 = 0; VAR_4 < VAR_0->exec_info->rnum; VAR_4++)
 {
  ccv_nnc_graph_exec_info_t* VAR_10 = (ccv_nnc_graph_exec_info_t*)FUNC_7(VAR_0->exec_info, VAR_4);
  if (VAR_10->outgoings)
   for (VAR_5 = 0; VAR_5 < VAR_10->outgoings->rnum; VAR_5++)
   {
    const int VAR_11 = *(int*)FUNC_7(VAR_10->outgoings, VAR_5);
    const ccv_nnc_graph_exec_info_t* const VAR_12 = (ccv_nnc_graph_exec_info_t*)FUNC_7(VAR_0->exec_info, VAR_11);

    if (FUNC_0(VAR_10)[0] && FUNC_0(VAR_12)[0])
     FUNC_8(VAR_2, "node%d -> node%d [ltail=cluster%d,lhead=cluster%d];\n", VAR_8[VAR_4], VAR_8[VAR_11], VAR_8[VAR_4], VAR_8[VAR_11]);
    else if (FUNC_0(VAR_10)[0] && !FUNC_0(VAR_12)[0])
     FUNC_8(VAR_2, "node%d -> node%d [ltail=cluster%d];\n", VAR_8[VAR_4], VAR_8[VAR_11], VAR_8[VAR_4]);
    else if (!FUNC_0(VAR_10)[0] && FUNC_0(VAR_12)[0])
     FUNC_8(VAR_2, "node%d -> node%d [lhead=cluster%d];\n", VAR_8[VAR_4], VAR_8[VAR_11], VAR_8[VAR_11]);
    else
     FUNC_8(VAR_2, "node%d -> node%d;\n", VAR_8[VAR_4], VAR_8[VAR_11]);
   }
 }
 FUNC_9("}\n", VAR_2);
 FUNC_4(VAR_3);
 FUNC_5(VAR_8);
}
