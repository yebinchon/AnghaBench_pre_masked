
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef float* vec3_t ;
struct TYPE_2__ {float phys_gravity; float phys_maxvelocity; } ;


 int FUNC_0 (float*,float*,float*) ;
 TYPE_1__ VAR_0 ;
 float FUNC_1 (float) ;

int FUNC_2(float VAR_1, vec3_t VAR_2, vec3_t VAR_3, float *VAR_4)
{
 float VAR_5, VAR_6;
 float VAR_7, VAR_8, VAR_9, VAR_10;
 vec3_t VAR_11;

 VAR_5 = VAR_0.phys_gravity;
 VAR_6 = VAR_0.phys_maxvelocity;


 VAR_7 = 0.5 * VAR_5 * (VAR_1 / VAR_5) * (VAR_1 / VAR_5);

 VAR_10 = VAR_2[2] + VAR_7;

 VAR_8 = VAR_10 - VAR_3[2];

 if (VAR_8 < 0)
 {
  *VAR_4 = VAR_6;
  return 0;
 }

 VAR_9 = FUNC_1(VAR_8 / (0.5 * VAR_5));

 FUNC_0(VAR_3, VAR_2, VAR_11);

 if ( (VAR_9 + VAR_1 / VAR_5) == 0.0f ) {
  *VAR_4 = VAR_6;
  return 0;
 }

 *VAR_4 = FUNC_1(VAR_11[0]*VAR_11[0] + VAR_11[1]*VAR_11[1]) / (VAR_9 + VAR_1 / VAR_5);

 if (*VAR_4 > VAR_6)
 {
  *VAR_4 = VAR_6;
  return 0;
 }
 return 1;
}
