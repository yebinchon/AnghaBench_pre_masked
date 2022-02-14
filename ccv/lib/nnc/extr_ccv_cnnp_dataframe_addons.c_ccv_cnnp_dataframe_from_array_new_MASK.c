
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ccv_cnnp_dataframe_t ;
struct TYPE_5__ {TYPE_2__* const context; int data_enum; } ;
typedef TYPE_1__ ccv_cnnp_column_data_t ;
struct TYPE_6__ {int rnum; } ;
typedef TYPE_2__ ccv_array_t ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__ const*,int,int ) ;

ccv_cnnp_dataframe_t* FUNC_1(ccv_array_t* const VAR_1)
{
 const ccv_cnnp_column_data_t VAR_2 = {
  .data_enum = VAR_0,
  .context = VAR_1
 };
 return FUNC_0(&VAR_2, 1, VAR_1->rnum);
}
