
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 double VAR_1 ;
 double const FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(double *VAR_2, const double *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        VAR_2[VAR_5] = 0.0;
        for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
            VAR_2[VAR_5] += VAR_3[VAR_6] * FUNC_0(VAR_0 * (2 * VAR_6 + 1) * VAR_5 / (VAR_4 * 2.0));
    }
    VAR_2[0] *= VAR_1;
}
