
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int*,int,int const*,int) ;
 int* VAR_0 ;

uint8_t FUNC_1(const uint8_t *VAR_1, unsigned int VAR_2)
{
    int VAR_3;
    int VAR_4 = (VAR_2 + 2) / 8;

    int VAR_5 = VAR_0[VAR_1[0] & 0x3f];
    VAR_5 = FUNC_0(VAR_0, VAR_5, VAR_1 + 1, VAR_4 - 2);
    VAR_5 ^= VAR_1[VAR_4 - 1];

    for (VAR_3 = 0; VAR_3 < ((VAR_2 + 2) & 7); VAR_3++) {
        VAR_5 <<= 1;
        if (VAR_5 & 0x100)
            VAR_5 ^= 0x11D;
        VAR_5 ^= (VAR_1[VAR_4] >> (7 - VAR_3)) & 1;
    }

    return VAR_5;
}
