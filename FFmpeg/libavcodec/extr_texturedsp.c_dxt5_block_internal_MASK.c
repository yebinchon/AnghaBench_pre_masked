
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int ptrdiff_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int const*) ;
 int FUNC_4 (int*,int ,int ,int,int ) ;

__attribute__((used)) static inline void FUNC_5(uint8_t *VAR_0, ptrdiff_t VAR_1,
                                       const uint8_t *VAR_2)
{
    int VAR_3, VAR_4;
    uint32_t VAR_5[4];
    uint8_t VAR_6[16];
    uint16_t VAR_7 = FUNC_0(VAR_2 + 8);
    uint16_t VAR_8 = FUNC_0(VAR_2 + 10);
    uint32_t VAR_9 = FUNC_1(VAR_2 + 12);
    uint8_t VAR_10 = *(VAR_2);
    uint8_t VAR_11 = *(VAR_2 + 1);

    FUNC_3(VAR_6, VAR_2 + 2);

    FUNC_4(VAR_5, VAR_7, VAR_8, 1, 0);

    for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
            int VAR_12 = VAR_6[VAR_3 + VAR_4 * 4];
            uint32_t VAR_13;
            uint8_t VAR_14;

            if (VAR_12 == 0) {
                VAR_14 = VAR_10;
            } else if (VAR_12 == 1) {
                VAR_14 = VAR_11;
            } else {
                if (VAR_10 > VAR_11) {
                    VAR_14 = (uint8_t) (((8 - VAR_12) * VAR_10 +
                                        (VAR_12 - 1) * VAR_11) / 7);
                } else {
                    if (VAR_12 == 6) {
                        VAR_14 = 0;
                    } else if (VAR_12 == 7) {
                        VAR_14 = 255;
                    } else {
                        VAR_14 = (uint8_t) (((6 - VAR_12) * VAR_10 +
                                            (VAR_12 - 1) * VAR_11) / 5);
                    }
                }
            }
            VAR_13 = VAR_5[VAR_9 & 3] | ((unsigned)VAR_14 << 24);
            VAR_9 >>= 2;
            FUNC_2(VAR_0 + VAR_3 * 4, VAR_13);
        }
        VAR_0 += VAR_1;
    }
}
