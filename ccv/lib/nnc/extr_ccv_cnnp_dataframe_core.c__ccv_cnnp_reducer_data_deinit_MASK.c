
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int context; int (* data_deinit ) (void* const,int ) ;} ;
typedef TYPE_1__ ccv_cnnp_dataframe_reducer_t ;


 int FUNC_0 (int (*) (void* const,int )) ;
 int FUNC_1 (void* const,int ) ;

__attribute__((used)) static void FUNC_2(void* const VAR_0, void* const VAR_1)
{
 ccv_cnnp_dataframe_reducer_t* const VAR_2 = (ccv_cnnp_dataframe_reducer_t*)VAR_1;
 FUNC_0(VAR_2->data_deinit);
 VAR_2->data_deinit(VAR_0, VAR_2->context);
}
