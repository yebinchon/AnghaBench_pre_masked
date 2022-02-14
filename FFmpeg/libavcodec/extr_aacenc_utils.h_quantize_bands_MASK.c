
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (float,float) ;

__attribute__((used)) static inline void FUNC_1(int *VAR_0, const float *VAR_1, const float *VAR_2,
                                  int VAR_3, int VAR_4, int VAR_5, const float VAR_6,
                                  const float VAR_7)
{
    int VAR_8;
    for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
        float VAR_9 = VAR_2[VAR_8] * VAR_6;
        int VAR_10 = (int)FUNC_0(VAR_9 + VAR_7, (float)VAR_5);
        if (VAR_4 && VAR_1[VAR_8] < 0.0f) {
            VAR_10 = -VAR_10;
        }
        VAR_0[VAR_8] = VAR_10;
    }
}
