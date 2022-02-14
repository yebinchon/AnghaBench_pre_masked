
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;
typedef int FLOAT ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int* VAR_1 ;
 int FUNC_2 (int*,int *) ;

void FUNC_3(int16_t *VAR_2)
{
    FLOAT VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    FLOAT VAR_11, VAR_12, VAR_13, VAR_14;
    FLOAT VAR_15[64];
    int VAR_16;

    FUNC_0();

    FUNC_2(VAR_15, VAR_2);

    for (VAR_16=0; VAR_16<8; VAR_16++) {
        VAR_3 = VAR_15[8*0 + VAR_16] + VAR_15[8*1 + VAR_16];
        VAR_4 = VAR_15[8*2 + VAR_16] + VAR_15[8*3 + VAR_16];
        VAR_5 = VAR_15[8*4 + VAR_16] + VAR_15[8*5 + VAR_16];
        VAR_6 = VAR_15[8*6 + VAR_16] + VAR_15[8*7 + VAR_16];
        VAR_7 = VAR_15[8*0 + VAR_16] - VAR_15[8*1 + VAR_16];
        VAR_8 = VAR_15[8*2 + VAR_16] - VAR_15[8*3 + VAR_16];
        VAR_9 = VAR_15[8*4 + VAR_16] - VAR_15[8*5 + VAR_16];
        VAR_10 = VAR_15[8*6 + VAR_16] - VAR_15[8*7 + VAR_16];

        VAR_11 = VAR_3 + VAR_6;
        VAR_12 = VAR_4 + VAR_5;
        VAR_13 = VAR_4 - VAR_5;
        VAR_14 = VAR_3 - VAR_6;

        VAR_2[8*0 + VAR_16] = FUNC_1(VAR_1[8*0 + VAR_16] * (VAR_11 + VAR_12));
        VAR_2[8*4 + VAR_16] = FUNC_1(VAR_1[8*4 + VAR_16] * (VAR_11 - VAR_12));

        VAR_13 += VAR_14;
        VAR_13 *= VAR_0;
        VAR_2[8*2 + VAR_16] = FUNC_1(VAR_1[8*2 + VAR_16] * (VAR_14 + VAR_13));
        VAR_2[8*6 + VAR_16] = FUNC_1(VAR_1[8*6 + VAR_16] * (VAR_14 - VAR_13));

        VAR_11 = VAR_7 + VAR_10;
        VAR_12 = VAR_8 + VAR_9;
        VAR_13 = VAR_8 - VAR_9;
        VAR_14 = VAR_7 - VAR_10;

        VAR_2[8*1 + VAR_16] = FUNC_1(VAR_1[8*0 + VAR_16] * (VAR_11 + VAR_12));
        VAR_2[8*5 + VAR_16] = FUNC_1(VAR_1[8*4 + VAR_16] * (VAR_11 - VAR_12));

        VAR_13 += VAR_14;
        VAR_13 *= VAR_0;
        VAR_2[8*3 + VAR_16] = FUNC_1(VAR_1[8*2 + VAR_16] * (VAR_14 + VAR_13));
        VAR_2[8*7 + VAR_16] = FUNC_1(VAR_1[8*6 + VAR_16] * (VAR_14 - VAR_13));
    }
}
