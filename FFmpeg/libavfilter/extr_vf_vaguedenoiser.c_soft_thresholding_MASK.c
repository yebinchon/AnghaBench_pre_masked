
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(float *VAR_0, const int VAR_1, const int VAR_2, const int VAR_3,
                              const float VAR_4, const float VAR_5, const int VAR_6)
{
    const float VAR_7 = 1.f - VAR_5 * 0.01f;
    const float VAR_8 = VAR_4 * 0.01f * VAR_5;
    int VAR_9 = VAR_1;
    int VAR_10 = VAR_2;
    int VAR_11, VAR_12, VAR_13;

    for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
        VAR_9 = (VAR_9 + 1) >> 1;
        VAR_10 = (VAR_10 + 1) >> 1;
    }

    for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
        const int VAR_14 = (VAR_11 < VAR_10) ? VAR_9 : 0;
        for (VAR_12 = VAR_14; VAR_12 < VAR_1; VAR_12++) {
            const float VAR_15 = FUNC_0(VAR_0[VAR_12]);
            if (VAR_15 <= VAR_4)
                VAR_0[VAR_12] *= VAR_7;
            else
                VAR_0[VAR_12] = (VAR_0[VAR_12] < 0.f ? -1.f : (VAR_0[VAR_12] > 0.f ? 1.f : 0.f)) * (VAR_15 - VAR_8);
        }
        VAR_0 += VAR_3;
    }
}
