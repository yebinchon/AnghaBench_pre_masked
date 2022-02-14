
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_cnnp_dataframe_t ;
struct TYPE_4__ {int size; } ;
struct TYPE_5__ {int tensor_offset; int device_id; TYPE_1__ tuple; } ;
typedef TYPE_2__ ccv_cnnp_copy_to_gpu_context_t ;
typedef int ccv_cnnp_column_data_context_deinit_f ;


 int VAR_0 ;
 int FUNC_0 (int,int const) ;
 int FUNC_1 (int const) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int * const,int ,int,int ,int ,TYPE_2__* const,int ) ;

int FUNC_5(ccv_cnnp_dataframe_t* const VAR_4, const int VAR_5, const int VAR_6, const int VAR_7, const int VAR_8)
{
 FUNC_2(VAR_7 > 0);
 int VAR_9 = VAR_0;
 FUNC_0(VAR_9, VAR_8);
 ccv_cnnp_copy_to_gpu_context_t* const VAR_10 = (ccv_cnnp_copy_to_gpu_context_t*)FUNC_3(sizeof(ccv_cnnp_copy_to_gpu_context_t));
 VAR_10->tuple.size = VAR_7;
 VAR_10->tensor_offset = VAR_6;
 VAR_10->device_id = VAR_8;
 return FUNC_4(VAR_4, VAR_1, VAR_9, VAR_2, FUNC_1(VAR_5), VAR_10, (ccv_cnnp_column_data_context_deinit_f)VAR_3);
}
