
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int8_t ;
typedef int AVCRC ;


 int FUNC_0 (int const*,int,int const*,size_t) ;

uint8_t FUNC_1(const AVCRC *VAR_0, const uint8_t *VAR_1, size_t VAR_2)
{
    size_t VAR_3 = VAR_2 >> 3;
    int VAR_4 = VAR_2 & 7;
    uint8_t VAR_5;

    VAR_5 = FUNC_0(VAR_0, 0x0F, VAR_1, VAR_3);

    if (VAR_4) {
        uint8_t VAR_6 = VAR_1[VAR_3];
        while (VAR_4--) {
            int8_t VAR_7 = VAR_6 ^ VAR_5;
            VAR_5 = (VAR_5 << 1) ^ ((VAR_7 >> 7) & 0x1D);
            VAR_6 <<= 1;
        }
    }

    return VAR_5;
}
