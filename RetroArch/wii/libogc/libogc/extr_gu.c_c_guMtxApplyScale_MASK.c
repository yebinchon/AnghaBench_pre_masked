
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int f32 ;
typedef int** Mtx ;



void FUNC_0(Mtx VAR_0,Mtx VAR_1,f32 VAR_2,f32 VAR_3,f32 VAR_4)
{
 VAR_1[0][0] = VAR_0[0][0] * VAR_2; VAR_1[0][1] = VAR_0[0][1] * VAR_3;
 VAR_1[0][2] = VAR_0[0][2] * VAR_4; VAR_1[0][3] = VAR_0[0][3];

 VAR_1[1][0] = VAR_0[1][0] * VAR_2; VAR_1[1][1] = VAR_0[1][1] * VAR_3;
 VAR_1[1][2] = VAR_0[1][2] * VAR_4; VAR_1[1][3] = VAR_0[1][3];

 VAR_1[2][0] = VAR_0[2][0] * VAR_2; VAR_1[2][1] = VAR_0[2][1] * VAR_3;
 VAR_1[2][2] = VAR_0[2][2] * VAR_4; VAR_1[2][3] = VAR_0[2][3];
}
