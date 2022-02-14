
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(int VAR_0, int VAR_1, int VAR_2, int VAR_3,
                                   uint8_t *VAR_4, int VAR_5,
                             const uint8_t *VAR_6, int VAR_7)
{
    int VAR_8, VAR_9;

    for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
        for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
            if (VAR_6[VAR_8] > VAR_1) {
                VAR_4[VAR_8] = VAR_6[VAR_8];
                continue;
            }

            if ((!VAR_8 || VAR_8 == VAR_2 - 1 || !VAR_9 || VAR_9 == VAR_3 - 1) &&
                VAR_6[VAR_8] > VAR_0 &&
                (VAR_6[-VAR_7 + VAR_8-1] > VAR_1 ||
                 VAR_6[-VAR_7 + VAR_8 ] > VAR_1 ||
                 VAR_6[-VAR_7 + VAR_8+1] > VAR_1 ||
                 VAR_6[ VAR_8-1] > VAR_1 ||
                 VAR_6[ VAR_8+1] > VAR_1 ||
                 VAR_6[ VAR_7 + VAR_8-1] > VAR_1 ||
                 VAR_6[ VAR_7 + VAR_8 ] > VAR_1 ||
                 VAR_6[ VAR_7 + VAR_8+1] > VAR_1))
                VAR_4[VAR_8] = VAR_6[VAR_8];
            else
                VAR_4[VAR_8] = 0;
        }
        VAR_4 += VAR_5;
        VAR_6 += VAR_7;
    }
}
