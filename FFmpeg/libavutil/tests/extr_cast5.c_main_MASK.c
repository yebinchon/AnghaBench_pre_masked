
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct AVCAST5 {int dummy; } ;


 int VAR_0 ;
 struct AVCAST5* FUNC_0 () ;
 int FUNC_1 (struct AVCAST5*,int*,int const*,int,int) ;
 int FUNC_2 (struct AVCAST5*,int*,int const*,int,int*,int) ;
 int FUNC_3 (struct AVCAST5*,int const*,int const) ;
 int FUNC_4 (struct AVCAST5*) ;
 int FUNC_5 (int *,int ,char*,int,int const,int) ;
 int FUNC_6 (int*,int const*,int) ;

int FUNC_7(int VAR_1, char** VAR_2)
{

    static const uint8_t VAR_3[3][16] = {
        {0x01, 0x23, 0x45, 0x67, 0x12, 0x34, 0x56, 0x78, 0x23, 0x45, 0x67, 0x89, 0x34, 0x56, 0x78, 0x9a},
        {0x01, 0x23, 0x45, 0x67, 0x12, 0x34, 0x56, 0x78, 0x23, 0x45},
        {0x01, 0x23, 0x45, 0x67, 0x12}
    };
    static const uint8_t VAR_4[8] = {0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef};
    static const uint8_t VAR_5[3][8] = {
        {0x23, 0x8b, 0x4f, 0xe5, 0x84, 0x7e, 0x44, 0xb2},
        {0xeb, 0x6a, 0x71, 0x1a, 0x2c, 0x02, 0x27, 0x1b},
        {0x7a, 0xc8, 0x16, 0xd1, 0x6e, 0x9b, 0x30, 0x2e}
    };
    static const uint8_t VAR_6[2][16] = {
        {0xee, 0xa9, 0xd0, 0xa2, 0x49, 0xfd, 0x3b, 0xa6, 0xb3, 0x43, 0x6f, 0xb8, 0x9d, 0x6d, 0xca, 0x92},
        {0xb2, 0xc9, 0x5e, 0xb0, 0x0c, 0x31, 0xad, 0x71, 0x80, 0xac, 0x05, 0xb8, 0xe8, 0x3d, 0x69, 0x6e}
    };
    static const uint8_t VAR_7[8] = {0xee, 0xa9, 0xd0, 0xa2, 0x49, 0xfd, 0x3b, 0xa6};
    static uint8_t VAR_8[2][16];
    int VAR_9, VAR_10, VAR_11 = 0;
    static const int VAR_12[3] = {128, 80, 40};
    uint8_t VAR_13[8];
    struct AVCAST5 *VAR_14;
    VAR_14 = FUNC_0();
    if (!VAR_14)
        return 1;
    for (VAR_10 = 0; VAR_10 < 3; VAR_10++){

        FUNC_3(VAR_14, VAR_3[VAR_10], VAR_12[VAR_10]);
        FUNC_1(VAR_14, VAR_13, VAR_4, 1, 0);
        for (VAR_9 = 0;VAR_9 < 8; VAR_9++){
            if (VAR_5[VAR_10][VAR_9] != VAR_13[VAR_9]){
                FUNC_5(((void*)0), VAR_0, "%d %02x %02x\n", VAR_9, VAR_5[VAR_10][VAR_9], VAR_13[VAR_9]);
                VAR_11 = 1;
            }
        }

        FUNC_1(VAR_14, VAR_13, VAR_5[VAR_10], 1, 1);
        for (VAR_9 =0; VAR_9 < 8; VAR_9++) {
            if (VAR_4[VAR_9] != VAR_13[VAR_9]) {
                FUNC_5(((void*)0), VAR_0, "%d %02x %02x\n", VAR_9, VAR_4[VAR_9], VAR_13[VAR_9]);
                VAR_11 = 1;
            }
        }
    }
    FUNC_6(VAR_8[0], VAR_3[0], 16);
    FUNC_6(VAR_8[1], VAR_3[0], 16);
    for (VAR_9 = 0; VAR_9 < 1000000; VAR_9++){
        FUNC_3(VAR_14, VAR_8[1], 128);
        FUNC_1(VAR_14, VAR_8[0], VAR_8[0], 2, 0);
        FUNC_3(VAR_14, VAR_8[0], 128);
        FUNC_1(VAR_14, VAR_8[1], VAR_8[1], 2, 0);
    }
    for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
        for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
            if (VAR_6[VAR_10][VAR_9] != VAR_8[VAR_10][VAR_9]) {
                FUNC_5(((void*)0), VAR_0, "%d %02x %02x\n", VAR_9, VAR_6[VAR_10][VAR_9], VAR_8[VAR_10][VAR_9]);
                VAR_11 = 1;
            }
        }
    }
    for (VAR_10 = 0; VAR_10 < 3; VAR_10++) {

        FUNC_3(VAR_14, VAR_3[VAR_10], VAR_12[VAR_10]);
        FUNC_6(VAR_13, VAR_7, 8);
        FUNC_2(VAR_14, VAR_8[0], VAR_6[0], 2, VAR_13, 0);
        FUNC_6(VAR_13, VAR_7, 8);
        FUNC_2(VAR_14, VAR_8[0], VAR_8[0], 2, VAR_13, 1);
        for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
            if (VAR_6[0][VAR_9] != VAR_8[0][VAR_9]) {
                FUNC_5(((void*)0), VAR_0, "%d %02x %02x\n", VAR_9, VAR_6[0][VAR_9], VAR_8[0][VAR_9]);
                VAR_11 = 1;
            }
        }
    }
    FUNC_4(VAR_14);
    return VAR_11;
}
