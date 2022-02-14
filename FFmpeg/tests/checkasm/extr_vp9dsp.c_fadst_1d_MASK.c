
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 double const FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(double *VAR_1, const double *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        VAR_1[VAR_4] = 0.0;
        for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
            VAR_1[VAR_4] += VAR_2[VAR_5] * FUNC_0(VAR_0 * (2 * VAR_5 + 1) * (2 * VAR_4 + 1) / (VAR_3 * 4.0));
    }
}
