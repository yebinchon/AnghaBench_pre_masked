
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(int *VAR_0, int VAR_1)
{
    int VAR_2;

    if (VAR_1 == 0)
        return;
    VAR_1 = FUNC_0(VAR_1);
    VAR_2 = 1;
    while (VAR_1 != 0) {
        VAR_2++;
        VAR_1 >>= 1;
    }
    if (VAR_2 > *VAR_0)
        *VAR_0 = VAR_2;
}
