
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(double *VAR_0, double *VAR_1, int VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < VAR_2 - 1; VAR_3++) {
        for (int VAR_4 = VAR_3 + 1; VAR_4 < VAR_2; VAR_4++) {
            double VAR_5 = VAR_0[VAR_4 + VAR_3 * VAR_2];
            VAR_1[VAR_4] -= VAR_5 * VAR_1[VAR_3];
        }
    }

    VAR_1[VAR_2 - 1] /= VAR_0[VAR_2 * VAR_2 - 1];

    for (int VAR_6 = VAR_2 - 2; VAR_6 >= 0; VAR_6--) {
        double VAR_7 = VAR_1[VAR_6];
        for (int VAR_8 = VAR_6 + 1; VAR_8 < VAR_2; VAR_8++)
            VAR_7 -= VAR_0[VAR_6 + VAR_8 * VAR_2] * VAR_1[VAR_8];
        VAR_1[VAR_6] = VAR_7 / VAR_0[VAR_6 + VAR_6 * VAR_2];
    }
}
