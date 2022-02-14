
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double const FUNC_0 (double,double) ;

__attribute__((used)) static double FUNC_1(double VAR_0)
{
    const double VAR_1 = 1.055;
    const double VAR_2 = 0.0031308;

    return (0.0 > VAR_0) ? 0.0
         : ( VAR_2 > VAR_0) ? 12.92 * VAR_0
         : VAR_1 * FUNC_0(VAR_0, 1.0 / 2.4) - (VAR_1 - 1.0);
}
