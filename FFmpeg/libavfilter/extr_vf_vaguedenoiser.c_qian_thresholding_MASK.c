
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(float *VAR_0, const int VAR_1, const int VAR_2,
                              const int VAR_3, const float VAR_4,
                              const float VAR_5, const int VAR_6)
{
    const float VAR_7 = VAR_5 * 0.01f;
    const float VAR_8 = VAR_4 * VAR_4 * VAR_7;
    const float VAR_9 = 1.f - VAR_7;
    int VAR_10, VAR_11;

    for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
        for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
            const float VAR_12 = FUNC_0(VAR_0[VAR_11]);
            if (VAR_12 <= VAR_4) {
                VAR_0[VAR_11] *= VAR_9;
            } else {
                const float VAR_13 = VAR_12 * VAR_12;
                VAR_0[VAR_11] *= (VAR_13 - VAR_8) / VAR_13;
            }
        }
        VAR_0 += VAR_3;
    }
}
