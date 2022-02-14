
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float,float) ;
 float FUNC_1 (float,float) ;

__attribute__((used)) static void FUNC_2(float *VAR_0, int VAR_1)
{
   float VAR_2=0.0f, VAR_3=0.0f, VAR_4=0.0f, VAR_5=0.0f;
   float VAR_6=0.0f, VAR_7=0.0f, VAR_8=0.0f;
   float VAR_9=0.0f, VAR_10=0.0f, VAR_11=0.0f;
   int VAR_12;
   float *VAR_13 = VAR_0;
   VAR_6 = VAR_9 = VAR_0[0];
   VAR_7 = VAR_10 = VAR_0[1];
   VAR_8 = VAR_11 = VAR_0[2];
   for (VAR_12=0; VAR_12<VAR_1; VAR_12++) {
      float VAR_14 = *VAR_13++;
      float VAR_15 = *VAR_13++;
      float VAR_16 = *VAR_13++;
      VAR_6 = FUNC_1(VAR_6, VAR_14);
      VAR_7 = FUNC_1(VAR_7, VAR_15);
      VAR_8 = FUNC_1(VAR_8, VAR_16);
      VAR_9 = FUNC_0(VAR_9, VAR_14);
      VAR_10 = FUNC_0(VAR_10, VAR_15);
      VAR_11 = FUNC_0(VAR_11, VAR_16);
      VAR_2 += VAR_14;
      VAR_3 += VAR_15;
      VAR_4 += VAR_16;
   }
   VAR_2 /= (float)VAR_1;
   VAR_3 /= (float)VAR_1;
   VAR_4 /= (float)VAR_1;
   VAR_5 = 3.0f / (VAR_9-VAR_6 + VAR_10-VAR_7 + VAR_11-VAR_8);
   VAR_13 = VAR_0;
   for (VAR_12=0; VAR_12<VAR_1; VAR_12++) {
      *VAR_13 = (*VAR_13-VAR_2) * VAR_5; VAR_13++;
      *VAR_13 = (*VAR_13-VAR_3) * VAR_5; VAR_13++;
      *VAR_13 = (*VAR_13-VAR_4) * VAR_5; VAR_13++;
   }
}
