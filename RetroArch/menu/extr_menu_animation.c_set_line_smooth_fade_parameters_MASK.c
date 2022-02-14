
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(
      bool VAR_0, size_t VAR_1, size_t VAR_2, size_t VAR_3,
      size_t VAR_4, size_t VAR_5, size_t VAR_6, float VAR_7,
      size_t *VAR_8, float *VAR_9, float *VAR_10,
      size_t *VAR_11, float *VAR_12, float *VAR_13)
{
   float VAR_14 = 0.0f;
   float VAR_15 = 0.0f;





   VAR_14 = ((float)VAR_1 - ((float)VAR_2 * 2.0f)) / (float)VAR_1;
   VAR_15 = -1.0f * VAR_14;
   VAR_14 = (VAR_14 < 0.0f) ? 0.0f : VAR_14;
   VAR_15 = (VAR_15 < 0.0f) ? 0.0f : VAR_15;

   *VAR_8 = (VAR_6 > 0) ? VAR_6 - 1 : VAR_4;
   *VAR_9 = VAR_7 - (float)VAR_3;
   *VAR_10 = VAR_0 ? VAR_14 : VAR_15;

   *VAR_11 = VAR_6 + VAR_5;
   *VAR_12 = VAR_7 + (float)(VAR_3 * VAR_5);
   *VAR_13 = VAR_0 ? VAR_15 : VAR_14;
}
