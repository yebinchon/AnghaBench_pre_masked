
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float) ;
 int FUNC_1 (float) ;
 float VAR_0 ;
 int FUNC_2 (float) ;

__attribute__((used)) static float FUNC_3(float *VAR_1, int *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6 = 0;
    float VAR_7 = 0.0f, VAR_8 = 0.0f;

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
        VAR_7 += FUNC_0(VAR_1[VAR_5]);

    VAR_7 = VAR_3/(VAR_7 + VAR_0);

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        VAR_2[VAR_5] = FUNC_2(VAR_7*VAR_1[VAR_5]);
        VAR_6 += VAR_2[VAR_5]*VAR_2[VAR_5];
        VAR_8 += VAR_2[VAR_5]*VAR_1[VAR_5];
        VAR_3 -= FUNC_0(VAR_2[VAR_5]);
    }

    while (VAR_3) {
        int VAR_9 = 0, VAR_10 = FUNC_1(VAR_3);
        float VAR_11 = 0.0f;
        float VAR_12 = 1.0f;
        VAR_6 += 1.0f;

        for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {



            const int VAR_13 = 1 ^ ((VAR_2[VAR_5] == 0) & (VAR_10 < 0));
            const int VAR_14 = VAR_6 + 2*VAR_10*FUNC_0(VAR_2[VAR_5]);
            float VAR_15 = VAR_8 + 1*VAR_10*FUNC_0(VAR_1[VAR_5]);
            VAR_15 = VAR_15 * VAR_15;
            if (VAR_13 && (VAR_12*VAR_15) > (VAR_14*VAR_11)) {
                VAR_12 = VAR_14;
                VAR_11 = VAR_15;
                VAR_9 = VAR_5;
            }
        }

        VAR_3 -= VAR_10;

        VAR_10 *= FUNC_1(VAR_1[VAR_9]);
        VAR_8 += 1*VAR_10*VAR_1[VAR_9];
        VAR_6 += 2*VAR_10*VAR_2[VAR_9];
        VAR_2[VAR_9] += VAR_10;
    }

    return (float)VAR_6;
}
