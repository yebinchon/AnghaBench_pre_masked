
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ccv_nnc_tensor_dot_recovery_t ;
struct TYPE_13__ {TYPE_3__ const* const exec_info; int streams; TYPE_3__* sub_graphs; } ;
typedef TYPE_1__ ccv_nnc_graph_t ;
struct TYPE_14__ {int flags; int graph_ref_size; TYPE_3__ const* const outgoings; } ;
typedef TYPE_2__ const ccv_nnc_graph_exec_info_t ;
struct TYPE_15__ {int rnum; } ;
typedef TYPE_3__ ccv_array_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int const* FUNC_0 (TYPE_2__ const* const) ;
 int FUNC_1 (TYPE_2__ const* const,int,int const,int const,int const,int *,int*) ;
 int FUNC_2 (TYPE_2__ const*,int,int ,int ,int const,int const,int *,int*) ;
 int FUNC_3 (TYPE_2__ const* const,int,int const,TYPE_1__ const* const,int const,int const,int *,int*) ;
 int FUNC_4 (TYPE_1__ const* const) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int*) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (TYPE_3__ const* const,int const) ;
 int FUNC_9 (int *,char*,int,int,...) ;
 int FUNC_10 (char*,int *) ;

__attribute__((used)) static void FUNC_11(const ccv_nnc_graph_exec_info_t* const VAR_2, const ccv_nnc_tensor_dot_recovery_t VAR_3, const ccv_array_t* const VAR_4, const int VAR_5, const int VAR_6, FILE* VAR_7, int* VAR_8, int* VAR_9)
{
 if (VAR_2->flags & VAR_1)
 {
  FUNC_9(VAR_7, "subgraph cluster%d {\nstyle=\"rounded\";\nnode%d [style=invisible];\n", *VAR_9, *VAR_9);
  const ccv_nnc_graph_t* const VAR_10 = *(ccv_nnc_graph_t**)FUNC_8(VAR_4, FUNC_0(VAR_2)[0] - 1);

  FUNC_3(VAR_2, *VAR_9, VAR_3, VAR_10, VAR_5, VAR_6 - 1 , VAR_7, VAR_8);
 } else if (VAR_2->flags & VAR_0) {
  FUNC_9(VAR_7, "subgraph cluster%d {\nstyle=\"rounded\";\nnode%d [style=invisible];\n", *VAR_9, *VAR_9);
  FUNC_1(VAR_2, *VAR_9, VAR_3, VAR_5, VAR_6 - 1 , VAR_7, VAR_8);
 }
 ++(*VAR_9);
 int VAR_11;
 for (VAR_11 = 0; VAR_11 < VAR_2->graph_ref_size; VAR_11++)
 {
  if (VAR_2->flags & VAR_0)
  {
   FUNC_9(VAR_7, "subgraph cluster%d {\nstyle=\"rounded\";\nnode%d [style=invisible];\nlabel=\"\"\n", *VAR_9, *VAR_9);
   ++(*VAR_9);
  }
  const ccv_nnc_graph_t* const VAR_12 = *(ccv_nnc_graph_t**)FUNC_8(VAR_4, FUNC_0(VAR_2)[VAR_11] - 1);
  ccv_nnc_tensor_dot_recovery_t VAR_13 = FUNC_4(VAR_12);
  int VAR_14, VAR_15;
  int VAR_16 = 0;
  int* VAR_17 = (int*)FUNC_7(sizeof(int) * VAR_12->exec_info->rnum);

  for (VAR_14 = 0; VAR_14 < VAR_12->exec_info->rnum; VAR_14++)
  {
   VAR_17[VAR_14] = *VAR_9;
   ccv_nnc_graph_exec_info_t* VAR_18 = (ccv_nnc_graph_exec_info_t*)FUNC_8(VAR_12->exec_info, VAR_14);
   if (FUNC_0(VAR_18)[0])
    FUNC_11(VAR_18, VAR_13, VAR_12->sub_graphs, VAR_5, VAR_6 + 1, VAR_7, &VAR_16, VAR_9);
   else {
    FUNC_2(VAR_18, *VAR_9, VAR_12->streams, VAR_13, VAR_5, VAR_6, VAR_7, &VAR_16);
    ++(*VAR_9);
   }
  }

  for (VAR_14 = 0; VAR_14 < VAR_12->exec_info->rnum; VAR_14++)
  {
   ccv_nnc_graph_exec_info_t* VAR_19 = (ccv_nnc_graph_exec_info_t*)FUNC_8(VAR_12->exec_info, VAR_14);
   if (VAR_19->outgoings)
    for (VAR_15 = 0; VAR_15 < VAR_19->outgoings->rnum; VAR_15++)
    {
     const int VAR_20 = *(int*)FUNC_8(VAR_19->outgoings, VAR_15);
     const ccv_nnc_graph_exec_info_t* const VAR_21 = (ccv_nnc_graph_exec_info_t*)FUNC_8(VAR_12->exec_info, VAR_20);

     if (FUNC_0(VAR_19)[0] && FUNC_0(VAR_21)[0])
      FUNC_9(VAR_7, "node%d -> node%d [ltail=cluster%d,lhead=cluster%d];\n", VAR_17[VAR_14], VAR_17[VAR_20], VAR_17[VAR_14], VAR_17[VAR_20]);
     else if (FUNC_0(VAR_19)[0] && !FUNC_0(VAR_21)[0])
      FUNC_9(VAR_7, "node%d -> node%d [ltail=cluster%d];\n", VAR_17[VAR_14], VAR_17[VAR_20], VAR_17[VAR_14]);
     else if (!FUNC_0(VAR_19)[0] && FUNC_0(VAR_21)[0])
      FUNC_9(VAR_7, "node%d -> node%d [lhead=cluster%d];\n", VAR_17[VAR_14], VAR_17[VAR_20], VAR_17[VAR_20]);
     else
      FUNC_9(VAR_7, "node%d -> node%d;\n", VAR_17[VAR_14], VAR_17[VAR_20]);
    }
  }
  FUNC_10("}\n", VAR_7);
  FUNC_5(VAR_13);
  FUNC_6(VAR_17);
 }

 if (VAR_2->flags & VAR_0)
  FUNC_10("}\n", VAR_7);
}
