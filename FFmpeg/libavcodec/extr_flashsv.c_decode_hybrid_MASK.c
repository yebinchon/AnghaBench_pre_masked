
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int**,int ) ;

__attribute__((used)) static int FUNC_2(const uint8_t *VAR_1, const uint8_t *VAR_2, uint8_t *VAR_3, int VAR_4, int VAR_5,
                         int VAR_6, int VAR_7, int VAR_8, const uint32_t *VAR_9)
{
    int VAR_10, VAR_11;
    const uint8_t *VAR_12 = VAR_1;

    for (VAR_11 = VAR_4 + VAR_6; VAR_11 > VAR_4; VAR_11--) {
        uint8_t *VAR_13 = VAR_3 + (VAR_11 * VAR_8) + VAR_5 * 3;
        for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
            if (VAR_1 >= VAR_2)
                return VAR_0;
            if (*VAR_1 & 0x80) {

                unsigned VAR_14 = FUNC_0(VAR_1) & ~0x8000;
                unsigned VAR_15 = VAR_14 & 0x1F;
                unsigned VAR_16 = (VAR_14 >> 5) & 0x1F;
                unsigned VAR_17 = VAR_14 >> 10;

                *VAR_13++ = (VAR_15 << 3) | (VAR_15 >> 2);
                *VAR_13++ = (VAR_16 << 3) | (VAR_16 >> 2);
                *VAR_13++ = (VAR_17 << 3) | (VAR_17 >> 2);
                VAR_1 += 2;
            } else {

                uint32_t VAR_18 = VAR_9[*VAR_1++];
                FUNC_1(&VAR_13, VAR_18);
            }
        }
    }
    return VAR_1 - VAR_12;
}
