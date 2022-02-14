
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t* seen; size_t batch; size_t subdivisions; } ;
typedef TYPE_1__ network ;



size_t FUNC_0(network *VAR_0)
{
    size_t VAR_1 = (*VAR_0->seen)/(VAR_0->batch*VAR_0->subdivisions);
    return VAR_1;
}
