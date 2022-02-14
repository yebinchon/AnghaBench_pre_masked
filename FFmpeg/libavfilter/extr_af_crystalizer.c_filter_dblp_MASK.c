
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double,int,int) ;

__attribute__((used)) static void FUNC_1(void **VAR_0, void **VAR_1, const void **VAR_2,
                        int VAR_3, int VAR_4,
                        float VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
        const double *VAR_9 = VAR_2[VAR_8];
        double *VAR_10 = VAR_0[VAR_8];
        double *VAR_11 = VAR_1[VAR_8];

        for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
            double VAR_12 = VAR_9[VAR_7];

            VAR_10[VAR_7] = VAR_12 + (VAR_12 - VAR_11[0]) * VAR_5;
            VAR_11[0] = VAR_12;
            if (VAR_6) {
                VAR_10[VAR_7] = FUNC_0(VAR_10[VAR_7], -1, 1);
            }
        }
    }
}
