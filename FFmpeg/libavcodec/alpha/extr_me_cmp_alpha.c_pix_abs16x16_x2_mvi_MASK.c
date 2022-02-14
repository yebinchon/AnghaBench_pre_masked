
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(void *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = 0;
    uint64_t VAR_6 = (size_t) VAR_2 & 0x7;

    switch (VAR_6) {
    case 0:
        do {
            uint64_t VAR_7, VAR_8, VAR_9, VAR_10;
            uint64_t VAR_11, VAR_12;

            VAR_7 = FUNC_3(VAR_1);
            VAR_8 = FUNC_3(VAR_1 + 8);
            VAR_11 = FUNC_3(VAR_2);
            VAR_12 = FUNC_3(VAR_2 + 8);
            VAR_9 = FUNC_0(VAR_11, (VAR_11 >> 8) | ((uint64_t) VAR_12 << 56));
            VAR_10 = FUNC_0(VAR_12, (VAR_12 >> 8) | ((uint64_t) VAR_2[16] << 56));
            VAR_1 += VAR_3;
            VAR_2 += VAR_3;

            VAR_5 += FUNC_5(VAR_7, VAR_9)
                    + FUNC_5(VAR_8, VAR_10);
        } while (--VAR_4);
        break;
    case 7:




        do {
            uint64_t VAR_13, VAR_14, VAR_15, VAR_16;
            uint64_t VAR_17, VAR_18, VAR_19;

            VAR_13 = FUNC_3(VAR_1);
            VAR_14 = FUNC_3(VAR_1 + 8);
            VAR_17 = FUNC_4(VAR_2);
            VAR_18 = FUNC_4(VAR_2 + 8);
            VAR_19 = FUNC_4(VAR_2 + 16);
            VAR_15 = FUNC_0(FUNC_2(VAR_17, VAR_6) | FUNC_1(VAR_18, VAR_6), VAR_18);
            VAR_16 = FUNC_0(FUNC_2(VAR_18, VAR_6) | FUNC_1(VAR_19, VAR_6), VAR_19);
            VAR_1 += VAR_3;
            VAR_2 += VAR_3;

            VAR_5 += FUNC_5(VAR_13, VAR_15)
                    + FUNC_5(VAR_14, VAR_16);
        } while (--VAR_4);
        break;
    default:
        do {
            uint64_t VAR_20 = VAR_6 + 1;
            uint64_t VAR_21, VAR_22, VAR_23, VAR_24;
            uint64_t VAR_25, VAR_26, VAR_27;

            VAR_21 = FUNC_3(VAR_1);
            VAR_22 = FUNC_3(VAR_1 + 8);
            VAR_25 = FUNC_4(VAR_2);
            VAR_26 = FUNC_4(VAR_2 + 8);
            VAR_27 = FUNC_4(VAR_2 + 16);
            VAR_23 = FUNC_0(FUNC_2(VAR_25, VAR_6) | FUNC_1(VAR_26, VAR_6),
                         FUNC_2(VAR_25, VAR_20) | FUNC_1(VAR_26, VAR_20));
            VAR_24 = FUNC_0(FUNC_2(VAR_26, VAR_6) | FUNC_1(VAR_27, VAR_6),
                         FUNC_2(VAR_26, VAR_20) | FUNC_1(VAR_27, VAR_20));
            VAR_1 += VAR_3;
            VAR_2 += VAR_3;

            VAR_5 += FUNC_5(VAR_21, VAR_23)
                    + FUNC_5(VAR_22, VAR_24);
        } while (--VAR_4);
        break;
    }
    return VAR_5;
}
