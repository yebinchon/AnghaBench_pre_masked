
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



char *FUNC_0(char *VAR_0, const uint8_t *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;
    static const char VAR_5[16] = { '0', '1', '2', '3',
                                           '4', '5', '6', '7',
                                           '8', '9', 'A', 'B',
                                           'C', 'D', 'E', 'F' };
    static const char VAR_6[16] = { '0', '1', '2', '3',
                                           '4', '5', '6', '7',
                                           '8', '9', 'a', 'b',
                                           'c', 'd', 'e', 'f' };
    const char *VAR_7 = VAR_3 ? VAR_6 : VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        VAR_0[VAR_4 * 2] = VAR_7[VAR_1[VAR_4] >> 4];
        VAR_0[VAR_4 * 2 + 1] = VAR_7[VAR_1[VAR_4] & 0xF];
    }

    return VAR_0;
}
