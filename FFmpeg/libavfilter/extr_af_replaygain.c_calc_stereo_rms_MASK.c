
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (double) ;

__attribute__((used)) static double FUNC_1(const float *VAR_0, int VAR_1)
{
    int VAR_2 = VAR_1;
    double VAR_3 = 1e-16;

    while (VAR_2--) {
        VAR_3 += VAR_0[0] * VAR_0[0] + VAR_0[1] * VAR_0[1];
        VAR_0 += 2;
    }

    return 10 * FUNC_0 (VAR_3 / VAR_1) + 90.0 - 3.0;
}
