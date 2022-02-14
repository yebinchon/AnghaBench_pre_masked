
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint16_t *const VAR_0, int VAR_1,
                      int VAR_2, int VAR_3, int VAR_4, int VAR_5,
                      int VAR_6, int VAR_7,
                      const uint16_t *const VAR_8)
{
    int VAR_9 = FUNC_0(VAR_4 - VAR_2), VAR_10 = VAR_2 < VAR_4 ? 1 : -1;
    int VAR_11 = FUNC_0(VAR_5 - VAR_3), VAR_12 = VAR_3 < VAR_5 ? 1 : -1;
    int VAR_13 = (VAR_9 > VAR_11 ? VAR_9 : -VAR_11) / 2, VAR_14;

    for (;;) {
        VAR_0[VAR_3 * VAR_1 + VAR_2 * 4 + 0] = VAR_8[0];
        VAR_0[VAR_3 * VAR_1 + VAR_2 * 4 + 1] = VAR_8[1];
        VAR_0[VAR_3 * VAR_1 + VAR_2 * 4 + 2] = VAR_8[2];
        VAR_0[VAR_3 * VAR_1 + VAR_2 * 4 + 3] = VAR_8[3];

        if (VAR_2 == VAR_4 && VAR_3 == VAR_5)
            break;

        VAR_14 = VAR_13;

        if (VAR_14 >-VAR_9) {
            VAR_13 -= VAR_11;
            VAR_2 += VAR_10;
        }

        if (VAR_14 < VAR_11) {
            VAR_13 += VAR_9;
            VAR_3 += VAR_12;
        }
    }
}
