
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static double FUNC_0(double VAR_0, double VAR_1)
{
    if (VAR_0 > 1.0)
        return (VAR_1 * VAR_0 - 1.0) / (VAR_1 + VAR_0 - 2.0);
    if (VAR_0 < 1.0)
        return (VAR_1 * VAR_0 - 2.0 * VAR_0 + 1.0) / (VAR_1 - VAR_0);
    return 1.0;
}
