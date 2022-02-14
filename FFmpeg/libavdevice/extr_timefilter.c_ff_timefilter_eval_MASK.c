
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double cycle_time; double clock_period; } ;
typedef TYPE_1__ TimeFilter ;



double FUNC_0(TimeFilter *VAR_0, double VAR_1)
{
    return VAR_0->cycle_time + VAR_0->clock_period * VAR_1;
}
