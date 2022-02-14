
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double volume; double attack; double decay; } ;
typedef TYPE_1__ ChanParam ;



__attribute__((used)) static void FUNC_0(ChanParam *VAR_0, double VAR_1)
{
    double VAR_2 = VAR_1 - VAR_0->volume;

    if (VAR_2 > 0.0)
        VAR_0->volume += VAR_2 * VAR_0->attack;
    else
        VAR_0->volume += VAR_2 * VAR_0->decay;
}
