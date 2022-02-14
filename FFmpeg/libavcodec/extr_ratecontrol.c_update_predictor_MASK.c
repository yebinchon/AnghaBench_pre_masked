
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double count; double decay; double coeff; } ;
typedef TYPE_1__ Predictor ;



__attribute__((used)) static void FUNC_0(Predictor *VAR_0, double VAR_1, double VAR_2, double VAR_3)
{
    double VAR_4 = VAR_3 * VAR_1 / (VAR_2 + 1);
    if (VAR_2 < 10)
        return;

    VAR_0->count *= VAR_0->decay;
    VAR_0->coeff *= VAR_0->decay;
    VAR_0->count++;
    VAR_0->coeff += VAR_4;
}
