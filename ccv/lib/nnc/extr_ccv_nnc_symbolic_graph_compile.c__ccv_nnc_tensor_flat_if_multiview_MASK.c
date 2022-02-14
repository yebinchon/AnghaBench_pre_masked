
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int u8; } ;
struct TYPE_7__ {uintptr_t alias_ref; int info; TYPE_1__ data; } ;
typedef TYPE_2__ ccv_nnc_tensor_t ;
typedef int ccv_nnc_tensor_multiview_t ;
typedef int ccv_array_t ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__* FUNC_1 (int const* const) ;
 void* FUNC_2 (int * const,int const) ;
 int FUNC_3 (int * const,int) ;
 TYPE_2__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int * const,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(ccv_array_t* const VAR_0, const int VAR_1)
{
 ccv_nnc_tensor_t* VAR_2 = FUNC_2(VAR_0, VAR_1);
 const int VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  return VAR_1;
 while (FUNC_0(VAR_2))
 {
  const ccv_nnc_tensor_multiview_t* const VAR_4 = (const ccv_nnc_tensor_multiview_t*)VAR_2;
  VAR_2 = FUNC_2(VAR_0, (int)(intptr_t)FUNC_1(VAR_4)[0]);
 }
 const ccv_nnc_tensor_t VAR_5 = *VAR_2;
 const int VAR_6 = FUNC_3(VAR_0, sizeof(ccv_nnc_tensor_t));
 ccv_nnc_tensor_t* const VAR_7 = FUNC_2(VAR_0, VAR_6);
 *VAR_7 = FUNC_4(VAR_5.data.u8, VAR_5.info, 0);
 ccv_nnc_tensor_multiview_t* const VAR_8 = (ccv_nnc_tensor_multiview_t*)FUNC_2(VAR_0, VAR_1);
 VAR_7->alias_ref = (uintptr_t)VAR_1;
 FUNC_5(VAR_8, (ccv_nnc_tensor_t*)(intptr_t)VAR_6);
 return VAR_6;
}
