
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* uint8_t ;


 int FUNC_0 (float*,float const*,int) ;
 int FUNC_1 (float*,float*,int) ;
 float* VAR_0 ;

__attribute__((used)) static const float *FUNC_2(float VAR_1[303], const float VAR_2[160],
                                   const float VAR_3[4], const uint8_t *VAR_4,
                                   const uint8_t VAR_5[4])
{
    int VAR_6, VAR_7;
    float *VAR_8, *VAR_9;
    const float *VAR_10;

    VAR_9 = VAR_1 + 143;

    for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
        if (VAR_3[VAR_6]) {
            VAR_8 = VAR_1 + 143 + 40 * VAR_6 - VAR_4[VAR_6];
            for (VAR_10 = VAR_2 + 40; VAR_2 < VAR_10; VAR_2++) {
                if (VAR_5[VAR_6]) {
                    for (VAR_7 = 0, *VAR_9 = 0.0; VAR_7 < 4; VAR_7++)
                        *VAR_9 += VAR_0[VAR_7] *
                                  (VAR_8[VAR_7 - 4] + VAR_8[3 - VAR_7]);
                } else
                    *VAR_9 = *VAR_8;

                *VAR_9 = *VAR_2 + VAR_3[VAR_6] * *VAR_9;

                VAR_8++;
                VAR_9++;
            }
        } else {
            FUNC_0(VAR_9, VAR_2, 40 * sizeof(float));
            VAR_2 += 40;
            VAR_9 += 40;
        }
    }

    FUNC_1(VAR_1, VAR_1 + 160, 143 * sizeof(float));
    return VAR_1 + 143;
}
