
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*,float*,int,int,int,int,int,double const* const*) ;

__attribute__((used)) static void FUNC_1(float *VAR_0, float *VAR_1, int VAR_2,
                    const double *VAR_3, int VAR_4, int VAR_5,
                    int VAR_6, int VAR_7, const double * const *VAR_8)
{
    int VAR_9;
    int VAR_10;
    int VAR_11, VAR_12;

    VAR_9 = (VAR_2 - VAR_4) / VAR_5 + 1;
    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    VAR_10 = VAR_4 - 1;

    for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
        float VAR_13 = VAR_0[VAR_6 + VAR_11];
        int VAR_14 = (VAR_2 - 1) & VAR_10;

        if (VAR_14 < VAR_4) {
            const double *VAR_15 = VAR_3;
            for (VAR_12 = VAR_14; VAR_12 >= 0; VAR_12--)
                VAR_1[VAR_12] += VAR_13 * *VAR_15++;
            for (VAR_12 = 0; VAR_12 < VAR_4 - VAR_14 - 1; VAR_12++)
                VAR_1[VAR_2 - VAR_12 - 1] += VAR_13 * VAR_3[VAR_14 + 1 + VAR_12];
        } else {
            for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
                VAR_1[VAR_14 - VAR_12] += VAR_13 * VAR_3[VAR_12];
        }
        VAR_10 = VAR_14 + VAR_5;
    }
}
