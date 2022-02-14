
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; double cycle_time; double clock_period; double feedback3_factor; int feedback2_factor; } ;
typedef TYPE_1__ TimeFilter ;


 double FUNC_0 (int ,double) ;

double FUNC_1(TimeFilter *VAR_0, double VAR_1, double VAR_2)
{
    VAR_0->count++;
    if (VAR_0->count == 1) {
        VAR_0->cycle_time = VAR_1;
    } else {
        double VAR_3;
        VAR_0->cycle_time += VAR_0->clock_period * VAR_2;
        VAR_3 = VAR_1 - VAR_0->cycle_time;

        VAR_0->cycle_time += FUNC_0(VAR_0->feedback2_factor, 1.0 / VAR_0->count) * VAR_3;
        VAR_0->clock_period += VAR_0->feedback3_factor * VAR_3;
    }
    return VAR_0->cycle_time;
}
