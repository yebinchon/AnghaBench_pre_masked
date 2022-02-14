
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
    unsigned int VAR_3;

    VAR_3 = 0;
    while (VAR_0) {
        if (VAR_0 & 1)
            VAR_3 ^= VAR_1;
        VAR_0 = VAR_0 >> 1;
        VAR_1 = VAR_1 << 1;
        if (VAR_1 & (1 << 16))
            VAR_1 ^= VAR_2;
    }
    return VAR_3;
}
