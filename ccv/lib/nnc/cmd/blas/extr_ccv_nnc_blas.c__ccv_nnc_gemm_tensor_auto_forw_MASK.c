
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int* dim; int datatype; int format; int type; } ;
typedef TYPE_2__ ccv_nnc_tensor_param_t ;
typedef int ccv_nnc_hint_t ;
struct TYPE_8__ {int transpose_b; int transpose_a; } ;
struct TYPE_10__ {TYPE_1__ blas; } ;
typedef TYPE_3__ ccv_nnc_cmd_param_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__ const,int*,int ,int*,int*,int*,int*,int*,int*) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static void FUNC_3(const ccv_nnc_cmd_param_t VAR_0, const ccv_nnc_tensor_param_t* const VAR_1, const int VAR_2, const ccv_nnc_hint_t VAR_3, ccv_nnc_tensor_param_t* const VAR_4, const int VAR_5)
{
 FUNC_0(VAR_5 == 1);
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 const int VAR_18 = FUNC_2(VAR_1[0].dim);
 FUNC_1(VAR_1[0], VAR_1[0].dim, VAR_0.blas.transpose_a, &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11);
 FUNC_1(VAR_1[1], VAR_1[1].dim, VAR_0.blas.transpose_b, &VAR_12, &VAR_13, &VAR_14, &VAR_15, &VAR_16, &VAR_17);
 VAR_4[0].type = VAR_1[0].type;
 VAR_4[0].format = VAR_1[0].format;
 VAR_4[0].datatype = VAR_1[0].datatype;
 int VAR_19 = VAR_7, VAR_20 = VAR_14;
 if (VAR_18 == 1) {
  VAR_4[0].dim[0] = VAR_20;
 } else if (VAR_18 == 2) {
  VAR_4[0].dim[0] = VAR_19;
  VAR_4[0].dim[1] = VAR_20;
 } else {
  FUNC_0(VAR_18 == 3);
  VAR_4[0].dim[0] = VAR_6;
  VAR_4[0].dim[1] = VAR_19;
  VAR_4[0].dim[2] = VAR_20;
 }
}
