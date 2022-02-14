
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int dim; int datatype; int format; int type; } ;
typedef TYPE_2__ ccv_nnc_tensor_param_t ;
typedef int ccv_nnc_hint_t ;
struct TYPE_13__ {int const count; } ;
struct TYPE_15__ {TYPE_1__ convolution; } ;
typedef TYPE_3__ ccv_nnc_cmd_param_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__ const,TYPE_2__ const,int const,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__ const) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ,int const) ;
 int FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_6(const ccv_nnc_cmd_param_t VAR_0, const ccv_nnc_tensor_param_t* VAR_1, const int VAR_2, const ccv_nnc_hint_t VAR_3, ccv_nnc_tensor_param_t* VAR_4, const int VAR_5)
{
 FUNC_0(VAR_5 == 1);
 VAR_4[0].type = VAR_1[0].type;
 VAR_4[0].format = VAR_1[0].format;
 VAR_4[0].datatype = VAR_1[0].datatype;

 const int VAR_6 = FUNC_2(VAR_1[1]);
 FUNC_0(VAR_6 == VAR_0.convolution.count);
 FUNC_4(VAR_4, FUNC_3(VAR_1[0].dim), VAR_6);
 FUNC_5(VAR_4, FUNC_2(VAR_1[0]));
 FUNC_1(VAR_0, VAR_1[0], VAR_3, VAR_4);
}
