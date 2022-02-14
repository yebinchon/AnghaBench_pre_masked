
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(uint32_t *VAR_2, uint32_t VAR_3)
{
    uint32_t VAR_4, VAR_5, VAR_6 = *VAR_2;

    VAR_4 = VAR_0;
    VAR_5 = VAR_1;
    while (VAR_3) {
        if (VAR_3 & 1)
            VAR_6 = VAR_4 * VAR_6 + VAR_5;
        VAR_5 *= VAR_4 + 1;
        VAR_4 *= VAR_4;
        VAR_3 >>= 1;
    }
    *VAR_2 = VAR_6;
}
