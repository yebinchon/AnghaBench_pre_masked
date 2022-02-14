
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* exec_data; void* tensor_data; } ;
typedef TYPE_1__ ccv_nnc_tensor_tape_t ;
typedef int ccv_nnc_tape_tensor_data_array_t ;
typedef int ccv_nnc_tape_exec_data_array_t ;


 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (int,int ,int ) ;

ccv_nnc_tensor_tape_t* FUNC_2(void)
{
 ccv_nnc_tensor_tape_t* VAR_0 = (ccv_nnc_tensor_tape_t*)FUNC_0(sizeof(ccv_nnc_tensor_tape_t));
 VAR_0->tensor_data = FUNC_1(sizeof(ccv_nnc_tape_tensor_data_array_t), 0, 0);
 VAR_0->exec_data = FUNC_1(sizeof(ccv_nnc_tape_exec_data_array_t), 0, 0);
 return VAR_0;
}
