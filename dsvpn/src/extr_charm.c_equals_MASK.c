
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(const unsigned char VAR_0[16], const unsigned char VAR_1[16], size_t VAR_2)
{
    unsigned char VAR_3 = 0;
    size_t VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        VAR_3 |= VAR_0[VAR_4] ^ VAR_1[VAR_4];
    }
    return 1 & ((VAR_3 - 1) >> 8);
}
