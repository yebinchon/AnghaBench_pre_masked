
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;


 int VAR_0 ;
 float VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 float FUNC_0 (float) ;
 float FUNC_1 (int,int,int,int,int) ;

__attribute__((used)) static esp_err_t FUNC_2(int VAR_4, int VAR_5, int *VAR_6, int *VAR_7, int *VAR_8, int *VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13;
    float VAR_14;
    float VAR_15, VAR_16, VAR_17;
    if (VAR_4/VAR_5/2/8 < VAR_0) {
        return VAR_2;
    }

    *VAR_6 = 0;
    *VAR_7 = 0;
    *VAR_8 = 0;
    *VAR_9 = 0;
    VAR_17 = VAR_1;

    for (VAR_13 = 4; VAR_13 < 9; VAR_13 ++) {
        VAR_16 = FUNC_1(VAR_5, 255, 255, VAR_13, 0);
        VAR_15 = FUNC_1(VAR_5, 0, 0, VAR_13, 31);
        VAR_14 = (VAR_16 + VAR_15)/2;
        if (FUNC_0(VAR_14 - VAR_4) < VAR_17) {
            VAR_17 = FUNC_0(VAR_14 - VAR_4);
            *VAR_8 = VAR_13;
        }
    }
    VAR_17 = VAR_1;
    for (VAR_10 = 0; VAR_10 < 32; VAR_10 ++) {
        VAR_16 = FUNC_1(VAR_5, 255, 255, *VAR_8, VAR_10);
        VAR_15 = FUNC_1(VAR_5, 0, 0, *VAR_8, VAR_10);
        VAR_14 = (VAR_16 + VAR_15)/2;
        if (FUNC_0(VAR_14 - VAR_4) < VAR_17) {
            VAR_17 = FUNC_0(VAR_14 - VAR_4);
            *VAR_9 = VAR_10;
        }
    }
    VAR_17 = VAR_1;
    for (VAR_13 = 4; VAR_13 < 9; VAR_13 ++) {
        VAR_16 = FUNC_1(VAR_5, 255, 255, VAR_13, *VAR_9);
        VAR_15 = FUNC_1(VAR_5, 0, 0, VAR_13, *VAR_9);
        VAR_14 = (VAR_16 + VAR_15)/2;
        if (FUNC_0(VAR_14 - VAR_4) < VAR_17) {
            VAR_17 = FUNC_0(VAR_14 - VAR_4);
            *VAR_8 = VAR_13;
        }
    }

    VAR_17 = VAR_1;
    for (VAR_12 = 0; VAR_12 < 256; VAR_12 ++) {
        VAR_16 = FUNC_1(VAR_5, 255, VAR_12, *VAR_8, *VAR_9);
        VAR_15 = FUNC_1(VAR_5, 0, VAR_12, *VAR_8, *VAR_9);
        VAR_14 = (VAR_16 + VAR_15)/2;
        if (FUNC_0(VAR_14 - VAR_4) < VAR_17) {
            VAR_17 = FUNC_0(VAR_14 - VAR_4);
            *VAR_7 = VAR_12;
        }
    }

    VAR_17 = VAR_1;
    for (VAR_11 = 0; VAR_11 < 256; VAR_11 ++) {
        VAR_14 = FUNC_1(VAR_5, VAR_11, *VAR_7, *VAR_8, *VAR_9);
        if (FUNC_0(VAR_14 - VAR_4) < VAR_17) {
            VAR_17 = FUNC_0(VAR_14 - VAR_4);
            *VAR_6 = VAR_11;
        }
    }

    return VAR_3;
}
