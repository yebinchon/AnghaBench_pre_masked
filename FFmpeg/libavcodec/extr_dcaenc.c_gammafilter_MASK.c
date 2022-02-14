
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double* VAR_0 ;
 double* VAR_1 ;
 int FUNC_0 (double) ;

__attribute__((used)) static double FUNC_1(int VAR_2, double VAR_3)
{
    double VAR_4 = (VAR_3 - VAR_1[VAR_2]) / VAR_0[VAR_2];

    VAR_4 = 1 + VAR_4 * VAR_4;
    VAR_4 = 1 / (VAR_4 * VAR_4);
    return 20 * FUNC_0(VAR_4);
}
