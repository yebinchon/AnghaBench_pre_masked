
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_3__ {int range; int datatype; int format; float onval; float offval; int structof; } ;
typedef TYPE_1__ ccv_cnnp_one_hot_context_t ;
typedef int ccv_cnnp_dataframe_t ;
typedef int ccv_cnnp_column_data_context_deinit_f ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int const) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int * const,int ,int ,int ,int ,TYPE_1__* const,int ) ;

int FUNC_4(ccv_cnnp_dataframe_t* const VAR_5, const int VAR_6, const off_t VAR_7, const int VAR_8, const float VAR_9, const float VAR_10, const int VAR_11, const int VAR_12)
{
 FUNC_1(VAR_11 == VAR_1 || VAR_11 == VAR_0);
 ccv_cnnp_one_hot_context_t* const VAR_13 = (ccv_cnnp_one_hot_context_t*)FUNC_2(sizeof(ccv_cnnp_one_hot_context_t));
 VAR_13->range = VAR_8;
 VAR_13->datatype = VAR_11;
 VAR_13->format = VAR_12;
 VAR_13->onval = VAR_9;
 VAR_13->offval = VAR_10;
 VAR_13->structof = VAR_7;
 return FUNC_3(VAR_5, VAR_2, 0, VAR_3, FUNC_0(VAR_6), VAR_13, (ccv_cnnp_column_data_context_deinit_f)VAR_4);
}
