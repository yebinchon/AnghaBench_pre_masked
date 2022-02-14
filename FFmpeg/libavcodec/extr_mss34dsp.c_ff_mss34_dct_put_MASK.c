
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int*,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

void FUNC_2(uint8_t *VAR_2, ptrdiff_t VAR_3, int *VAR_4)
{
    int VAR_5, VAR_6;
    int *VAR_7;

    VAR_7 = VAR_4;
    for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
        FUNC_0(VAR_7, 1, VAR_1, 13);
        VAR_7 += 8;
    }

    VAR_7 = VAR_4;
    for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
        FUNC_0(VAR_7, 8, VAR_0, 22);
        VAR_7++;
    }

    VAR_7 = VAR_4;
    for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
        for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
            VAR_2[VAR_5] = FUNC_1(VAR_7[VAR_5] + 128);
        VAR_2 += VAR_3;
        VAR_7 += 8;
    }
}
