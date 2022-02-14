
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;

int FUNC_2(int32_t *VAR_5, const uint8_t **VAR_6, const uint8_t *VAR_7,
                   unsigned int VAR_8)
{
    const uint8_t *VAR_9 = *VAR_6;
    uint32_t VAR_10;
    uint64_t VAR_11;
    int VAR_12 = 0, VAR_13;
    uint32_t VAR_14[6] = {
        0x00000000, 0x00000080, 0x00000800, 0x00010000, 0x00200000, 0x04000000,
    };

    if (VAR_9 >= VAR_7)
        return 0;

    VAR_11 = *VAR_9++;



    if ((VAR_11 & 0xc0) == 0x80 || VAR_11 >= 0xFE) {
        VAR_12 = FUNC_0(VAR_4);
        goto end;
    }
    VAR_10 = (VAR_11 & 128) >> 1;

    VAR_13 = 0;
    while (VAR_11 & VAR_10) {
        int VAR_15;
        VAR_13++;
        if (VAR_9 >= VAR_7) {
            (*VAR_6) ++;
            return FUNC_0(VAR_4);
        }


        VAR_15 = *VAR_9++ - 128;
        if (VAR_15>>6) {
            (*VAR_6) ++;
            return FUNC_0(VAR_4);
        }
        VAR_11 = (VAR_11<<6) + VAR_15;
        VAR_10 <<= 5;
    }
    VAR_11 &= (VAR_10 << 1) - 1;


    FUNC_1(VAR_13 <= 5);
    if (VAR_11 < VAR_14[VAR_13]) {
        VAR_12 = FUNC_0(VAR_4);
        goto end;
    }

    if (VAR_11 >= 1U<<31) {
        VAR_12 = FUNC_0(VAR_4);
        goto end;
    }

    *VAR_5 = VAR_11;

    if (VAR_11 > 0x10FFFF &&
        !(VAR_8 & VAR_0))
        VAR_12 = FUNC_0(VAR_4);
    if (VAR_11 < 0x20 && VAR_11 != 0x9 && VAR_11 != 0xA && VAR_11 != 0xD &&
        VAR_8 & VAR_3)
        VAR_12 = FUNC_0(VAR_4);
    if (VAR_11 >= 0xD800 && VAR_11 <= 0xDFFF &&
        !(VAR_8 & VAR_2))
        VAR_12 = FUNC_0(VAR_4);
    if ((VAR_11 == 0xFFFE || VAR_11 == 0xFFFF) &&
        !(VAR_8 & VAR_1))
        VAR_12 = FUNC_0(VAR_4);

end:
    *VAR_6 = VAR_9;
    return VAR_12;
}
