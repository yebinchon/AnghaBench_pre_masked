
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static double FUNC_0(double VAR_0)
{
    double VAR_1 = 0;

    if (VAR_0 <= -6)
        VAR_1 = VAR_0 + 1;
    else if(VAR_0 > -6 && VAR_0 < 6)
        VAR_1 = VAR_0 * 0.9;
    else if(VAR_0 >= 6)
        VAR_1 = VAR_0 - 1;

    return VAR_1;
}
