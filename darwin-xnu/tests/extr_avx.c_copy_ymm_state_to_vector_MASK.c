
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct __darwin_xmm_reg {int dummy; } ;
struct TYPE_3__ {struct __darwin_xmm_reg __fpu_ymmh0; struct __darwin_xmm_reg __fpu_xmm0; } ;
typedef TYPE_1__ X86_AVX_STATE_T ;
typedef void VECTOR256 ;


 int VAR_0 ;
 int FUNC_0 (struct __darwin_xmm_reg*,void*,int) ;

__attribute__((used)) static void
FUNC_1(X86_AVX_STATE_T *VAR_1, VECTOR256 *VAR_2) {
 int VAR_3;
 struct __darwin_xmm_reg *VAR_4 = &VAR_1->__fpu_xmm0;
 struct __darwin_xmm_reg *VAR_5 = &VAR_1->__fpu_ymmh0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++ ) {
  FUNC_0(&VAR_4[VAR_3], &VAR_2[VAR_3], sizeof(*VAR_4));
  FUNC_0(&VAR_5[VAR_3], (void *) ((uint64_t)&VAR_2[VAR_3] + sizeof(*VAR_5)), sizeof(*VAR_5));
 }
}
