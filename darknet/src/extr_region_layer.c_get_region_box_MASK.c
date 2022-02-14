
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; float w; float h; } ;
typedef TYPE_1__ box ;


 float FUNC_0 (float) ;

box FUNC_1(float *VAR_0, float *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    box VAR_9;
    VAR_9.x = (VAR_4 + VAR_0[VAR_3 + 0*VAR_8]) / VAR_6;
    VAR_9.y = (VAR_5 + VAR_0[VAR_3 + 1*VAR_8]) / VAR_7;
    VAR_9.w = FUNC_0(VAR_0[VAR_3 + 2*VAR_8]) * VAR_1[2*VAR_2] / VAR_6;
    VAR_9.h = FUNC_0(VAR_0[VAR_3 + 3*VAR_8]) * VAR_1[2*VAR_2+1] / VAR_7;
    return VAR_9;
}
