
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



__attribute__((used)) static const uint8_t *FUNC_0(const uint8_t *VAR_0, const uint8_t *VAR_1)
{
    const uint8_t *VAR_2 = VAR_0 + 4 - ((intptr_t)VAR_0 & 3);

    for (VAR_1 -= 3; VAR_0 < VAR_2 && VAR_0 < VAR_1; VAR_0++) {
        if (VAR_0[0] == 0 && VAR_0[1] == 0 && VAR_0[2] == 1)
            return VAR_0;
    }

    for (VAR_1 -= 3; VAR_0 < VAR_1; VAR_0 += 4) {
        uint32_t VAR_3 = *(const uint32_t*)VAR_0;


        if ((VAR_3 - 0x01010101) & (~VAR_3) & 0x80808080) {
            if (VAR_0[1] == 0) {
                if (VAR_0[0] == 0 && VAR_0[2] == 1)
                    return VAR_0;
                if (VAR_0[2] == 0 && VAR_0[3] == 1)
                    return VAR_0+1;
            }
            if (VAR_0[3] == 0) {
                if (VAR_0[2] == 0 && VAR_0[4] == 1)
                    return VAR_0+2;
                if (VAR_0[4] == 0 && VAR_0[5] == 1)
                    return VAR_0+3;
            }
        }
    }

    for (VAR_1 += 3; VAR_0 < VAR_1; VAR_0++) {
        if (VAR_0[0] == 0 && VAR_0[1] == 0 && VAR_0[2] == 1)
            return VAR_0;
    }

    return VAR_1 + 3;
}
