
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int tensor_symbol_select_qs ;
typedef int tensor_bind_select_qs ;
typedef int tensor_bind_count_qs ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef int graph_select_qs ;
typedef int exec_symbol_select_qs ;
struct TYPE_17__ {void* type; int dim; void* datatype; void* format; } ;
typedef TYPE_3__ ccv_nnc_tensor_param_t ;
struct TYPE_16__ {int * graph; void* d; } ;
struct TYPE_18__ {TYPE_6__* tensor; TYPE_2__ symbol; } ;
typedef TYPE_4__ ccv_nnc_tensor_bind_t ;
typedef int ccv_nnc_symbolic_graph_t ;
struct TYPE_19__ {int const rnum; } ;
typedef TYPE_5__ ccv_array_t ;
struct TYPE_15__ {int u8; } ;
struct TYPE_20__ {TYPE_1__ data; } ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int const,int *,int *,int *,int * const) ;
 int FUNC_3 (TYPE_5__* const,int *) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_5__* const) ;
 scalar_t__ FUNC_7 (TYPE_5__* const,int const) ;
 TYPE_5__* FUNC_8 (int,int,int ) ;
 int FUNC_9 (TYPE_5__* const,int * const*) ;
 int FUNC_10 (size_t,int ) ;
 int * FUNC_11 () ;
 size_t FUNC_12 (TYPE_3__) ;
 TYPE_6__* FUNC_13 (int ,TYPE_3__,int ) ;
 int FUNC_14 (int ,void*,void const* const,int ,int ) ;
 int FUNC_15 (int ,void const* const,int ) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (int *) ;
 void* FUNC_18 (int *,int) ;
 int FUNC_19 (int *,int) ;
 void* FUNC_20 (int *,int) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (char const* const,int **) ;
 scalar_t__ FUNC_23 (int *,char const*,int,int **,int ) ;
 scalar_t__ FUNC_24 (int *) ;

void FUNC_25(const char* const VAR_5, ccv_nnc_symbolic_graph_t** const VAR_6, ccv_nnc_tensor_bind_t** const VAR_7, int* const VAR_8)
{
 sqlite3* VAR_9 = 0;
 if (VAR_3 != FUNC_22(VAR_5, &VAR_9))
  return;
 ccv_array_t* const VAR_10 = FUNC_8(sizeof(ccv_nnc_symbolic_graph_t*), 1, 0);
 const char VAR_11[] =
  "SELECT graph, tensor_symbol_size, exec_symbol_size, sources, destinations, sub_graphs, pair, p, p_idx, "
  "exec_idx, breakpoint_size, breakpoints, backward_tensor_symbol_size, "
  "backward_tensor_symbol_idx, backward_exec_symbol_size, backward_exec_symbol_idx, "
  "parallel_count, parallel_tensor_symbol_size, parallel_tensor_symbol_idx, "
  "parallel_exec_symbol_size, parallel_exec_symbol_idx FROM graph ORDER BY graph";
 sqlite3_stmt* VAR_12 = 0;
 FUNC_1(VAR_3 == FUNC_23(VAR_9, VAR_11, sizeof(VAR_11), &VAR_12, 0));
 sqlite3_stmt* VAR_13 = 0;
 const char VAR_14[] =
  "SELECT id, assign_ref, r_assign_ref, bypass_ref, r_bypass_ref, p_ref, alias_ref, pair_ref, flags, ofs, inc, "
  "s_ref, name, type, format, datatype, dim FROM tensor_symbol WHERE graph=$graph ORDER BY id";
 FUNC_1(VAR_3 == FUNC_23(VAR_9, VAR_14, sizeof(VAR_14), &VAR_13, 0));
 const char VAR_15[] =
  "SELECT id, input_size, output_size, graph_ref_size, flags, pair_ref, inputs, outputs, outgoings, "
  "name, cmd_cmd, cmd_backend, cmd_algorithm, cmd_info, hint, graph_ref, case_of_expr, case_of_flags, "
  "case_of_argument_offset, case_of_argument_size, p_while_expr, p_while_input_size, p_while_inputs "
  "FROM graph_exec_symbol WHERE graph=$graph ORDER BY id";
 sqlite3_stmt* VAR_16 = 0;
 FUNC_1(VAR_3 == FUNC_23(VAR_9, VAR_15, sizeof(VAR_15), &VAR_16, 0));
 while (VAR_4 == FUNC_24(VAR_12))
 {
  ccv_nnc_symbolic_graph_t* const VAR_17 = FUNC_11();
  const int VAR_18 = FUNC_20(VAR_12, 0);
  FUNC_4(VAR_18 == VAR_10->rnum);
  FUNC_9(VAR_10, &VAR_17);
  FUNC_2(VAR_18, VAR_12, VAR_13, VAR_16, VAR_17);
 }
 int VAR_19;
 for (VAR_19 = 0; VAR_19 < VAR_10->rnum; VAR_19++)
  FUNC_3(VAR_10, *(ccv_nnc_symbolic_graph_t**)FUNC_7(VAR_10, VAR_19));
 *VAR_6 = (VAR_10->rnum > 0) ? *(ccv_nnc_symbolic_graph_t**)FUNC_7(VAR_10, 0) : 0;
 FUNC_4((VAR_8 && VAR_7) || (!VAR_8 && !VAR_7));
 if (VAR_8 && VAR_7)
 {
  const char VAR_20[] =
   "SELECT COUNT(*) FROM tensor_bind";
  sqlite3_stmt* VAR_21 = 0;
  FUNC_1(VAR_3 == FUNC_23(VAR_9, VAR_20, sizeof(VAR_20), &VAR_21, 0));
  FUNC_24(VAR_21);
  const int VAR_22 = *VAR_8 = FUNC_20(VAR_21, 0);
  FUNC_21(VAR_21);

  if (!VAR_22)
   *VAR_7 = 0;
  else {
   const char VAR_23[] =
    "SELECT id, graph, type, format, datatype, dim, data FROM tensor_bind";
   sqlite3_stmt* VAR_24 = 0;
   ccv_nnc_tensor_bind_t* const VAR_25 = *VAR_7 = (ccv_nnc_tensor_bind_t*)FUNC_5(sizeof(ccv_nnc_tensor_bind_t) * VAR_22);
   FUNC_1(VAR_3 == FUNC_23(VAR_9, VAR_23, sizeof(VAR_23), &VAR_24, 0));
   for (VAR_19 = 0; VAR_4 == FUNC_24(VAR_24); VAR_19++)
   {
    FUNC_4(VAR_19 < VAR_22);
    VAR_25[VAR_19].symbol.d = FUNC_20(VAR_24, 0);
    const int VAR_26 = FUNC_20(VAR_24, 1);
    FUNC_4(VAR_26 < VAR_10->rnum);
    VAR_25[VAR_19].symbol.graph = (VAR_26 >= 0) ? *(ccv_nnc_symbolic_graph_t**)FUNC_7(VAR_10, VAR_26) : 0;
    ccv_nnc_tensor_param_t VAR_27;
    VAR_27.type = FUNC_20(VAR_24, 2);
    VAR_27.format = FUNC_20(VAR_24, 3);
    VAR_27.datatype = FUNC_20(VAR_24, 4);
    const int* const VAR_28 = FUNC_18(VAR_24, 5);
    FUNC_16(VAR_27.dim, 0, sizeof(VAR_27.dim));
    if (VAR_28)
     FUNC_15(VAR_27.dim, VAR_28, FUNC_10(sizeof(VAR_27.dim), FUNC_19(VAR_24, 5)));
    const void* const VAR_29 = FUNC_18(VAR_24, 6);
    if (!VAR_29)
     VAR_25[VAR_19].tensor = 0;
    else {
     VAR_25[VAR_19].tensor = FUNC_13(0, VAR_27, 0);
     size_t VAR_30 = FUNC_12(VAR_27);






     FUNC_15(VAR_25[VAR_19].tensor->data.u8, VAR_29, FUNC_10(VAR_30, FUNC_19(VAR_24, 6)));

    }
   }
   for (; VAR_19 < VAR_22; VAR_19++)
   {
    VAR_25[VAR_19].symbol.d = VAR_0;
    VAR_25[VAR_19].symbol.graph = 0;
    VAR_25[VAR_19].tensor = 0;
   }
   FUNC_21(VAR_24);
  }
 }
 FUNC_6(VAR_10);
 FUNC_21(VAR_12);
 FUNC_21(VAR_13);
 FUNC_21(VAR_16);
 FUNC_17(VAR_9);
}
