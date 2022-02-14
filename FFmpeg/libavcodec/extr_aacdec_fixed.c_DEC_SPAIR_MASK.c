
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int *FUNC_0(int *VAR_0, unsigned VAR_1)
{
    VAR_0[0] = (VAR_1 & 15) - 4;
    VAR_0[1] = (VAR_1 >> 4 & 15) - 4;

    return VAR_0 + 2;
}
