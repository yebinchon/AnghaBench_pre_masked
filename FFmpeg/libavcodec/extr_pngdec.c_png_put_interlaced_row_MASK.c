
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int*,int const*,int) ;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_2, int VAR_3,
                                   int VAR_4, int VAR_5,
                                   int VAR_6, const uint8_t *VAR_7)
{
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    uint8_t *VAR_15;
    const uint8_t *VAR_16;

    VAR_9 = VAR_1[VAR_5];
    VAR_10 = VAR_0[VAR_5];

    switch (VAR_4) {
    case 1:
        VAR_12 = 0;
        for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
            VAR_11 = (VAR_8 & 7);
            if ((VAR_10 << VAR_11) & 0x80) {
                VAR_13 = (VAR_7[VAR_12 >> 3] >> (7 - (VAR_12 & 7))) & 1;
                VAR_2[VAR_8 >> 3] &= 0xFF7F>>VAR_11;
                VAR_2[VAR_8 >> 3] |= VAR_13 << (7 - VAR_11);
            }
            if ((VAR_9 << VAR_11) & 0x80)
                VAR_12++;
        }
        break;
    case 2:
        VAR_12 = 0;
        for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
            int VAR_17 = 2 * (VAR_8 & 3);
            VAR_11 = (VAR_8 & 7);
            if ((VAR_10 << VAR_11) & 0x80) {
                VAR_13 = (VAR_7[VAR_12 >> 2] >> (6 - 2*(VAR_12 & 3))) & 3;
                VAR_2[VAR_8 >> 2] &= 0xFF3F>>VAR_17;
                VAR_2[VAR_8 >> 2] |= VAR_13 << (6 - VAR_17);
            }
            if ((VAR_9 << VAR_11) & 0x80)
                VAR_12++;
        }
        break;
    case 4:
        VAR_12 = 0;
        for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
            int VAR_18 = 4*(VAR_8&1);
            VAR_11 = (VAR_8 & 7);
            if ((VAR_10 << VAR_11) & 0x80) {
                VAR_13 = (VAR_7[VAR_12 >> 1] >> (4 - 4*(VAR_12 & 1))) & 15;
                VAR_2[VAR_8 >> 1] &= 0xFF0F>>VAR_18;
                VAR_2[VAR_8 >> 1] |= VAR_13 << (4 - VAR_18);
            }
            if ((VAR_9 << VAR_11) & 0x80)
                VAR_12++;
        }
        break;
    default:
        VAR_14 = VAR_4 >> 3;
        VAR_15 = VAR_2;
        VAR_16 = VAR_7;
            for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
                VAR_11 = VAR_8 & 7;
                if ((VAR_10 << VAR_11) & 0x80) {
                    FUNC_0(VAR_15, VAR_16, VAR_14);
                }
                VAR_15 += VAR_14;
                if ((VAR_9 << VAR_11) & 0x80)
                    VAR_16 += VAR_14;
            }
        break;
    }
}
