
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (char*,unsigned char*,int,int) ;
 int FUNC_2 (unsigned char*,char const*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char const*) ;

void
FUNC_5(char VAR_1[41], char VAR_2[9],
                                  const char *VAR_3)
{
    int VAR_4 = FUNC_4 (VAR_3), VAR_5;
    unsigned char VAR_6[16],
        VAR_7[64] = { 0xa1, 0xe9, 0x14, 0x9d, 0x0e, 0x6b, 0x3b, 0x59 };

    static const unsigned char VAR_8[37] = {
        0x05, 0x18, 0x74, 0xd0, 0x0d, 0x09, 0x02, 0x53,
        0xc0, 0x01, 0x05, 0x05, 0x67, 0x03, 0x19, 0x70,
        0x08, 0x27, 0x66, 0x10, 0x10, 0x72, 0x08, 0x09,
        0x63, 0x11, 0x03, 0x71, 0x08, 0x08, 0x70, 0x02,
        0x10, 0x57, 0x05, 0x18, 0x54 };


    if (VAR_4 == 40)
        VAR_4 = 32;
    else if (VAR_4 > 56)
        VAR_4 = 56;
    FUNC_2(VAR_7 + 8, VAR_3, VAR_4);


    for (VAR_5 = 0; VAR_5 < 37; VAR_5++)
        VAR_7[8 + VAR_5] ^= VAR_8[VAR_5];

    FUNC_0(VAR_6, VAR_7, 64);
    FUNC_1(VAR_1, VAR_6, 16, 1);


    FUNC_3 (VAR_1 + 32, "01d0a8e3");


    for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
        VAR_2[VAR_5] = VAR_1[VAR_5 * 4];
    VAR_2[8] = 0;
}
