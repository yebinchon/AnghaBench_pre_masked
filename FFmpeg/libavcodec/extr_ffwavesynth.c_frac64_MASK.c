
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static uint64_t FUNC_0(uint64_t VAR_0, uint64_t VAR_1)
{
    uint64_t VAR_2 = 0;
    int VAR_3;

    if (VAR_1 < (uint64_t)1 << 32) {
        VAR_0 <<= 32;
        return ((VAR_0 / VAR_1) << 32) | ((VAR_0 % VAR_1) << 32) / VAR_1;
    }
    if (VAR_1 < (uint64_t)1 << 48) {
        for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
            VAR_0 <<= 16;
            VAR_2 = (VAR_2 << 16) | (VAR_0 / VAR_1);
            VAR_0 %= VAR_1;
        }
        return VAR_2;
    }
    for (VAR_3 = 63; VAR_3 >= 0; VAR_3--) {
        if (VAR_0 >= (uint64_t)1 << 63 || VAR_0 << 1 >= VAR_1) {
            VAR_2 |= (uint64_t)1 << VAR_3;
            VAR_0 = (VAR_0 << 1) - VAR_1;
        } else {
            VAR_0 <<= 1;
        }
    }
    return VAR_2;
}
