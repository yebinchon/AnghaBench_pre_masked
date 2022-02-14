
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (int) ;

void FUNC_1(float *VAR_0, float *VAR_1, int *VAR_2, int VAR_3,
        int VAR_4, int VAR_5, int VAR_6, int VAR_7, float VAR_8, float VAR_9) {
 if (VAR_7 >= VAR_6) {
   int VAR_10 = (VAR_6+VAR_7) >> 1;
   int VAR_11 = VAR_4;
   int VAR_12;
   for (VAR_12 = VAR_4+1; VAR_12 <= VAR_5; VAR_12++)
     if (VAR_0[VAR_11*VAR_3] - VAR_8*FUNC_0(VAR_10-VAR_11) - VAR_9*(VAR_10-VAR_11) <
  VAR_0[VAR_12*VAR_3] - VAR_8*FUNC_0(VAR_10-VAR_12) - VAR_9*(VAR_10-VAR_12))
 VAR_11 = VAR_12;
   VAR_1[VAR_10*VAR_3] = VAR_0[VAR_11*VAR_3] - VAR_8*FUNC_0(VAR_10-VAR_11) - VAR_9*(VAR_10-VAR_11);
   VAR_2[VAR_10*VAR_3] = VAR_11;
   FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_11, VAR_6, VAR_10-1, VAR_8, VAR_9);
   FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_11, VAR_5, VAR_10+1, VAR_7, VAR_8, VAR_9);
 }
}
