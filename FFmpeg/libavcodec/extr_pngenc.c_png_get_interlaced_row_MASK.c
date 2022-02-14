
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int*,int const*,int) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, int VAR_1,
                                   int VAR_2, int VAR_3,
                                   const uint8_t *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    uint8_t *VAR_12;
    const uint8_t *VAR_13;
    static const int VAR_14[] = {0x80, 0x08, 0x88, 0x22, 0xaa, 0x55, 0xff};

    VAR_7 = VAR_14[VAR_3];
    switch (VAR_2) {
    case 1:
        FUNC_1(VAR_0, 0, VAR_1);
        VAR_8 = 0;
        for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
            VAR_9 = (VAR_6 & 7);
            if ((VAR_7 << VAR_9) & 0x80) {
                VAR_10 = (VAR_4[VAR_6 >> 3] >> (7 - VAR_9)) & 1;
                VAR_0[VAR_8 >> 3] |= VAR_10 << (7 - (VAR_8 & 7));
                VAR_8++;
            }
        }
        break;
    default:
        VAR_11 = VAR_2 >> 3;
        VAR_12 = VAR_0;
        VAR_13 = VAR_4;
        for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
            VAR_9 = VAR_6 & 7;
            if ((VAR_7 << VAR_9) & 0x80) {
                FUNC_0(VAR_12, VAR_13, VAR_11);
                VAR_12 += VAR_11;
            }
            VAR_13 += VAR_11;
        }
        break;
    }
}
