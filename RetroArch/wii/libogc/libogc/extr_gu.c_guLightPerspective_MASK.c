
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float f32 ;
typedef float** Mtx ;


 float FUNC_0 (float) ;
 float FUNC_1 (float) ;

void FUNC_2(Mtx VAR_0,f32 VAR_1,f32 VAR_2,f32 VAR_3,f32 VAR_4,f32 VAR_5,f32 VAR_6)
{
 f32 VAR_7;
 f32 VAR_8;

 VAR_7 = VAR_1*0.5f;
 VAR_7 = FUNC_0(VAR_7);

 VAR_8 = 1.0f/FUNC_1(VAR_7);

    VAR_0[0][0] = (VAR_8 / VAR_2) * VAR_3;
    VAR_0[0][1] = 0.0f;
    VAR_0[0][2] = -VAR_5;
    VAR_0[0][3] = 0.0f;

    VAR_0[1][0] = 0.0f;
    VAR_0[1][1] = VAR_8 * VAR_4;
    VAR_0[1][2] = -VAR_6;
    VAR_0[1][3] = 0.0f;

    VAR_0[2][0] = 0.0f;
    VAR_0[2][1] = 0.0f;
    VAR_0[2][2] = -1.0f;
    VAR_0[2][3] = 0.0f;
}
