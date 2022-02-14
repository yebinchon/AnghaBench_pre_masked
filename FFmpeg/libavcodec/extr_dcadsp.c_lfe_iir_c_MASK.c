
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;



__attribute__((used)) static void FUNC_0(float *VAR_0, const float *VAR_1,
                      const float VAR_2[5][4], float VAR_3[5][2],
                      ptrdiff_t VAR_4)
{
    float VAR_5, VAR_6;
    int VAR_7, VAR_8, VAR_9;

    for (VAR_7 = 0; VAR_7 < 64; VAR_7++) {
        VAR_5 = *VAR_1++;

        for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
            for (VAR_9 = 0; VAR_9 < 5; VAR_9++) {
                VAR_6 = VAR_3[VAR_9][0] * VAR_2[VAR_9][0] + VAR_3[VAR_9][1] * VAR_2[VAR_9][1] + VAR_5;
                VAR_5 = VAR_3[VAR_9][0] * VAR_2[VAR_9][2] + VAR_3[VAR_9][1] * VAR_2[VAR_9][3] + VAR_6;

                VAR_3[VAR_9][0] = VAR_3[VAR_9][1];
                VAR_3[VAR_9][1] = VAR_6;
            }

            *VAR_0++ = VAR_5;
            VAR_5 = 0;
        }
    }
}
