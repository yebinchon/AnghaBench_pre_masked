
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, void *VAR_2, unsigned VAR_3, int VAR_4, unsigned *VAR_5)
{
    unsigned *VAR_6 = VAR_1;
    unsigned *VAR_7 = VAR_2;
    unsigned VAR_8 = *VAR_5;

    VAR_3 >>= 2;

    while (VAR_3 > 0) {
        *VAR_7 = *VAR_6 ^ (VAR_0 ? FUNC_0(VAR_8) : VAR_8);
        VAR_8 += VAR_4;
        VAR_6++;
        VAR_7++;
        VAR_3--;
    }

    *VAR_5 = VAR_8;
}
