
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_cnnp_dataframe_t ;
typedef int ccv_cnnp_column_data_context_deinit_f ;
struct TYPE_4__ {int size; } ;
struct TYPE_5__ {int format; int batch_count; int group_count; TYPE_1__ tuple; } ;
typedef TYPE_2__ ccv_cnnp_batch_context_t ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int * const,int const* const,int const) ;
 int * FUNC_3 (int * const,int ,int ,int const,int const,TYPE_2__* const,int ) ;

ccv_cnnp_dataframe_t* FUNC_4(ccv_cnnp_dataframe_t* const VAR_5, const int* const VAR_6, const int VAR_7, const int VAR_8, const int VAR_9, const int VAR_10)
{
 FUNC_0(VAR_10 == VAR_0 || VAR_10 == VAR_1);
 FUNC_0(VAR_7 >= 1);
 FUNC_0(VAR_8 > 0);
 FUNC_0(VAR_9 > 0);
 const int VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_7);
 ccv_cnnp_batch_context_t* const VAR_12 = (ccv_cnnp_batch_context_t*)FUNC_1(sizeof(ccv_cnnp_batch_context_t));
 VAR_12->tuple.size = VAR_7 * VAR_9;
 VAR_12->format = VAR_10;
 VAR_12->batch_count = VAR_8;
 VAR_12->group_count = VAR_9;
 return FUNC_3(VAR_5, VAR_3, VAR_2, VAR_11, VAR_8 * VAR_9, VAR_12, (ccv_cnnp_column_data_context_deinit_f)VAR_4);
}
