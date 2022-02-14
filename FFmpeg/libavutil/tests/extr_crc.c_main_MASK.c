
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int buf ;
typedef int AVCRC ;
 int FUNC_0 (int const*,int ,int*,int) ;
 int * FUNC_1 (unsigned int const) ;
 int FUNC_2 (char*,unsigned int const,int) ;

int FUNC_3(void)
{
    uint8_t VAR_0[1999];
    int VAR_1;
    static const unsigned VAR_2[7][3] = {
        { 130, 0xEDB88320, 0x3D5CDD04 },
        { 131 , 0x04C11DB7, 0xC0F5BAE0 },
        { 132 , 0x864CFB , 0xB704CE },
        { 133, 0xA001 , 0xBFD8 },
        { 134 , 0x8005 , 0x1FBB },
        { 129 , 0x07 , 0xE3 },
        { 128 , 0x1D , 0xD6 },
    };
    const AVCRC *VAR_3;

    for (VAR_1 = 0; VAR_1 < sizeof(VAR_0); VAR_1++)
        VAR_0[VAR_1] = VAR_1 + VAR_1 * VAR_1;

    for (VAR_1 = 0; VAR_1 < 7; VAR_1++) {
        VAR_3 = FUNC_1(VAR_2[VAR_1][0]);
        FUNC_2("crc %08X = %X\n", VAR_2[VAR_1][1], FUNC_0(VAR_3, 0, VAR_0, sizeof(VAR_0)));
    }
    return 0;
}
