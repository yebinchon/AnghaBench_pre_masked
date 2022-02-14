
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int d; } ;
typedef TYPE_1__ ccv_nnc_tensor_symbol_t ;
typedef int ccv_nnc_tensor_param_t ;
struct TYPE_6__ {int type; int d; } ;
typedef TYPE_2__ ccv_nnc_tape_symbol_t ;
typedef int ccv_array_t ;


 int VAR_0 ;
 int FUNC_0 (int * const,TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_1(void* VAR_1, const ccv_nnc_tensor_symbol_t VAR_2, const ccv_nnc_tensor_param_t VAR_3, const char* const VAR_4)
{
 ccv_array_t* const VAR_5 = (ccv_array_t*)VAR_1;
 ccv_nnc_tape_symbol_t VAR_6 = {
  .d = VAR_2.d,
  .type = VAR_0,
 };
 FUNC_0(VAR_5, &VAR_6);
}
