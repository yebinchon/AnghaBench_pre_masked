
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ccv_nnc_tensor_t ;
struct TYPE_2__ {int size; } ;
typedef TYPE_1__ ccv_cnnp_dataframe_tuple_t ;


 int FUNC_0 (int ** const) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void* const VAR_0, void* const VAR_1)
{
 ccv_cnnp_dataframe_tuple_t* const VAR_2 = (ccv_cnnp_dataframe_tuple_t*)VAR_1;
 ccv_nnc_tensor_t** const VAR_3 = (ccv_nnc_tensor_t**)VAR_0;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_2->size; VAR_4++)
  if (VAR_3[VAR_4])
   FUNC_1(VAR_3[VAR_4]);
 FUNC_0(VAR_3);
}
