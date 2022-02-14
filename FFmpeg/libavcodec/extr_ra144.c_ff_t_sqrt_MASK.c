
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;

int FUNC_1(unsigned int VAR_0)
{
    int VAR_1 = 2;
    while (VAR_0 > 0xfff) {
        VAR_1++;
        VAR_0 >>= 2;
    }

    return FUNC_0(VAR_0 << 20) << VAR_1;
}
