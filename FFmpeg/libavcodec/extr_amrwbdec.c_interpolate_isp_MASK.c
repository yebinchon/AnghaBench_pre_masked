
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 float* VAR_1 ;

__attribute__((used)) static void FUNC_0(double VAR_2[4][VAR_0], const double *VAR_3)
{
    int VAR_4, VAR_5;

    for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
        float VAR_6 = VAR_1[VAR_5];
        for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
            VAR_2[VAR_5][VAR_4] = (1.0 - VAR_6) * VAR_3[VAR_4] + VAR_6 * VAR_2[3][VAR_4];
    }
}
