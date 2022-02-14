
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double w1; double b1; double w2; double b2; double a0; double a1; double a2; } ;
typedef TYPE_1__ BiquadD2 ;



__attribute__((used)) static inline double FUNC_0(BiquadD2 *VAR_0, double VAR_1)
{
    double VAR_2 = VAR_1;
    double VAR_3 = VAR_2 - VAR_0->w1 * VAR_0->b1 - VAR_0->w2 * VAR_0->b2;
    double VAR_4 = VAR_3 * VAR_0->a0 + VAR_0->w1 * VAR_0->a1 + VAR_0->w2 * VAR_0->a2;

    VAR_0->w2 = VAR_0->w1;
    VAR_0->w1 = VAR_3;

    return VAR_4;
}
