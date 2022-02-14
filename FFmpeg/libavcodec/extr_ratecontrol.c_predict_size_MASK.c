
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double coeff; double count; } ;
typedef TYPE_1__ Predictor ;



__attribute__((used)) static double FUNC_0(Predictor *VAR_0, double VAR_1, double VAR_2)
{
    return VAR_0->coeff * VAR_2 / (VAR_1 * VAR_0->count);
}
