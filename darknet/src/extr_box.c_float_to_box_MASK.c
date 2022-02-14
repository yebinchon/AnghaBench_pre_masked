
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float x; float y; float w; float h; int member_0; } ;
typedef TYPE_1__ box ;



box FUNC_0(float *VAR_0, int VAR_1)
{
    box VAR_2 = {0};
    VAR_2.x = VAR_0[0];
    VAR_2.y = VAR_0[1*VAR_1];
    VAR_2.w = VAR_0[2*VAR_1];
    VAR_2.h = VAR_0[3*VAR_1];
    return VAR_2;
}
