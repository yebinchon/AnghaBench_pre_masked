
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint16_t *const VAR_0, int VAR_1,
                       int VAR_2, int VAR_3, int VAR_4, int VAR_5,
                       int VAR_6, int VAR_7)
{
    int VAR_8 = FUNC_0(VAR_4 - VAR_2), VAR_9 = VAR_2 < VAR_4 ? 1 : -1;
    int VAR_10 = FUNC_0(VAR_5 - VAR_3), VAR_11 = VAR_3 < VAR_5 ? 1 : -1;
    int VAR_12 = (VAR_8 > VAR_10 ? VAR_8 : -VAR_10) / 2, VAR_13;

    for (;;) {
        VAR_0[VAR_3 * VAR_1 + VAR_2 * 4 + 0] = 65535 - VAR_0[VAR_3 * VAR_1 + VAR_2 * 4 + 0];
        VAR_0[VAR_3 * VAR_1 + VAR_2 * 4 + 1] = 65535 - VAR_0[VAR_3 * VAR_1 + VAR_2 * 4 + 1];
        VAR_0[VAR_3 * VAR_1 + VAR_2 * 4 + 2] = 65535 - VAR_0[VAR_3 * VAR_1 + VAR_2 * 4 + 2];
        VAR_0[VAR_3 * VAR_1 + VAR_2 * 4 + 3] = 65535;

        if (VAR_2 == VAR_4 && VAR_3 == VAR_5)
            break;

        VAR_13 = VAR_12;

        if (VAR_13 >-VAR_8) {
            VAR_12 -= VAR_10;
            VAR_2 += VAR_9;
        }

        if (VAR_13 < VAR_10) {
            VAR_12 += VAR_8;
            VAR_3 += VAR_11;
        }
    }
}
