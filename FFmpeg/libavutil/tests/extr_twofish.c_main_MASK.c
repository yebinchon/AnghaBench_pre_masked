
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct AVTWOFISH {int dummy; } ;
typedef int rpt ;
typedef int Key ;


 int VAR_0 ;
 int FUNC_0 (struct AVTWOFISH*) ;
 int FUNC_1 (int *,int ,char*,int,int const,int) ;
 struct AVTWOFISH* FUNC_2 () ;
 int FUNC_3 (struct AVTWOFISH*,int*,int const*,int,int*,int) ;
 int FUNC_4 (struct AVTWOFISH*,int*,int const) ;
 int FUNC_5 (int*,...) ;
 int FUNC_6 (int*,int ,int) ;

int FUNC_7(int VAR_1, char *VAR_2[])
{
    uint8_t VAR_3[32] = {0x01, 0x23, 0x45, 0x67, 0x89, 0xab, 0xcd, 0xef, 0xfe, 0xdc, 0xba, 0x98, 0x76, 0x54, 0x32, 0x10, 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff
    };
    const uint8_t VAR_4[6][16] = {
        {0x9f, 0x58, 0x9f, 0x5c, 0xf6, 0x12, 0x2c, 0x32, 0xb6, 0xbf, 0xec, 0x2f, 0x2a, 0xe8, 0xc3, 0x5a},
        {0xcf, 0xd1, 0xd2, 0xe5, 0xa9, 0xbe, 0x9c, 0xdf, 0x50, 0x1f, 0x13, 0xb8, 0x92, 0xbd, 0x22, 0x48},
        {0x37, 0x52, 0x7b, 0xe0, 0x05, 0x23, 0x34, 0xb8, 0x9f, 0x0c, 0xfc, 0xca, 0xe8, 0x7c, 0xfa, 0x20},
        {0x5d, 0x9d, 0x4e, 0xef, 0xfa, 0x91, 0x51, 0x57, 0x55, 0x24, 0xf1, 0x15, 0x81, 0x5a, 0x12, 0xe0},
        {0xe7, 0x54, 0x49, 0x21, 0x2b, 0xee, 0xf9, 0xf4, 0xa3, 0x90, 0xbd, 0x86, 0x0a, 0x64, 0x09, 0x41},
        {0x37, 0xfe, 0x26, 0xff, 0x1c, 0xf6, 0x61, 0x75, 0xf5, 0xdd, 0xf4, 0xc3, 0x3b, 0x97, 0xa2, 0x05}
    };
    uint8_t VAR_5[32], VAR_6[16], VAR_7[32] = {0};
    const int VAR_8[3] = {128, 192, 256};
    int VAR_9, VAR_10, VAR_11 = 0;
    struct AVTWOFISH *VAR_12;
    VAR_12 = FUNC_2();
    if (!VAR_12)
        return 1;
    for (VAR_10 = 1; VAR_10 < 3; VAR_10++) {
        FUNC_4(VAR_12, VAR_3, VAR_8[VAR_10]);
        FUNC_3(VAR_12, VAR_5, VAR_7, 1, ((void*)0), 0);
        for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
            if (VAR_4[VAR_10][VAR_9] != VAR_5[VAR_9]) {
                FUNC_1(((void*)0), VAR_0, "%d %02x %02x\n", VAR_9, VAR_4[VAR_10][VAR_9], VAR_5[VAR_9]);
                VAR_11 = 1;
            }
        }
        FUNC_3(VAR_12, VAR_5, VAR_4[VAR_10], 1, ((void*)0), 1);
        for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
            if (VAR_7[VAR_9] != VAR_5[VAR_9]) {
                FUNC_1(((void*)0), VAR_0, "%d %02x %02x\n", VAR_9, VAR_7[VAR_9], VAR_5[VAR_9]);
                VAR_11 = 1;
            }
        }
    }
    for (VAR_10 = 0; VAR_10 < 3; VAR_10++) {
        FUNC_6(VAR_3, 0, sizeof(VAR_3));
        FUNC_6(VAR_7, 0, sizeof(VAR_7));
        for (VAR_9 = 1; VAR_9 < 50; VAR_9++) {
            FUNC_4(VAR_12, VAR_3, VAR_8[VAR_10]);
            FUNC_3(VAR_12, VAR_5, VAR_7, 1, ((void*)0), 0);
            FUNC_5(VAR_3+16,VAR_3,(VAR_8[VAR_10]-128) >> 3);
            FUNC_5(VAR_3,VAR_7,16);
            FUNC_5(VAR_7,VAR_5,16);
        }
        for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
            if (VAR_4[3 + VAR_10][VAR_9] != VAR_5[VAR_9]) {
                FUNC_1(((void*)0), VAR_0, "%d %02x %02x\n", VAR_9, VAR_4[3 + VAR_10][VAR_9], VAR_5[VAR_9]);
                VAR_11 = 1;
            }
        }
    }
    FUNC_6(VAR_7, 0, sizeof(VAR_7));
    FUNC_5(VAR_6, "HALLO123HALLO123", 16);
    FUNC_3(VAR_12, VAR_5, VAR_7, 2, VAR_6, 0);
    FUNC_5(VAR_6, "HALLO123HALLO123", 16);
    FUNC_3(VAR_12, VAR_5, VAR_5, 2, VAR_6, 1);
    for (VAR_9 = 0; VAR_9 < 32; VAR_9++) {
        if (VAR_7[VAR_9] != VAR_5[VAR_9]) {
            FUNC_1(((void*)0), VAR_0, "%d %02x %02x\n", VAR_9, VAR_7[VAR_9], VAR_5[VAR_9]);
            VAR_11 = 1;
        }
    }
    FUNC_0(VAR_12);
    return VAR_11;
}
