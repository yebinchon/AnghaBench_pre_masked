
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ccv_nnc_tensor_symbol_t ;
typedef int ccv_nnc_symbolic_graph_t ;
typedef int ccv_nnc_symbolic_graph_simplify_t ;
typedef int ccv_nnc_graph_exec_symbol_t ;






 int FUNC_0 (int * const,int const* const,int const) ;
 int FUNC_1 (int * const,int const* const,int const) ;
 int FUNC_2 (int * const,int const* const,int const) ;
 int FUNC_3 (int * const,int const* const,int const) ;
 int FUNC_4 (int * const) ;
 int FUNC_5 (int * const) ;
 int * FUNC_6 (int * const,int const* const,int const,int const* const,int const) ;

void FUNC_7(ccv_nnc_symbolic_graph_t* const VAR_0, const int* const VAR_1, const int VAR_2, const ccv_nnc_tensor_symbol_t* const VAR_3, const int VAR_4, const ccv_nnc_graph_exec_symbol_t* const VAR_5, const int VAR_6, const ccv_nnc_graph_exec_symbol_t* const VAR_7, const int VAR_8)
{
 ccv_nnc_symbolic_graph_simplify_t* const VAR_9 = FUNC_6(VAR_0, VAR_5, VAR_6, VAR_7, VAR_8);
 int VAR_10;
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
  switch (VAR_1[VAR_10])
  {
   case 131:
    FUNC_0(VAR_9, VAR_3, VAR_4);
    break;
   case 130:
    FUNC_1(VAR_9, VAR_3, VAR_4);
    break;
   case 129:
    FUNC_3(VAR_9, VAR_3, VAR_4);
    break;
   case 128:
    FUNC_2(VAR_9, VAR_3, VAR_4);
    break;
  }
 FUNC_4(VAR_9);
 FUNC_5(VAR_9);
}
