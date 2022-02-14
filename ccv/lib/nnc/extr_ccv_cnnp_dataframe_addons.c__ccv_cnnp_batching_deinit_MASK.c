
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ccv_nnc_tensor_t ;
struct TYPE_3__ {int size; } ;
struct TYPE_4__ {TYPE_1__ tuple; } ;
typedef TYPE_2__ ccv_cnnp_batch_context_t ;


 int FUNC_0 (int ** const) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void* const VAR_0, void* const VAR_1)
{
 ccv_cnnp_batch_context_t* const VAR_2 = (ccv_cnnp_batch_context_t*)VAR_1;
 ccv_nnc_tensor_t** const VAR_3 = (ccv_nnc_tensor_t**)VAR_0;
 const int VAR_4 = VAR_2->tuple.size;
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  FUNC_1(VAR_3[VAR_5]);
 FUNC_0(VAR_3);
}
