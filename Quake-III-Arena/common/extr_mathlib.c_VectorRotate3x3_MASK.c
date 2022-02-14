
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;



void FUNC_0( vec3_t VAR_0, float VAR_1[3][3], vec3_t VAR_2 )
{
 VAR_2[0] = VAR_0[0] * VAR_1[0][0] + VAR_0[1] * VAR_1[1][0] + VAR_0[2] * VAR_1[2][0];
 VAR_2[1] = VAR_0[0] * VAR_1[0][1] + VAR_0[1] * VAR_1[1][1] + VAR_0[2] * VAR_1[2][1];
 VAR_2[2] = VAR_0[0] * VAR_1[0][2] + VAR_0[1] * VAR_1[1][2] + VAR_0[2] * VAR_1[2][2];
}
