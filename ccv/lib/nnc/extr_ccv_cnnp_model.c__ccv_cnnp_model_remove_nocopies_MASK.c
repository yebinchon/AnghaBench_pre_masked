
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ccv_nnc_tensor_t ;
struct TYPE_5__ {scalar_t__ d; } ;
typedef TYPE_1__ ccv_nnc_tensor_symbol_t ;
typedef int ccv_nnc_symbolic_graph_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 TYPE_1__ FUNC_2 (int const* const,TYPE_1__ const,int) ;

__attribute__((used)) static void FUNC_3(const ccv_nnc_symbolic_graph_t* const VAR_1, const ccv_nnc_tensor_symbol_t* const VAR_2, ccv_nnc_tensor_t** const VAR_3, const int VAR_4, const int VAR_5)
{
 FUNC_0(VAR_5 > 0);
 int VAR_6, VAR_7;
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
 {
  const ccv_nnc_tensor_symbol_t VAR_8 = VAR_2[VAR_6];
  for (VAR_7 = 1; VAR_7 < VAR_5; VAR_7++)
  {
   const ccv_nnc_tensor_symbol_t VAR_9 = FUNC_2(VAR_1, VAR_8, VAR_7);
   ccv_nnc_tensor_t* VAR_10 = VAR_3[VAR_6 + VAR_7 * VAR_4];
   if (VAR_10 && VAR_9.d == VAR_0)
   {
    FUNC_1(VAR_3[VAR_6 + VAR_7 * VAR_4]);
    VAR_3[VAR_6 + VAR_7 * VAR_4] = 0;
   }
  }
 }
}
