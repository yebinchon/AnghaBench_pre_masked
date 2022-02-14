
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int*,int*,int*) ;
 int FUNC_1 (int*,int ) ;

__attribute__((used)) static unsigned int FUNC_2(const uint8_t *VAR_0, ptrdiff_t VAR_1,
                                 uint16_t VAR_2, uint16_t VAR_3)
{
    uint32_t VAR_4 = 0;
    int VAR_5, VAR_6, VAR_7;
    int VAR_8[16];
    int VAR_9[4];
    int VAR_10, VAR_11, VAR_12 = 0;
    int VAR_13, VAR_14, VAR_15;
    uint8_t VAR_16[16];
    static const int VAR_17[8] = {
        0 << 30, 2 << 30, 0 << 30, 2 << 30,
        3 << 30, 3 << 30, 1 << 30, 1 << 30,
    };


    FUNC_1(VAR_16 + 0, VAR_2);
    FUNC_1(VAR_16 + 4, VAR_3);
    FUNC_0(VAR_16 + 8, VAR_16 + 0, VAR_16 + 4);
    FUNC_0(VAR_16 + 12, VAR_16 + 4, VAR_16 + 0);

    VAR_5 = VAR_16[0 * 4 + 0] - VAR_16[1 * 4 + 0];
    VAR_6 = VAR_16[0 * 4 + 1] - VAR_16[1 * 4 + 1];
    VAR_7 = VAR_16[0 * 4 + 2] - VAR_16[1 * 4 + 2];

    for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
        for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
            VAR_8[VAR_12++] = VAR_0[0 + VAR_10 * 4 + VAR_11 * VAR_1] * VAR_5 +
                        VAR_0[1 + VAR_10 * 4 + VAR_11 * VAR_1] * VAR_6 +
                        VAR_0[2 + VAR_10 * 4 + VAR_11 * VAR_1] * VAR_7;

        VAR_9[VAR_11] = VAR_16[0 + VAR_11 * 4] * VAR_5 +
                   VAR_16[1 + VAR_11 * 4] * VAR_6 +
                   VAR_16[2 + VAR_11 * 4] * VAR_7;
    }
    VAR_13 = (VAR_9[1] + VAR_9[3]) >> 1;
    VAR_14 = (VAR_9[3] + VAR_9[2]) >> 1;
    VAR_15 = (VAR_9[2] + VAR_9[0]) >> 1;

    for (VAR_10 = 0; VAR_10 < 16; VAR_10++) {
        int VAR_18 = VAR_8[VAR_10];
        int VAR_19 = (VAR_18 < VAR_14 ? 4 : 0) |
                   (VAR_18 < VAR_13 ? 2 : 0) |
                   (VAR_18 < VAR_15 ? 1 : 0);

        VAR_4 >>= 2;
        VAR_4 |= VAR_17[VAR_19];
    }

    return VAR_4;
}
