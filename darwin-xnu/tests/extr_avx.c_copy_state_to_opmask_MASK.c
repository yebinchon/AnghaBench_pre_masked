
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int __fpu_k0; } ;
typedef TYPE_1__ X86_AVX512_STATE_T ;
typedef int OPMASK ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(X86_AVX512_STATE_T *VAR_1, OPMASK *VAR_2) {
 OPMASK *VAR_3 = (OPMASK *) &VAR_1->__fpu_k0;
 for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_0(&VAR_3[VAR_4], &VAR_2[VAR_4], sizeof(*VAR_2));
 }
}
