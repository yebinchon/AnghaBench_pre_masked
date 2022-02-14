
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float*,float const*,int) ;

__attribute__((used)) static void FUNC_1(float *VAR_2, const float VAR_3[VAR_1 + 1],
                          float VAR_4[VAR_1], const float *VAR_5)
{
    int VAR_6, VAR_7;
    float VAR_8[VAR_0 + VAR_1];

    FUNC_0(VAR_8, VAR_4, VAR_1 * sizeof(float));
    FUNC_0(VAR_8 + VAR_1, VAR_5, VAR_0 * sizeof(float));

    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        VAR_2[VAR_6] = 0.0;
        for (VAR_7 = 0; VAR_7 <= VAR_1; VAR_7++)
            VAR_2[VAR_6] += VAR_8[VAR_6 + VAR_7] * VAR_3[VAR_7];
    }

    FUNC_0(VAR_4, VAR_8 + VAR_0, VAR_1 * sizeof(float));
}
