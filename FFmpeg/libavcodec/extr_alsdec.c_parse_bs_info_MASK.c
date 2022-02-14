
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;



__attribute__((used)) static void FUNC_0(const uint32_t VAR_0, unsigned int VAR_1,
                          unsigned int VAR_2, unsigned int **VAR_3,
                          unsigned int *VAR_4)
{
    if (VAR_1 < 31 && ((VAR_0 << VAR_1) & 0x40000000)) {


        VAR_1 *= 2;
        VAR_2 += 1;
        FUNC_0(VAR_0, VAR_1 + 1, VAR_2, VAR_3, VAR_4);
        FUNC_0(VAR_0, VAR_1 + 2, VAR_2, VAR_3, VAR_4);
    } else {


        **VAR_3 = VAR_2;
        (*VAR_3)++;
        (*VAR_4)++;
    }
}
