
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;
typedef int AudioDSPContext ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int*,int,int,int) ;
 int FUNC_2 (int*,int*,int*,int,int,int ,int ,int) ;
 int const* VAR_2 ;
 int const* VAR_3 ;
 int FUNC_3 (int *,int*,int*,int*,int) ;
 int FUNC_4 (int *,int,int*,int*,int) ;
 int FUNC_5 (int*,int*,int) ;
 int FUNC_6 (int*,int*,int) ;
 int FUNC_7 (int*,int ,int) ;
 int FUNC_8 (int*,int*,int*,int) ;

void FUNC_9(AudioDSPContext *VAR_4, int16_t* VAR_5, int* VAR_6,
                     const int16_t *VAR_7, int VAR_8,
                     int16_t* VAR_9, int16_t* VAR_10,
                     int16_t* VAR_11, int16_t *VAR_12, int VAR_13)
{
    int16_t VAR_14[VAR_1+11];
    int16_t VAR_15[33];
    int16_t VAR_16[11];
    int VAR_17;
    int VAR_18;


    FUNC_7(VAR_15, 0, 33 * sizeof(int16_t));


    for (VAR_18 = 0; VAR_18 < 10; VAR_18++)
        VAR_15[VAR_18 + 11] = (VAR_7[VAR_18 + 1] * VAR_3[VAR_18] + 0x4000) >> 15;


    for (VAR_18 = 0; VAR_18 < 10; VAR_18++)
        VAR_16[VAR_18 + 1] = (VAR_7[VAR_18 + 1] * VAR_2[VAR_18] + 0x4000) >> 15;


    FUNC_5(VAR_12 - 10, VAR_10, 10 * sizeof(int16_t));
    FUNC_8(VAR_9 + VAR_0, VAR_15 + 11, VAR_12, VAR_13);

    FUNC_5(VAR_10, VAR_12 + VAR_13 - 10, 10 * sizeof(int16_t));



    VAR_18 = FUNC_4(VAR_4, VAR_8,
                                                VAR_9, VAR_14 + 10,
                                                VAR_13);
    *VAR_6 = FUNC_0(*VAR_6, VAR_18);


    FUNC_6(VAR_9, VAR_9 + VAR_13, VAR_0 * sizeof(int16_t));


    VAR_17 = FUNC_3(VAR_4, VAR_15, VAR_16, VAR_14 + 10, VAR_13);


    FUNC_2(VAR_11 + 10, VAR_16 + 1,
                                VAR_14 + 10,
                                VAR_13, 10, 0, 0, 0x800);
    FUNC_5(VAR_11, VAR_11 + VAR_13, 10 * sizeof(int16_t));

    *VAR_5 = FUNC_1(VAR_12, VAR_11 + 10, VAR_17,
                                    VAR_13, *VAR_5);
}
