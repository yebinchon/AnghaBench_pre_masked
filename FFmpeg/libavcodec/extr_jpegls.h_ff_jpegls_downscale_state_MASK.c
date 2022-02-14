
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* N; int reset; int* A; int* B; } ;
typedef TYPE_1__ JLSState ;



__attribute__((used)) static inline void FUNC_0(JLSState *VAR_0, int VAR_1)
{
    if (VAR_0->N[VAR_1] == VAR_0->reset) {
        VAR_0->A[VAR_1] >>= 1;
        VAR_0->B[VAR_1] >>= 1;
        VAR_0->N[VAR_1] >>= 1;
    }
    VAR_0->N[VAR_1]++;
}
