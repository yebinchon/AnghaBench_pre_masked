
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FAST_FLOAT ;


 int VAR_0 ;

void
FUNC_0 (FAST_FLOAT * VAR_1)
{
  FAST_FLOAT VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
  FAST_FLOAT VAR_10, VAR_11, VAR_12, VAR_13;
  FAST_FLOAT VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
  FAST_FLOAT *VAR_21;
  int VAR_22;



  VAR_21 = VAR_1;
  for (VAR_22 = VAR_0-1; VAR_22 >= 0; VAR_22--) {
    VAR_2 = VAR_21[0] + VAR_21[7];
    VAR_9 = VAR_21[0] - VAR_21[7];
    VAR_3 = VAR_21[1] + VAR_21[6];
    VAR_8 = VAR_21[1] - VAR_21[6];
    VAR_4 = VAR_21[2] + VAR_21[5];
    VAR_7 = VAR_21[2] - VAR_21[5];
    VAR_5 = VAR_21[3] + VAR_21[4];
    VAR_6 = VAR_21[3] - VAR_21[4];



    VAR_10 = VAR_2 + VAR_5;
    VAR_13 = VAR_2 - VAR_5;
    VAR_11 = VAR_3 + VAR_4;
    VAR_12 = VAR_3 - VAR_4;

    VAR_21[0] = VAR_10 + VAR_11;
    VAR_21[4] = VAR_10 - VAR_11;

    VAR_14 = (VAR_12 + VAR_13) * ((FAST_FLOAT) 0.707106781);
    VAR_21[2] = VAR_13 + VAR_14;
    VAR_21[6] = VAR_13 - VAR_14;



    VAR_10 = VAR_6 + VAR_7;
    VAR_11 = VAR_7 + VAR_8;
    VAR_12 = VAR_8 + VAR_9;


    VAR_18 = (VAR_10 - VAR_12) * ((FAST_FLOAT) 0.382683433);
    VAR_15 = ((FAST_FLOAT) 0.541196100) * VAR_10 + VAR_18;
    VAR_17 = ((FAST_FLOAT) 1.306562965) * VAR_12 + VAR_18;
    VAR_16 = VAR_11 * ((FAST_FLOAT) 0.707106781);

    VAR_19 = VAR_9 + VAR_16;
    VAR_20 = VAR_9 - VAR_16;

    VAR_21[5] = VAR_20 + VAR_15;
    VAR_21[3] = VAR_20 - VAR_15;
    VAR_21[1] = VAR_19 + VAR_17;
    VAR_21[7] = VAR_19 - VAR_17;

    VAR_21 += VAR_0;
  }



  VAR_21 = VAR_1;
  for (VAR_22 = VAR_0-1; VAR_22 >= 0; VAR_22--) {
    VAR_2 = VAR_21[VAR_0*0] + VAR_21[VAR_0*7];
    VAR_9 = VAR_21[VAR_0*0] - VAR_21[VAR_0*7];
    VAR_3 = VAR_21[VAR_0*1] + VAR_21[VAR_0*6];
    VAR_8 = VAR_21[VAR_0*1] - VAR_21[VAR_0*6];
    VAR_4 = VAR_21[VAR_0*2] + VAR_21[VAR_0*5];
    VAR_7 = VAR_21[VAR_0*2] - VAR_21[VAR_0*5];
    VAR_5 = VAR_21[VAR_0*3] + VAR_21[VAR_0*4];
    VAR_6 = VAR_21[VAR_0*3] - VAR_21[VAR_0*4];



    VAR_10 = VAR_2 + VAR_5;
    VAR_13 = VAR_2 - VAR_5;
    VAR_11 = VAR_3 + VAR_4;
    VAR_12 = VAR_3 - VAR_4;

    VAR_21[VAR_0*0] = VAR_10 + VAR_11;
    VAR_21[VAR_0*4] = VAR_10 - VAR_11;

    VAR_14 = (VAR_12 + VAR_13) * ((FAST_FLOAT) 0.707106781);
    VAR_21[VAR_0*2] = VAR_13 + VAR_14;
    VAR_21[VAR_0*6] = VAR_13 - VAR_14;



    VAR_10 = VAR_6 + VAR_7;
    VAR_11 = VAR_7 + VAR_8;
    VAR_12 = VAR_8 + VAR_9;


    VAR_18 = (VAR_10 - VAR_12) * ((FAST_FLOAT) 0.382683433);
    VAR_15 = ((FAST_FLOAT) 0.541196100) * VAR_10 + VAR_18;
    VAR_17 = ((FAST_FLOAT) 1.306562965) * VAR_12 + VAR_18;
    VAR_16 = VAR_11 * ((FAST_FLOAT) 0.707106781);

    VAR_19 = VAR_9 + VAR_16;
    VAR_20 = VAR_9 - VAR_16;

    VAR_21[VAR_0*5] = VAR_20 + VAR_15;
    VAR_21[VAR_0*3] = VAR_20 - VAR_15;
    VAR_21[VAR_0*1] = VAR_19 + VAR_17;
    VAR_21[VAR_0*7] = VAR_19 - VAR_17;

    VAR_21++;
  }
}
