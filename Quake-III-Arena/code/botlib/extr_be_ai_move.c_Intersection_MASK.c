
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec2_t ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(vec2_t VAR_2, vec2_t VAR_3, vec2_t VAR_4, vec2_t VAR_5, vec2_t VAR_6)
{
   float VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

   VAR_8 = VAR_3[0] - VAR_2[0];
   VAR_9 = VAR_3[1] - VAR_2[1];
   VAR_11 = VAR_5[0] - VAR_4[0];
   VAR_12 = VAR_5[1] - VAR_4[1];

   VAR_13 = VAR_9 * VAR_11 - VAR_8 * VAR_12;
   if (VAR_13 != 0)
   {
      VAR_7 = VAR_2[1] * VAR_8 - VAR_2[0] * VAR_9;
      VAR_10 = VAR_4[1] * VAR_11 - VAR_4[0] * VAR_12;
      VAR_6[0] = (int) ((VAR_8 * VAR_10 - VAR_11 * VAR_7) / VAR_13);
      VAR_6[1] = (int) ((VAR_9 * VAR_10 - VAR_12 * VAR_7) / VAR_13);
  return VAR_1;
   }
   else
   {
      return VAR_0;
   }
}
