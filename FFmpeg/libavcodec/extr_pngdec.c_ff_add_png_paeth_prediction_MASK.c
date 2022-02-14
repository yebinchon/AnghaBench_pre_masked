
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;

void FUNC_1(uint8_t *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2,
                                 int VAR_3, int VAR_4)
{
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

        VAR_6 = VAR_0[VAR_5 - VAR_4];
        VAR_7 = VAR_2[VAR_5];
        VAR_8 = VAR_2[VAR_5 - VAR_4];

        VAR_9 = VAR_7 - VAR_8;
        VAR_12 = VAR_6 - VAR_8;

        VAR_10 = FUNC_0(VAR_9);
        VAR_11 = FUNC_0(VAR_12);
        VAR_12 = FUNC_0(VAR_9 + VAR_12);

        if (VAR_10 <= VAR_11 && VAR_10 <= VAR_12)
            VAR_9 = VAR_6;
        else if (VAR_11 <= VAR_12)
            VAR_9 = VAR_7;
        else
            VAR_9 = VAR_8;
        VAR_0[VAR_5] = VAR_9 + VAR_1[VAR_5];
    }
}
