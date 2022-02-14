
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* s; } ;
typedef TYPE_1__ cl_float2 ;



__attribute__((used)) static cl_float2 FUNC_0(float VAR_0, float VAR_1, float *VAR_2) {
    cl_float2 VAR_3;

    VAR_3.s[0] = VAR_0 * VAR_2[0] + VAR_1 * VAR_2[1] + VAR_2[2];
    VAR_3.s[1] = VAR_0 * VAR_2[3] + VAR_1 * VAR_2[4] + VAR_2[5];

    return VAR_3;
}
