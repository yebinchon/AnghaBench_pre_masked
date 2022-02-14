
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* u; double* d; } ;
typedef TYPE_1__ dw128_t ;



__attribute__((used)) inline static void FUNC_0(dw128_t *VAR_0) {
    VAR_0->u[0] |= 1;
    VAR_0->u[1] |= 1;
    VAR_0->d[0] -= 1.0;
    VAR_0->d[1] -= 1.0;
}
