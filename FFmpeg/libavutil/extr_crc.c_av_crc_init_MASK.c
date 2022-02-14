
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long uint32_t ;
typedef int int32_t ;
typedef int AVCRC ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (long long) ;

int FUNC_2(AVCRC *VAR_1, int VAR_2, int VAR_3, uint32_t VAR_4, int VAR_5)
{
    unsigned VAR_6, VAR_7;
    uint32_t VAR_8;

    if (VAR_3 < 8 || VAR_3 > 32 || VAR_4 >= (1LL << VAR_3))
        return FUNC_0(VAR_0);
    if (VAR_5 != sizeof(AVCRC) * 257 && VAR_5 != sizeof(AVCRC) * 1024)
        return FUNC_0(VAR_0);

    for (VAR_6 = 0; VAR_6 < 256; VAR_6++) {
        if (VAR_2) {
            for (VAR_8 = VAR_6, VAR_7 = 0; VAR_7 < 8; VAR_7++)
                VAR_8 = (VAR_8 >> 1) ^ (VAR_4 & (-(VAR_8 & 1)));
            VAR_1[VAR_6] = VAR_8;
        } else {
            for (VAR_8 = VAR_6 << 24, VAR_7 = 0; VAR_7 < 8; VAR_7++)
                VAR_8 = (VAR_8 << 1) ^ ((VAR_4 << (32 - VAR_3)) & (((int32_t) VAR_8) >> 31));
            VAR_1[VAR_6] = FUNC_1(VAR_8);
        }
    }
    VAR_1[256] = 1;

    if (VAR_5 >= sizeof(AVCRC) * 1024)
        for (VAR_6 = 0; VAR_6 < 256; VAR_6++)
            for (VAR_7 = 0; VAR_7 < 3; VAR_7++)
                VAR_1[256 * (VAR_7 + 1) + VAR_6] =
                    (VAR_1[256 * VAR_7 + VAR_6] >> 8) ^ VAR_1[VAR_1[256 * VAR_7 + VAR_6] & 0xFF];


    return 0;
}
