
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int stride; scalar_t__ size; int pad; } ;
typedef TYPE_1__ local_layer ;



int FUNC_0(local_layer VAR_0)
{
    int VAR_1 = VAR_0.w;
    if (!VAR_0.pad) VAR_1 -= VAR_0.size;
    else VAR_1 -= 1;
    return VAR_1/VAR_0.stride + 1;
}
