
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float const VAR_0 ;
 float FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(void **VAR_1, const void **VAR_2,
                       int VAR_3, int VAR_4,
                       float VAR_5)
{
    const float *VAR_6 = VAR_2[0];
    float *VAR_7 = VAR_1[0];
    int VAR_8, VAR_9;

    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
        for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
            float VAR_10 = VAR_6[VAR_9] * VAR_0;

            VAR_7[VAR_9] = FUNC_0(VAR_10 + VAR_5 * FUNC_0(VAR_10 * 4));
        }

        VAR_7 += VAR_9;
        VAR_6 += VAR_9;
    }
}
