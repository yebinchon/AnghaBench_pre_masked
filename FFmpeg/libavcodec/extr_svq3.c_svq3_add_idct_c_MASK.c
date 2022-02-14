
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int int16_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int*,int ,int) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_1, int16_t *VAR_2,
                            int VAR_3, int VAR_4, int VAR_5)
{
    const int VAR_6 = VAR_0[VAR_4];
    int VAR_7;

    if (VAR_5) {
        VAR_5 = 13 * 13 * (VAR_5 == 1 ? 1538U* VAR_2[0]
                                      : VAR_6 * (VAR_2[0] >> 3) / 2);
        VAR_2[0] = 0;
    }

    for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
        const int VAR_8 = 13 * (VAR_2[0 + 4 * VAR_7] + VAR_2[2 + 4 * VAR_7]);
        const int VAR_9 = 13 * (VAR_2[0 + 4 * VAR_7] - VAR_2[2 + 4 * VAR_7]);
        const int VAR_10 = 7 * VAR_2[1 + 4 * VAR_7] - 17 * VAR_2[3 + 4 * VAR_7];
        const int VAR_11 = 17 * VAR_2[1 + 4 * VAR_7] + 7 * VAR_2[3 + 4 * VAR_7];

        VAR_2[0 + 4 * VAR_7] = VAR_8 + VAR_11;
        VAR_2[1 + 4 * VAR_7] = VAR_9 + VAR_10;
        VAR_2[2 + 4 * VAR_7] = VAR_9 - VAR_10;
        VAR_2[3 + 4 * VAR_7] = VAR_8 - VAR_11;
    }

    for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
        const unsigned VAR_12 = 13 * (VAR_2[VAR_7 + 4 * 0] + VAR_2[VAR_7 + 4 * 2]);
        const unsigned VAR_13 = 13 * (VAR_2[VAR_7 + 4 * 0] - VAR_2[VAR_7 + 4 * 2]);
        const unsigned VAR_14 = 7 * VAR_2[VAR_7 + 4 * 1] - 17 * VAR_2[VAR_7 + 4 * 3];
        const unsigned VAR_15 = 17 * VAR_2[VAR_7 + 4 * 1] + 7 * VAR_2[VAR_7 + 4 * 3];
        const int VAR_16 = (VAR_5 + 0x80000u);

        VAR_1[VAR_7 + VAR_3 * 0] = FUNC_0(VAR_1[VAR_7 + VAR_3 * 0] + ((int)((VAR_12 + VAR_15) * VAR_6 + VAR_16) >> 20));
        VAR_1[VAR_7 + VAR_3 * 1] = FUNC_0(VAR_1[VAR_7 + VAR_3 * 1] + ((int)((VAR_13 + VAR_14) * VAR_6 + VAR_16) >> 20));
        VAR_1[VAR_7 + VAR_3 * 2] = FUNC_0(VAR_1[VAR_7 + VAR_3 * 2] + ((int)((VAR_13 - VAR_14) * VAR_6 + VAR_16) >> 20));
        VAR_1[VAR_7 + VAR_3 * 3] = FUNC_0(VAR_1[VAR_7 + VAR_3 * 3] + ((int)((VAR_12 - VAR_15) * VAR_6 + VAR_16) >> 20));
    }

    FUNC_1(VAR_2, 0, 16 * sizeof(int16_t));
}
