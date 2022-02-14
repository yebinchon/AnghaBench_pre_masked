
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;

__attribute__((used)) static inline double FUNC_1(double VAR_0)
{
    double VAR_1, VAR_2 = -0.60;

    VAR_0 = FUNC_0(VAR_0);

    if (VAR_0 < 1.0)
        VAR_1 = (1.0 - (VAR_2 + 3.0) * VAR_0 * VAR_0 + (VAR_2 + 2.0) * VAR_0 * VAR_0 * VAR_0);
    else if (VAR_0 < 2.0)
        VAR_1 = (-4.0 * VAR_2 + 8.0 * VAR_2 * VAR_0 - 5.0 * VAR_2 * VAR_0 * VAR_0 + VAR_2 * VAR_0 * VAR_0 * VAR_0);
    else
        VAR_1 = 0.0;

    return VAR_1;
}
