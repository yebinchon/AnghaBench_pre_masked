
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double a0; double i1; double a1; double i2; double a2; double o1; double b1; double o2; double b2; } ;
typedef TYPE_1__ BiquadContext ;



__attribute__((used)) static double FUNC_0(BiquadContext *VAR_0, double VAR_1)
{
    double VAR_2 = VAR_1 * VAR_0->a0 + VAR_0->i1 * VAR_0->a1 + VAR_0->i2 * VAR_0->a2 - VAR_0->o1 * VAR_0->b1 - VAR_0->o2 * VAR_0->b2;

    VAR_0->i2 = VAR_0->i1;
    VAR_0->o2 = VAR_0->o1;
    VAR_0->i1 = VAR_1;
    VAR_0->o1 = VAR_2;

    return VAR_2;
}
