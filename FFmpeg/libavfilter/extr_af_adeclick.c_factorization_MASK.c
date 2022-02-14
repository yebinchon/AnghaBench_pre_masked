
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(double *VAR_0, int VAR_1)
{
    int VAR_2, VAR_3, VAR_4;

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        const int VAR_5 = VAR_2 * VAR_1;
        double VAR_6;

        VAR_6 = VAR_0[VAR_5 + VAR_2];
        for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
            VAR_6 -= VAR_0[VAR_3 * VAR_1 + VAR_3] * VAR_0[VAR_5 + VAR_3] * VAR_0[VAR_5 + VAR_3];

        if (VAR_6 == 0.) {
            return -1;
        }

        VAR_0[VAR_5 + VAR_2] = VAR_6;
        for (VAR_3 = VAR_2 + 1; VAR_3 < VAR_1; VAR_3++) {
            const int VAR_7 = VAR_3 * VAR_1;
            double VAR_8;

            VAR_8 = VAR_0[VAR_7 + VAR_2];
            for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
                VAR_8 -= VAR_0[VAR_4 * VAR_1 + VAR_4] * VAR_0[VAR_5 + VAR_4] * VAR_0[VAR_7 + VAR_4];
            VAR_0[VAR_7 + VAR_2] = VAR_8 / VAR_0[VAR_5 + VAR_2];
        }
    }

    return 0;
}
