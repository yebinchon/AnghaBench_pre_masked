
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float *VAR_0, float *VAR_1, float *VAR_2, float *VAR_3, float *VAR_4, float *VAR_5, float *VAR_6, float *VAR_7) {
   float VAR_8 = *VAR_0, VAR_9 = *VAR_1, VAR_10 = *VAR_2, VAR_11 = *VAR_3, VAR_12 = *VAR_4, VAR_13 = *VAR_5, VAR_14 = *VAR_6, VAR_15 = *VAR_7;
   float VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

   float VAR_23 = VAR_8 + VAR_15;
   float VAR_24 = VAR_8 - VAR_15;
   float VAR_25 = VAR_9 + VAR_14;
   float VAR_26 = VAR_9 - VAR_14;
   float VAR_27 = VAR_10 + VAR_13;
   float VAR_28 = VAR_10 - VAR_13;
   float VAR_29 = VAR_11 + VAR_12;
   float VAR_30 = VAR_11 - VAR_12;


   float VAR_31 = VAR_23 + VAR_29;
   float VAR_32 = VAR_23 - VAR_29;
   float VAR_33 = VAR_25 + VAR_27;
   float VAR_34 = VAR_25 - VAR_27;

   VAR_8 = VAR_31 + VAR_33;
   VAR_12 = VAR_31 - VAR_33;

   VAR_16 = (VAR_34 + VAR_32) * 0.707106781f;
   VAR_10 = VAR_32 + VAR_16;
   VAR_14 = VAR_32 - VAR_16;


   VAR_31 = VAR_30 + VAR_28;
   VAR_33 = VAR_28 + VAR_26;
   VAR_34 = VAR_26 + VAR_24;


   VAR_20 = (VAR_31 - VAR_34) * 0.382683433f;
   VAR_17 = VAR_31 * 0.541196100f + VAR_20;
   VAR_19 = VAR_34 * 1.306562965f + VAR_20;
   VAR_18 = VAR_33 * 0.707106781f;

   VAR_21 = VAR_24 + VAR_18;
   VAR_22 = VAR_24 - VAR_18;

   *VAR_5 = VAR_22 + VAR_17;
   *VAR_3 = VAR_22 - VAR_17;
   *VAR_1 = VAR_21 + VAR_19;
   *VAR_7 = VAR_21 - VAR_19;

   *VAR_0 = VAR_8; *VAR_2 = VAR_10; *VAR_4 = VAR_12; *VAR_6 = VAR_14;
}
