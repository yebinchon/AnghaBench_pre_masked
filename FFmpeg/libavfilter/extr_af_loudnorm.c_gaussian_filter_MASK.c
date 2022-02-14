
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* delta; double* weights; } ;
typedef TYPE_1__ LoudNormContext ;



__attribute__((used)) static double FUNC_0(LoudNormContext *VAR_0, int VAR_1)
{
    double VAR_2 = 0.;
    int VAR_3;

    VAR_1 = VAR_1 - 10 > 0 ? VAR_1 - 10 : VAR_1 + 20;
    for (VAR_3 = 0; VAR_3 < 21; VAR_3++)
        VAR_2 += VAR_0->delta[((VAR_1 + VAR_3) < 30) ? (VAR_1 + VAR_3) : (VAR_1 + VAR_3 - 30)] * VAR_0->weights[VAR_3];

    return VAR_2;
}
