
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double const VAR_0 ;
 float FUNC_0 (double) ;

__attribute__((used)) static void FUNC_1(void **VAR_1, const void **VAR_2,
                        int VAR_3, int VAR_4,
                        float VAR_5)
{
    int VAR_6, VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        const double *VAR_8 = VAR_2[VAR_7];
        double *VAR_9 = VAR_1[VAR_7];

        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
            double VAR_10 = VAR_8[VAR_6] * VAR_0;

            VAR_9[VAR_6] = FUNC_0(VAR_10 + VAR_5 * FUNC_0(VAR_10 * 4));
        }
    }
}
