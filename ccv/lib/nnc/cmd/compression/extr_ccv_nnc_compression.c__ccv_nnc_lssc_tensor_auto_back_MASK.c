
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ datatype; int* dim; } ;
typedef TYPE_1__ ccv_nnc_tensor_param_t ;
typedef int ccv_nnc_hint_t ;
typedef int ccv_nnc_cmd_param_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__ const,int const) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static void FUNC_3(const ccv_nnc_cmd_param_t VAR_2, const ccv_nnc_tensor_param_t* VAR_3, const int VAR_4, const ccv_nnc_hint_t VAR_5, ccv_nnc_tensor_param_t* VAR_6, const int VAR_7)
{
 int VAR_8, VAR_9;
 FUNC_0(VAR_7 <= VAR_4);
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
 {
  FUNC_0(VAR_3[VAR_8].datatype == VAR_0);
  const int VAR_10 = FUNC_2(VAR_3[VAR_8].dim);
  const int VAR_11 = FUNC_1(VAR_3[VAR_8], VAR_10);
  VAR_6[VAR_8] = VAR_3[VAR_8];
  for (VAR_9 = 0; VAR_9 < VAR_1 - 1; VAR_9++)
   VAR_6[VAR_8].dim[VAR_9 + VAR_11] = VAR_3[VAR_8].dim[VAR_9 + VAR_11] * 4;
  FUNC_0(VAR_6[VAR_8].dim[VAR_1 - 1 + VAR_11] % 4 == 0);
 }
}
