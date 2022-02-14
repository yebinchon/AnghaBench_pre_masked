
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {double* s; } ;
typedef TYPE_2__ cl_float2 ;
struct TYPE_5__ {TYPE_2__ p2; TYPE_2__ p1; } ;
struct TYPE_7__ {TYPE_1__ p; } ;
typedef TYPE_3__ MotionVector ;



__attribute__((used)) static void FUNC_0(
    const MotionVector *VAR_0,
    const int VAR_1,
    const double *VAR_2,
    float *VAR_3
) {
    double VAR_4 = VAR_2[0], VAR_5 = VAR_2[1], VAR_6 = VAR_2[2];
    double VAR_7 = VAR_2[3], VAR_8 = VAR_2[4], VAR_9 = VAR_2[5];

    for (int VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
        const cl_float2 *VAR_11 = &VAR_0[VAR_10].p.p1;
        const cl_float2 *VAR_12 = &VAR_0[VAR_10].p.p2;

        double VAR_13 = VAR_4*VAR_11->s[0] + VAR_5*VAR_11->s[1] + VAR_6 - VAR_12->s[0];
        double VAR_14 = VAR_7*VAR_11->s[0] + VAR_8*VAR_11->s[1] + VAR_9 - VAR_12->s[1];

        VAR_3[VAR_10] = VAR_13*VAR_13 + VAR_14*VAR_14;
    }
}
