
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double) ;
 double FUNC_1 (double,double) ;

__attribute__((used)) static double FUNC_2(double VAR_0)
{
    double VAR_1 = VAR_0 / 1000;

    return -3.64 * FUNC_1(VAR_1, -0.8)
           + 6.8 * FUNC_0(-0.6 * (VAR_1 - 3.4) * (VAR_1 - 3.4))
           - 6.0 * FUNC_0(-0.15 * (VAR_1 - 8.7) * (VAR_1 - 8.7))
           - 0.0006 * (VAR_1 * VAR_1) * (VAR_1 * VAR_1);
}
