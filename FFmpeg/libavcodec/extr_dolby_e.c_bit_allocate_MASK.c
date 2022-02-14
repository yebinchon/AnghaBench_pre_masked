
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int,int const) ;
 int VAR_0 ;
 size_t FUNC_1 (int,int) ;
 int* VAR_1 ;
 int ** VAR_2 ;
 int* VAR_3 ;
 int FUNC_2 (int*) ;
 int* VAR_4 ;
 int**** VAR_5 ;
 int*** VAR_6 ;
 int* VAR_7 ;
 int*** VAR_8 ;
 int* VAR_9 ;
 int FUNC_3 (int const,int const) ;
 int*** VAR_10 ;
 int** VAR_11 ;
 int*** VAR_12 ;

__attribute__((used)) static void FUNC_4(int VAR_13, int VAR_14, int VAR_15,
                         int *VAR_16, int *VAR_17,
                         int VAR_18, int VAR_19, int VAR_20, int VAR_21)
{
    int VAR_22[VAR_0];
    int VAR_23[VAR_0];
    int VAR_24 = 0;
    int VAR_25 = 0;
    int VAR_26 = VAR_4[VAR_15 - 1];
    int VAR_27 = VAR_9[VAR_15 - 1];
    int VAR_28 = VAR_7[VAR_19];
    int VAR_29 = VAR_11[VAR_26][VAR_20];
    int VAR_30 = VAR_10[VAR_14][VAR_26][VAR_20];
    const uint16_t *VAR_31 = VAR_12[VAR_14][VAR_20];
    const uint16_t *VAR_32 = VAR_5[VAR_14][VAR_26][VAR_20];
    const uint16_t *VAR_33 = VAR_6[VAR_14][VAR_26];
    const uint16_t *VAR_34 = VAR_8[VAR_14][VAR_27];
    int VAR_35;

    for (VAR_35 = 0; VAR_35 < VAR_13; VAR_35++)
        VAR_23[VAR_35] = (48 - VAR_16[VAR_35]) * 64;

    VAR_33 += VAR_2[VAR_14][VAR_18];
    for (VAR_35 = 0; VAR_35 < VAR_13; VAR_35++) {
        VAR_24 = FUNC_3(VAR_24 - VAR_32[VAR_35],
                            VAR_23[VAR_35] - VAR_28 + VAR_33[VAR_35]);
        VAR_25 = FUNC_3(VAR_25 - VAR_29,
                            VAR_23[VAR_35] - VAR_31[VAR_35]);
        VAR_22[VAR_35] = FUNC_0(VAR_24, VAR_25);
    }

    VAR_24 = 0;
    for (VAR_35 = VAR_13 - 1; VAR_35 > VAR_1[VAR_14]; VAR_35--) {
        VAR_24 = FUNC_3(VAR_24 - VAR_30, VAR_23[VAR_35] - VAR_28);
        VAR_22[VAR_35] = FUNC_0(VAR_22[VAR_35], VAR_24);
    }

    for (VAR_35 = 0; VAR_35 < VAR_13; VAR_35++)
        VAR_22[VAR_35] = FUNC_0(VAR_22[VAR_35], VAR_34[VAR_35]);

    if (!VAR_14)
        FUNC_2(VAR_22);

    for (VAR_35 = 0; VAR_35 < VAR_13; VAR_35++) {
        int VAR_36 = (16 * (VAR_21 - 64) + VAR_23[VAR_35] - VAR_22[VAR_35]) >> 5;
        VAR_17[VAR_35] = VAR_3[FUNC_1(VAR_36, 6)];
    }
}
