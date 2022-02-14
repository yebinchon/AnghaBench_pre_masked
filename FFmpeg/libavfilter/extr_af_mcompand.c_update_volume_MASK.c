
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* volume; double* attack_rate; double* decay_rate; } ;
typedef TYPE_1__ CompBand ;



__attribute__((used)) static void FUNC_0(CompBand *VAR_0, double VAR_1, int VAR_2)
{
    double VAR_3 = VAR_1 - VAR_0->volume[VAR_2];

    if (VAR_3 > 0.0)
        VAR_0->volume[VAR_2] += VAR_3 * VAR_0->attack_rate[VAR_2];
    else
        VAR_0->volume[VAR_2] += VAR_3 * VAR_0->decay_rate[VAR_2];
}
