
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int* dim; } ;
typedef TYPE_2__ ccv_nnc_tensor_param_t ;
typedef int ccv_nnc_hint_t ;
struct TYPE_7__ {int count; size_t* axis; } ;
struct TYPE_9__ {TYPE_1__ reduce; } ;
typedef TYPE_3__ ccv_nnc_cmd_param_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(const ccv_nnc_cmd_param_t VAR_0, const ccv_nnc_tensor_param_t* const VAR_1, const int VAR_2, const ccv_nnc_hint_t VAR_3, ccv_nnc_tensor_param_t* const VAR_4, const int VAR_5)
{
 FUNC_0(VAR_2 == 1);
 FUNC_0(VAR_5 == 1);
 VAR_4[0] = VAR_1[0];
 int VAR_6;
 for (VAR_6 = 0; VAR_6 < VAR_0.reduce.count; VAR_6++)
  VAR_4[0].dim[VAR_0.reduce.axis[VAR_6]] = 1;
}
