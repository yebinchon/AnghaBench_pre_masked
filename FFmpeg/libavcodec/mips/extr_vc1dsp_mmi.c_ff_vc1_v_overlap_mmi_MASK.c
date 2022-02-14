
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;

void FUNC_1(uint8_t *VAR_0, int VAR_1)
{
    int VAR_2;
    int VAR_3, VAR_4, VAR_5, VAR_6;
    int VAR_7, VAR_8;
    int VAR_9 = 1;
    for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
        VAR_3 = VAR_0[-2 * VAR_1];
        VAR_4 = VAR_0[-VAR_1];
        VAR_5 = VAR_0[0];
        VAR_6 = VAR_0[VAR_1];
        VAR_7 = (VAR_3 - VAR_6 + 3 + VAR_9) >> 3;
        VAR_8 = (VAR_3 - VAR_6 + VAR_4 - VAR_5 + 4 - VAR_9) >> 3;

        VAR_0[-2 * VAR_1] = VAR_3 - VAR_7;
        VAR_0[-VAR_1] = FUNC_0(VAR_4 - VAR_8);
        VAR_0[0] = FUNC_0(VAR_5 + VAR_8);
        VAR_0[VAR_1] = VAR_6 + VAR_7;
        VAR_0++;
        VAR_9 = !VAR_9;
    }
}
