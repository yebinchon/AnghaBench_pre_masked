
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int *VAR_0, int VAR_1)
{
    unsigned int VAR_2, VAR_3;

    VAR_2 = *VAR_0;
    VAR_2 = (VAR_2 * 314159) + 1;
    if (VAR_1 == 256) {
        VAR_3 = VAR_2 >> 24;
    } else {
        VAR_3 = VAR_2 % VAR_1;
    }
    *VAR_0 = VAR_2;
    return VAR_3;
}
