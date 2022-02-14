
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static uint64_t FUNC_1(uint8_t *VAR_1)
{
    uint64_t VAR_2 = VAR_0, VAR_3 = 0x42F0E1EBA9EA3693U;
    uint8_t *VAR_4 = VAR_1 + FUNC_0(VAR_1);
    int VAR_5;

    while (VAR_1 < VAR_4) {
        VAR_2 ^= (uint64_t)*VAR_1++ << 56;
        for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
            VAR_2 = (VAR_2 << 1) ^ (VAR_3 & (((int64_t) VAR_2) >> 63));
    }

    return VAR_2 ^ VAR_0;
}
