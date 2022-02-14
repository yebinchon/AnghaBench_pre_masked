
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {TYPE_3__ const* const exec_symbol_info; TYPE_3__* tensor_symbol_info; TYPE_3__* sub_graphs; } ;
typedef TYPE_1__ ccv_nnc_symbolic_graph_t ;
struct TYPE_17__ {int flags; int graph_ref_size; TYPE_3__ const* const outgoings; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_symbol_info_t ;
struct TYPE_18__ {int rnum; } ;
typedef TYPE_3__ ccv_array_t ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int const* FUNC_1 (TYPE_2__ const* const) ;
 int FUNC_2 (TYPE_2__ const* const,int,TYPE_3__ const* const,int const,int *) ;
 int FUNC_3 (TYPE_2__ const* const,int,TYPE_3__*,int const,int *) ;
 int FUNC_4 (TYPE_2__ const* const,int,TYPE_3__ const* const,TYPE_1__ const* const,int const,int *) ;
 int FUNC_5 (int*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (TYPE_3__ const* const,int const) ;
 int FUNC_8 (int *,char*,int,int,...) ;
 int FUNC_9 (char*,int *) ;

__attribute__((used)) static void FUNC_10(const ccv_nnc_graph_exec_symbol_info_t* const VAR_2, const ccv_array_t* const VAR_3, const ccv_array_t* const VAR_4, const int VAR_5, FILE* VAR_6, int* VAR_7)
{
 int VAR_8, VAR_9, VAR_10;

 if (VAR_2->flags & VAR_1)
 {
  FUNC_8(VAR_6, "subgraph cluster%d {\nstyle=\"rounded\";\nnode%d [style=invisible];\nlabel=<", *VAR_7, *VAR_7);
  const ccv_nnc_symbolic_graph_t* const VAR_11 = *(ccv_nnc_symbolic_graph_t**)FUNC_7(VAR_4, FUNC_1(VAR_2)[0] - 1);
  FUNC_4(VAR_2, *VAR_7, VAR_3, VAR_11, VAR_5, VAR_6);
 } else if (VAR_2->flags & VAR_0) {
  FUNC_8(VAR_6, "subgraph cluster%d {\nstyle=\"rounded\";\nnode%d [style=invisible];\nlabel=<", *VAR_7, *VAR_7);
  FUNC_2(VAR_2, *VAR_7, VAR_3, VAR_5, VAR_6);
 }
 FUNC_9(">;\n", VAR_6);
 ++(*VAR_7);
 for (VAR_10 = 0; VAR_10 < VAR_2->graph_ref_size; VAR_10++)
 {
  if (VAR_2->flags & VAR_0)
  {
   FUNC_8(VAR_6, "subgraph cluster%d {\nstyle=\"rounded\";\nnode%d [style=invisible];\nlabel=\"\"\n", *VAR_7, *VAR_7);
   ++(*VAR_7);
  }
  const ccv_nnc_symbolic_graph_t* const VAR_12 = *(ccv_nnc_symbolic_graph_t**)FUNC_7(VAR_4, FUNC_1(VAR_2)[VAR_10] - 1);
  int* VAR_13 = (int*)FUNC_6(sizeof(int) * VAR_12->exec_symbol_info->rnum);
  for (VAR_8 = 0; VAR_8 < VAR_12->exec_symbol_info->rnum; VAR_8++)
  {
   VAR_13[VAR_8] = *VAR_7;
   const ccv_nnc_graph_exec_symbol_info_t* const VAR_14 = (ccv_nnc_graph_exec_symbol_info_t*)FUNC_7(VAR_12->exec_symbol_info, VAR_8);

   if (FUNC_0(VAR_14->flags))
    continue;
   if (VAR_14->graph_ref_size)
    FUNC_10(VAR_14, VAR_12->tensor_symbol_info, VAR_12->sub_graphs, VAR_5, VAR_6, VAR_7);
   else {
    FUNC_3(VAR_14, *VAR_7, VAR_12->tensor_symbol_info, VAR_5, VAR_6);
    ++(*VAR_7);
   }
  }

  for (VAR_8 = 0; VAR_8 < VAR_12->exec_symbol_info->rnum; VAR_8++)
  {
   const ccv_nnc_graph_exec_symbol_info_t* VAR_15 = (ccv_nnc_graph_exec_symbol_info_t*)FUNC_7(VAR_12->exec_symbol_info, VAR_8);

   if (FUNC_0(VAR_15->flags))
    continue;
   if (VAR_15->outgoings)
    for (VAR_9 = 0; VAR_9 < VAR_15->outgoings->rnum; VAR_9++)
    {
     const int VAR_16 = *(int*)FUNC_7(VAR_15->outgoings, VAR_9);
     const ccv_nnc_graph_exec_symbol_info_t* const VAR_17 = (ccv_nnc_graph_exec_symbol_info_t*)FUNC_7(VAR_12->exec_symbol_info, VAR_16);

     if (FUNC_1(VAR_15)[0] && FUNC_1(VAR_17)[0])
      FUNC_8(VAR_6, "node%d -> node%d [ltail=cluster%d,lhead=cluster%d];\n", VAR_13[VAR_8], VAR_13[VAR_16], VAR_13[VAR_8], VAR_13[VAR_16]);
     else if (FUNC_1(VAR_15)[0] && !FUNC_1(VAR_17)[0])
      FUNC_8(VAR_6, "node%d -> node%d [ltail=cluster%d];\n", VAR_13[VAR_8], VAR_13[VAR_16], VAR_13[VAR_8]);
     else if (!FUNC_1(VAR_15)[0] && FUNC_1(VAR_17)[0])
      FUNC_8(VAR_6, "node%d -> node%d [lhead=cluster%d];\n", VAR_13[VAR_8], VAR_13[VAR_16], VAR_13[VAR_16]);
     else
      FUNC_8(VAR_6, "node%d -> node%d;\n", VAR_13[VAR_8], VAR_13[VAR_16]);
    }
  }
  FUNC_9("}\n", VAR_6);
  FUNC_5(VAR_13);
 }

 if (VAR_2->flags & VAR_0)
  FUNC_9("}\n", VAR_6);
}
