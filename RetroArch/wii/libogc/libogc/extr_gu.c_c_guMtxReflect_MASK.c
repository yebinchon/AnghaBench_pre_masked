
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float x; float y; float z; } ;
typedef TYPE_1__ guVector ;
typedef float f32 ;
typedef float** Mtx ;


 float FUNC_0 (TYPE_1__*,TYPE_1__*) ;

void FUNC_1(Mtx VAR_0,guVector *VAR_1,guVector *VAR_2)
{
    f32 VAR_3, VAR_4, VAR_5, VAR_6;

    VAR_3 = -2.0f * VAR_2->x * VAR_2->y;
    VAR_4 = -2.0f * VAR_2->x * VAR_2->z;
    VAR_5 = -2.0f * VAR_2->y * VAR_2->z;
    VAR_6 = 2.0f * FUNC_0(VAR_1,VAR_2);

    VAR_0[0][0] = 1.0f - 2.0f * VAR_2->x * VAR_2->x;
    VAR_0[0][1] = VAR_3;
    VAR_0[0][2] = VAR_4;
    VAR_0[0][3] = VAR_6 * VAR_2->x;

    VAR_0[1][0] = VAR_3;
    VAR_0[1][1] = 1.0f - 2.0f * VAR_2->y * VAR_2->y;
    VAR_0[1][2] = VAR_5;
    VAR_0[1][3] = VAR_6 * VAR_2->y;

    VAR_0[2][0] = VAR_4;
    VAR_0[2][1] = VAR_5;
    VAR_0[2][2] = 1.0f - 2.0f * VAR_2->z * VAR_2->z;
    VAR_0[2][3] = VAR_6 * VAR_2->z;
}
