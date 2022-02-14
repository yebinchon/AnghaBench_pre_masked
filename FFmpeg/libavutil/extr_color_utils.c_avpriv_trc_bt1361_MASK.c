
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 double const FUNC_0 (double,double) ;

__attribute__((used)) static double FUNC_1(double VAR_2)
{
    const double VAR_3 = VAR_0;
    const double VAR_4 = VAR_1;

    return (-0.0045 >= VAR_2) ? -(VAR_3 * FUNC_0(-4.0 * VAR_2, 0.45) + (VAR_3 - 1.0)) / 4.0
         : ( VAR_4 > VAR_2) ? 4.500 * VAR_2
         : VAR_3 * FUNC_0( VAR_2, 0.45) - (VAR_3 - 1.0);
}
