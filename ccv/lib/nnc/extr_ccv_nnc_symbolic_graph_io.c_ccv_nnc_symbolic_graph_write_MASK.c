
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int tensor_symbol_insert_qs ;
typedef int tensor_bind_insert_qs ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef int graph_insert_qs ;
typedef int exec_symbol_insert_qs ;
struct TYPE_23__ {void* u8; } ;
struct TYPE_30__ {int const type; int const format; int const datatype; void* dim; } ;
struct TYPE_25__ {TYPE_2__ data; TYPE_9__ info; } ;
typedef TYPE_4__ ccv_nnc_tensor_t ;
struct TYPE_22__ {int const type; int const format; int const datatype; void* dim; } ;
struct TYPE_26__ {TYPE_1__ info; } ;
typedef TYPE_5__ ccv_nnc_tensor_symbol_info_t ;
struct TYPE_24__ {int const d; int graph; } ;
struct TYPE_27__ {TYPE_3__ symbol; TYPE_4__* tensor; } ;
typedef TYPE_6__ ccv_nnc_tensor_bind_t ;
struct TYPE_28__ {TYPE_8__* const tensor_symbol_info; } ;
typedef TYPE_7__ ccv_nnc_symbolic_graph_t ;
struct TYPE_29__ {int rnum; } ;
typedef TYPE_8__ ccv_array_t ;


 int FUNC_0 (TYPE_4__ const* const) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int const) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,TYPE_8__* const) ;
 int FUNC_4 (TYPE_7__ const* const,TYPE_8__* const) ;
 int FUNC_5 (TYPE_7__*,TYPE_8__* const,int,int *,int *,int *,TYPE_8__* const) ;
 int FUNC_6 (int) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 (size_t const) ;
 void* FUNC_9 (void*,size_t const) ;
 int FUNC_10 (TYPE_8__* const) ;
 scalar_t__ FUNC_11 (TYPE_8__* const,int) ;
 TYPE_8__* FUNC_12 (int,int,int ) ;
 size_t FUNC_13 (TYPE_9__) ;
 int FUNC_14 (void*,int ,void*,int const,size_t const) ;
 int FUNC_15 (int *,int,void*,size_t const,int ) ;
 int FUNC_16 (int *,int,int const) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *,char const*,int ,int ,int ) ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (char const* const,int **) ;
 scalar_t__ FUNC_22 (int *,char const*,int,int **,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;

void FUNC_25(const ccv_nnc_symbolic_graph_t* const VAR_3, const ccv_nnc_tensor_bind_t* const VAR_4, const int VAR_5, const char* const VAR_6)
{
 sqlite3* VAR_7 = 0;
 if (VAR_2 != FUNC_21(VAR_6, &VAR_7))
  return;
 FUNC_2(VAR_2 == FUNC_19(VAR_7, "BEGIN", 0, 0, 0));
 const char VAR_8[] = "CREATE TABLE IF NOT EXISTS tensor_symbol "
  "(id INTEGER, graph INTEGER, assign_ref INTEGER, r_assign_ref INTEGER, "
  "bypass_ref INTEGER, r_bypass_ref INTEGER, p_ref INTEGER, alias_ref INTEGER, pair_ref INTEGER, "
  "flags INTEGER, ofs BLOB, inc BLOB, s_ref BLOB, name TEXT, type INTEGER, format INTEGER, "
  "datatype INTEGER, dim BLOB, PRIMARY KEY (id, graph))";
 FUNC_2(VAR_2 == FUNC_19(VAR_7, VAR_8, 0, 0, 0));
 const char VAR_9[] =
  "REPLACE INTO tensor_symbol "
  "(id, graph, assign_ref, r_assign_ref, bypass_ref, r_bypass_ref, p_ref, alias_ref, pair_ref, flags, "
  "ofs, inc, s_ref, name, type, format, datatype, dim) VALUES "
  "($id, $graph, $assign_ref, $r_assign_ref, $bypass_ref, $r_bypass_ref, $p_ref, $alias_ref, $pair_ref, "
  "$flags, $ofs, $inc, $s_ref, $name, $type, $format, $datatype, $dim)";
 sqlite3_stmt* VAR_10 = 0;
 FUNC_2(VAR_2 == FUNC_22(VAR_7, VAR_9, sizeof(VAR_9), &VAR_10, 0));

 const char VAR_11[] = "CREATE TABLE IF NOT EXISTS graph_exec_symbol "
  "(id INTEGER, graph INTEGER, input_size INTEGER, output_size INTEGER, graph_ref_size INTEGER, "
  "flags INTEGER, pair_ref INTEGER, inputs BLOB, outputs BLOB, outgoings BLOB, name TEXT, "
  "cmd_cmd INTEGER, cmd_backend INTEGER, cmd_algorithm INTEGER, cmd_info BLOB, hint BLOB, graph_ref BLOB, "
  "case_of_expr INTEGER, case_of_flags INTEGER, case_of_argument_offset INTEGER, case_of_argument_size INTEGER, "
  "p_while_expr INTEGER, p_while_input_size INTEGER, p_while_inputs BLOB, PRIMARY KEY (id, graph))";
 FUNC_2(VAR_2 == FUNC_19(VAR_7, VAR_11, 0, 0, 0));
 const char VAR_12[] =
  "REPLACE INTO graph_exec_symbol "
  "(id, graph, input_size, output_size, graph_ref_size, flags, pair_ref, inputs, outputs, outgoings, "
  "name, cmd_cmd, cmd_backend, cmd_algorithm, cmd_info, hint, graph_ref, case_of_expr, case_of_flags, "
  "case_of_argument_offset, case_of_argument_size, p_while_expr, p_while_input_size, p_while_inputs) "
  "VALUES ($id, $graph, $input_size, $output_size, $graph_ref_size, $flags, $pair_ref, $inputs, $outputs, "
  "$outgoings, $name, $cmd_cmd, $cmd_backend, $cmd_algorithm, $cmd_info, $hint, $graph_ref, $case_of_expr, "
  "$case_of_flags, $case_of_argument_offset, $case_of_argument_size, $p_while_expr, $p_while_input_size, "
  "$p_while_inputs)";
 sqlite3_stmt* VAR_13 = 0;
 FUNC_2(VAR_2 == FUNC_22(VAR_7, VAR_12, sizeof(VAR_12), &VAR_13, 0));

 const char VAR_14[] = "CREATE TABLE IF NOT EXISTS graph "
  "(graph INTEGER PRIMARY KEY, tensor_symbol_size INTEGER, exec_symbol_size INTEGER, sources BLOB, "
  "destinations BLOB, sub_graphs BLOB, pair INTEGER, p INTEGER, p_idx INTEGER, exec_idx INTEGER, "
  "breakpoint_size INTEGER, breakpoints BLOB, backward_tensor_symbol_size INTEGER, "
  "backward_tensor_symbol_idx BLOB, backward_exec_symbol_size INTEGER, backward_exec_symbol_idx BLOB, "
  "parallel_count INTEGER, parallel_tensor_symbol_size INTEGER, parallel_tensor_symbol_idx BLOB, "
  "parallel_exec_symbol_size INTEGER, parallel_exec_symbol_idx BLOB)";
 FUNC_2(VAR_2 == FUNC_19(VAR_7, VAR_14, 0, 0, 0));
 const char VAR_15[] =
  "REPLACE INTO graph "
  "(graph, tensor_symbol_size, exec_symbol_size, sources, destinations, sub_graphs, pair, p, p_idx, "
  "exec_idx, breakpoint_size, breakpoints, backward_tensor_symbol_size, "
  "backward_tensor_symbol_idx, backward_exec_symbol_size, backward_exec_symbol_idx, "
  "parallel_count, parallel_tensor_symbol_size, parallel_tensor_symbol_idx, "
  "parallel_exec_symbol_size, parallel_exec_symbol_idx) VALUES "
  "($graph, $tensor_symbol_size, $exec_symbol_size, $sources, $destinations, $sub_graphs, $pair, $p, $p_idx, "
  "$exec_idx, $breakpoint_size, $breakpoints, $backward_tensor_symbol_size, "
  "$backward_tensor_symbol_idx, $backward_exec_symbol_size, $backward_exec_symbol_idx, "
  "$parallel_count, $parallel_tensor_symbol_size, $parallel_tensor_symbol_idx, "
  "$parallel_exec_symbol_size, $parallel_exec_symbol_idx)";
 sqlite3_stmt* VAR_16 = 0;
 FUNC_2(VAR_2 == FUNC_22(VAR_7, VAR_15, sizeof(VAR_15), &VAR_16, 0));
 ccv_array_t* const VAR_17 = FUNC_12(sizeof(ccv_nnc_symbolic_graph_t*), 1, 0);
 FUNC_4(VAR_3, VAR_17);
 ccv_array_t* const VAR_18 = FUNC_12(sizeof(int), 1, 0);
 int VAR_19;
 for (VAR_19 = 0; VAR_19 < VAR_17->rnum; VAR_19++)
  FUNC_5(*(ccv_nnc_symbolic_graph_t**)FUNC_11(VAR_17, VAR_19), VAR_17, VAR_19,
   VAR_10, VAR_13, VAR_16, VAR_18);
 FUNC_10(VAR_18);
 FUNC_20(VAR_10);
 FUNC_20(VAR_13);
 FUNC_20(VAR_16);

 const char VAR_20[] = "CREATE TABLE IF NOT EXISTS tensor_bind "
  "(id INTEGER, graph INTEGER, type INTEGER, format INTEGER, datatype INTEGER, "
  "dim BLOB, data BLOB, PRIMARY KEY (id, graph))";
 FUNC_2(VAR_2 == FUNC_19(VAR_7, VAR_20, 0, 0, 0));

 FUNC_2(VAR_2 == FUNC_19(VAR_7, "DELETE FROM tensor_bind", 0, 0, 0));
 const char VAR_21[] =
  "REPLACE INTO tensor_bind "
  "(id, graph, type, format, datatype, dim, data) VALUES ("
  "$id, $graph, $type, $format, $datatype, $dim, $data)";
 sqlite3_stmt* VAR_22 = 0;
 FUNC_2(VAR_2 == FUNC_22(VAR_7, VAR_21, sizeof(VAR_21), &VAR_22, 0));




 for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19++)
 {
  const int VAR_23 = FUNC_3(VAR_4[VAR_19].symbol.graph, VAR_17);
  if (VAR_23 < 0)
   continue;
  FUNC_16(VAR_22, 1, VAR_4[VAR_19].symbol.d);
  FUNC_16(VAR_22, 2, VAR_23);
  if (VAR_4[VAR_19].tensor)
  {
   const ccv_nnc_tensor_t* const VAR_24 = VAR_4[VAR_19].tensor;
   FUNC_6(!FUNC_0(VAR_24));
   FUNC_16(VAR_22, 3, VAR_24->info.type);
   FUNC_16(VAR_22, 4, VAR_24->info.format);
   FUNC_16(VAR_22, 5, VAR_24->info.datatype);
   FUNC_15(VAR_22, 6, VAR_24->info.dim, sizeof(VAR_24->info.dim), 0);
   const size_t VAR_25 = FUNC_13(VAR_24->info);
   FUNC_15(VAR_22, 7, VAR_24->data.u8, VAR_25, 0);

  } else {
   FUNC_6(VAR_4[VAR_19].symbol.d >= 0);
   const ccv_nnc_tensor_symbol_info_t* const VAR_26 = (ccv_nnc_tensor_symbol_info_t*)FUNC_11(VAR_3->tensor_symbol_info, VAR_4[VAR_19].symbol.d);
   FUNC_16(VAR_22, 3, VAR_26->info.type);
   FUNC_16(VAR_22, 4, VAR_26->info.format);
   FUNC_16(VAR_22, 5, VAR_26->info.datatype);
   FUNC_15(VAR_22, 6, VAR_26->info.dim, sizeof(VAR_26->info.dim), 0);
  }
  FUNC_24(VAR_22);
  FUNC_23(VAR_22);
  FUNC_17(VAR_22);
 }
 FUNC_20(VAR_22);




 FUNC_10(VAR_17);
 FUNC_2(VAR_2 == FUNC_19(VAR_7, "COMMIT", 0, 0, 0));
 FUNC_18(VAR_7);
}
