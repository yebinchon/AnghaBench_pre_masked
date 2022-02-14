
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* dim; int datatype; } ;
typedef TYPE_1__ ccv_nnc_tensor_param_t ;
typedef int ccv_nnc_hint_t ;
typedef int ccv_nnc_cmd_param_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static void FUNC_3(const ccv_nnc_cmd_param_t VAR_1, const ccv_nnc_tensor_param_t* const VAR_2, const int VAR_3, const ccv_nnc_hint_t VAR_4, ccv_nnc_tensor_param_t* const VAR_5, const int VAR_6)
{
 FUNC_1(VAR_3 == 1);
 FUNC_1(VAR_6 <= 2);
 VAR_5[0] = VAR_2[0];
 if (VAR_6 == 1)
  return;
 VAR_5[1] = VAR_2[0];
 int VAR_7;

 FUNC_2(VAR_5[1].dim, 0, sizeof(VAR_5[1].dim));
 const int VAR_8 = (int)FUNC_0(VAR_2[0].datatype);

 int VAR_9 = ((VAR_2[0].dim[0] + 127) >> 7);
 for (VAR_7 = 1; VAR_7 < VAR_0 && VAR_2[0].dim[VAR_7] > 0; VAR_7++)
  VAR_9 *= VAR_2[0].dim[VAR_7];
 FUNC_1((128 % VAR_8) == 0);
 VAR_5[1].dim[0] = 128 / VAR_8;
 VAR_5[1].dim[1] = VAR_9;
}
