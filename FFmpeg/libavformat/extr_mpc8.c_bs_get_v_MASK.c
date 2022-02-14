
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int int64_t ;



__attribute__((used)) static inline int64_t FUNC_0(const uint8_t **VAR_0)
{
    uint64_t VAR_1 = 0;
    int VAR_2 = 0;
    int VAR_3;

    do {
        VAR_3 = **VAR_0; (*VAR_0)++;
        VAR_1 <<= 7;
        VAR_1 |= VAR_3 & 0x7F;
        VAR_2++;
        if (VAR_2 > 10)
            return -1;
    } while (VAR_3 & 0x80);

    return VAR_1 - VAR_2;
}
