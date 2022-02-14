
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dim; } ;
typedef TYPE_1__ ccv_nnc_tensor_param_t ;
typedef int ccv_nnc_hint_t ;
typedef int ccv_nnc_cmd_param_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int const,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(const ccv_nnc_cmd_param_t VAR_0, const ccv_nnc_tensor_param_t* const VAR_1, const int VAR_2, const ccv_nnc_hint_t VAR_3, ccv_nnc_tensor_param_t* const VAR_4, const int VAR_5)
{
 FUNC_0(VAR_2 == 2);
 FUNC_0(VAR_5 >= 1);
 VAR_4[0] = VAR_1[0];

 FUNC_4(VAR_4[0].dim, VAR_1[1].dim, sizeof(VAR_4[0].dim));
 const int VAR_6 = FUNC_2(VAR_4[0].dim);

 if (VAR_6 > 1 && FUNC_1(VAR_4[0]) > 1)
  FUNC_3(&VAR_4[0], VAR_6, 1);
 if (VAR_5 > 1)
  VAR_4[1] = VAR_1[0];
}
