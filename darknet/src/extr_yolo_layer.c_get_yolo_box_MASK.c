
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; float w; float h; } ;
typedef TYPE_1__ box ;


 float FUNC_0 (float) ;

box FUNC_1(float *VAR_0, float *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
    box VAR_11;
    VAR_11.x = (VAR_4 + VAR_0[VAR_3 + 0*VAR_10]) / VAR_6;
    VAR_11.y = (VAR_5 + VAR_0[VAR_3 + 1*VAR_10]) / VAR_7;
    VAR_11.w = FUNC_0(VAR_0[VAR_3 + 2*VAR_10]) * VAR_1[2*VAR_2] / VAR_8;
    VAR_11.h = FUNC_0(VAR_0[VAR_3 + 3*VAR_10]) * VAR_1[2*VAR_2+1] / VAR_9;
    return VAR_11;
}
