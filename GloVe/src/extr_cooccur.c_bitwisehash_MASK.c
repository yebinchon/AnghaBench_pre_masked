
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned int FUNC_0(char *VAR_0, int VAR_1, unsigned int VAR_2) {
    char VAR_3;
    unsigned int VAR_4;
    VAR_4 = VAR_2;
    for (; (VAR_3 =* VAR_0) != '\0'; VAR_0++) VAR_4 ^= ((VAR_4 << 5) + VAR_3 + (VAR_4 >> 2));
    return((unsigned int)((VAR_4&0x7fffffff) % VAR_1));
}
