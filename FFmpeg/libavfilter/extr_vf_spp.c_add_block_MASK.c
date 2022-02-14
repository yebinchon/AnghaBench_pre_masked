
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int int16_t ;



__attribute__((used)) static inline void FUNC_0(uint16_t *VAR_0, int VAR_1, const int16_t VAR_2[64])
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
        *(uint32_t *)&VAR_0[0 + VAR_3*VAR_1] += *(uint32_t *)&VAR_2[0 + VAR_3*8];
        *(uint32_t *)&VAR_0[2 + VAR_3*VAR_1] += *(uint32_t *)&VAR_2[2 + VAR_3*8];
        *(uint32_t *)&VAR_0[4 + VAR_3*VAR_1] += *(uint32_t *)&VAR_2[4 + VAR_3*8];
        *(uint32_t *)&VAR_0[6 + VAR_3*VAR_1] += *(uint32_t *)&VAR_2[6 + VAR_3*8];
    }
}
