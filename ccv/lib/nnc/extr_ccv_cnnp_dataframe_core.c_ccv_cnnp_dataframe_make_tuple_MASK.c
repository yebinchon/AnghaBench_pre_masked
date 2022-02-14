
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; } ;
typedef TYPE_1__ ccv_cnnp_dataframe_tuple_t ;
typedef int ccv_cnnp_dataframe_t ;
typedef int ccv_cnnp_column_data_context_deinit_f ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int * const,int ,int ,int ,int const* const,int const,TYPE_1__* const,int ) ;

int FUNC_2(ccv_cnnp_dataframe_t* const VAR_3, const int* const VAR_4, const int VAR_5)
{
 ccv_cnnp_dataframe_tuple_t* const VAR_6 = (ccv_cnnp_dataframe_tuple_t*)FUNC_0(sizeof(ccv_cnnp_dataframe_tuple_t));
 VAR_6->size = VAR_5;
 return FUNC_1(VAR_3, VAR_0, 0, VAR_1, VAR_4, VAR_5, VAR_6, (ccv_cnnp_column_data_context_deinit_f)VAR_2);
}
