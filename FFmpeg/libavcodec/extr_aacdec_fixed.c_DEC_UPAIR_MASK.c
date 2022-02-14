
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int *FUNC_0(int *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
    VAR_0[0] = (VAR_1 & 15) * (1 - (VAR_2 & 0xFFFFFFFE));
    VAR_0[1] = (VAR_1 >> 4 & 15) * (1 - ((VAR_2 & 1) * 2));

    return VAR_0 + 2;
}
