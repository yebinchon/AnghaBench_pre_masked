
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ccv_nnc_tensor_t ;
struct TYPE_3__ {scalar_t__ sp; } ;
typedef TYPE_1__ ccv_nnc_tensor_multiview_t ;


 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (scalar_t__,int * const*) ;

void FUNC_2(ccv_nnc_tensor_multiview_t* const VAR_0, ccv_nnc_tensor_t* const VAR_1)
{
 if (!VAR_0->sp)
  VAR_0->sp = FUNC_0(sizeof(ccv_nnc_tensor_t*), 0, 0);
 FUNC_1(VAR_0->sp, &VAR_1);
}
