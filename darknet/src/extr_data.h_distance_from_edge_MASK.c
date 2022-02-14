
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline float FUNC_0(int VAR_0, int VAR_1)
{
    int VAR_2 = (VAR_1/2) - VAR_0;
    if (VAR_2 < 0) VAR_2 = -VAR_2;
    VAR_2 = (VAR_1/2) + 1 - VAR_2;
    VAR_2 *= 2;
    float VAR_3 = (float)VAR_2/VAR_1;
    if (VAR_3 > 1) VAR_3 = 1;
    return VAR_3;
}
