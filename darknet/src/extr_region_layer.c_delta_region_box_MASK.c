
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int x; int y; int w; int h; } ;
typedef TYPE_1__ box ;


 float FUNC_0 (TYPE_1__,TYPE_1__) ;
 TYPE_1__ FUNC_1 (float*,float*,int,int,int,int,int,int,int) ;
 float FUNC_2 (int) ;

float FUNC_3(box VAR_0, float *VAR_1, float *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, float *VAR_9, float VAR_10, int VAR_11)
{
    box VAR_12 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_11);
    float VAR_13 = FUNC_0(VAR_12, VAR_0);

    float VAR_14 = (VAR_0.x*VAR_7 - VAR_5);
    float VAR_15 = (VAR_0.y*VAR_8 - VAR_6);
    float VAR_16 = FUNC_2(VAR_0.w*VAR_7 / VAR_2[2*VAR_3]);
    float VAR_17 = FUNC_2(VAR_0.h*VAR_8 / VAR_2[2*VAR_3 + 1]);

    VAR_9[VAR_4 + 0*VAR_11] = VAR_10 * (VAR_14 - VAR_1[VAR_4 + 0*VAR_11]);
    VAR_9[VAR_4 + 1*VAR_11] = VAR_10 * (VAR_15 - VAR_1[VAR_4 + 1*VAR_11]);
    VAR_9[VAR_4 + 2*VAR_11] = VAR_10 * (VAR_16 - VAR_1[VAR_4 + 2*VAR_11]);
    VAR_9[VAR_4 + 3*VAR_11] = VAR_10 * (VAR_17 - VAR_1[VAR_4 + 3*VAR_11]);
    return VAR_13;
}
