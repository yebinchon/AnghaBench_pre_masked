
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;
typedef int* cvid_codebook ;


 int FUNC_0 (int const*) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2 (cvid_codebook *VAR_0,
                                     int VAR_1, int VAR_2, const uint8_t *VAR_3)
{
    const uint8_t *VAR_4 = (VAR_3 + VAR_2);
    uint32_t VAR_5, VAR_6;
    int VAR_7, VAR_8;
    uint8_t *VAR_9;


    VAR_8 = (VAR_1 & 0x04) ? 4 : 6;
    VAR_5 = 0;
    VAR_6 = 0;

    VAR_9 = VAR_0[0];
    for (VAR_7=0; VAR_7 < 256; VAR_7++) {
        if ((VAR_1 & 0x01) && !(VAR_6 >>= 1)) {
            if ((VAR_3 + 4) > VAR_4)
                break;

            VAR_5 = FUNC_0 (VAR_3);
            VAR_3 += 4;
            VAR_6 = 0x80000000;
        }

        if (!(VAR_1 & 0x01) || (VAR_5 & VAR_6)) {
            int VAR_10, VAR_11;

            if ((VAR_3 + VAR_8) > VAR_4)
                break;

            for (VAR_10 = 0; VAR_10 < 4; ++VAR_10) {
                int VAR_12 = *VAR_3++;
                for (VAR_11 = 0; VAR_11 < 3; ++VAR_11)
                    *VAR_9++ = VAR_12;
            }
            if (VAR_8 == 6) {
                int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
                VAR_16 = *(int8_t *)VAR_3++;
                VAR_17 = *(int8_t *)VAR_3++;
                VAR_9 -= 12;
                for(VAR_10=0; VAR_10<4; ++VAR_10) {
                    VAR_13 = *VAR_9++ + VAR_17*2;
                    VAR_14 = *VAR_9++ - (VAR_16/2) - VAR_17;
                    VAR_15 = *VAR_9 + VAR_16*2;
                    VAR_9 -= 2;
                    *VAR_9++ = FUNC_1(VAR_13);
                    *VAR_9++ = FUNC_1(VAR_14);
                    *VAR_9++ = FUNC_1(VAR_15);
                }
            }
        } else {
            VAR_9 += 12;
        }
    }
}
