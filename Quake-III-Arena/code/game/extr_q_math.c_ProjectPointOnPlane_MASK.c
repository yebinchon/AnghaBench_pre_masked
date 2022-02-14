
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;


 float FUNC_0 (float* const,float* const) ;
 float FUNC_1 (float) ;
 int FUNC_2 (int) ;

void FUNC_3( vec3_t VAR_0, const vec3_t VAR_1, const vec3_t VAR_2 )
{
 float VAR_3;
 vec3_t VAR_4;
 float VAR_5;

 VAR_5 = FUNC_0( VAR_2, VAR_2 );

 FUNC_2( FUNC_1(VAR_5) != 0.0f );

 VAR_5 = 1.0f / VAR_5;

 VAR_3 = FUNC_0( VAR_2, VAR_1 ) * VAR_5;

 VAR_4[0] = VAR_2[0] * VAR_5;
 VAR_4[1] = VAR_2[1] * VAR_5;
 VAR_4[2] = VAR_2[2] * VAR_5;

 VAR_0[0] = VAR_1[0] - VAR_3 * VAR_4[0];
 VAR_0[1] = VAR_1[1] - VAR_3 * VAR_4[1];
 VAR_0[2] = VAR_1[2] - VAR_3 * VAR_4[2];
}
