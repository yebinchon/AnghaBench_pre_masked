
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int *FUNC_0(int *VAR_0, unsigned VAR_1)
{
    VAR_0[0] = (VAR_1 & 3) - 1;
    VAR_0[1] = (VAR_1 >> 2 & 3) - 1;
    VAR_0[2] = (VAR_1 >> 4 & 3) - 1;
    VAR_0[3] = (VAR_1 >> 6 & 3) - 1;

    return VAR_0 + 4;
}
