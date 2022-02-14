
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(double *VAR_0, int VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_1 - 1; VAR_2++) {
        for (int VAR_3 = VAR_2 + 1; VAR_3 < VAR_1; VAR_3++) {
            double VAR_4 = VAR_0[VAR_3 + VAR_2 * VAR_1] / VAR_0[VAR_2 + VAR_2 * VAR_1];

            VAR_0[VAR_3 + VAR_2 * VAR_1] = VAR_4;
            for (int VAR_5 = VAR_2 + 1; VAR_5 < VAR_1; VAR_5++) {
                VAR_0[VAR_3 + VAR_5 * VAR_1] -= VAR_4 * VAR_0[VAR_2 + VAR_5 * VAR_1];
            }
        }
    }
}
