
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int ccv_nnc_tensor_symbol_t ;
struct TYPE_16__ {int destination; int source; } ;
typedef TYPE_3__ ccv_nnc_tensor_symbol_map_t ;
struct TYPE_17__ {int exec_symbol_info; } ;
typedef TYPE_4__ ccv_nnc_symbolic_graph_t ;
struct TYPE_18__ {int d; } ;
typedef TYPE_5__ const ccv_nnc_graph_exec_symbol_t ;
struct TYPE_14__ {int offset; int size; } ;
struct TYPE_15__ {TYPE_1__ argument; } ;
struct TYPE_19__ {TYPE_2__ case_of; int flags; } ;
typedef TYPE_6__ ccv_nnc_graph_exec_symbol_info_t ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__ const,int ,int ,int ) ;
 TYPE_5__ const FUNC_4 (TYPE_4__* const,int ,int *,int const,int * const,int const,char const* const) ;
 int FUNC_5 (TYPE_4__* const,TYPE_3__ const* const,int const) ;

ccv_nnc_graph_exec_symbol_t FUNC_6(ccv_nnc_symbolic_graph_t* const VAR_3, const uint32_t VAR_4, const ccv_nnc_tensor_symbol_t* const VAR_5, const int VAR_6, const ccv_nnc_tensor_symbol_map_t* const VAR_7, const int VAR_8, const char* const VAR_9)
{
 FUNC_1(VAR_4 == VAR_2 || VAR_4 == VAR_0);

 FUNC_1(VAR_8 > 0);
 ccv_nnc_tensor_symbol_t VAR_10[VAR_8 * 2 + VAR_6];
 ccv_nnc_tensor_symbol_t* const VAR_11 = VAR_10 + (VAR_8 + VAR_6);
 int VAR_12;
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
  VAR_10[VAR_12] = VAR_7[VAR_12].source, VAR_11[VAR_12] = VAR_7[VAR_12].destination;
 for (VAR_12 = VAR_8; VAR_12 < VAR_8 + VAR_6; VAR_12++)
  VAR_10[VAR_12] = VAR_5[VAR_12 - VAR_8];

 const ccv_nnc_graph_exec_symbol_t VAR_13 = FUNC_4(VAR_3, FUNC_3(VAR_4, 0, FUNC_0(), 0), VAR_10, VAR_8 + VAR_6, VAR_11, VAR_8, VAR_9);
 FUNC_5(VAR_3, VAR_7, VAR_8);
 ccv_nnc_graph_exec_symbol_info_t* const VAR_14 = (ccv_nnc_graph_exec_symbol_info_t*)FUNC_2(VAR_3->exec_symbol_info, VAR_13.d);
 VAR_14->flags |= VAR_1;

 VAR_14->case_of.argument.offset = VAR_8;
 VAR_14->case_of.argument.size = VAR_6;
 return VAR_13;
}
