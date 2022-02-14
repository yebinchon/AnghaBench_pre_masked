
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float const) ;
 float FUNC_1 (float) ;

__attribute__((used)) static inline void FUNC_2(float *VAR_0, const float *VAR_1, const int VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        float VAR_4 = FUNC_0(VAR_1[VAR_3]);
        VAR_0[VAR_3] = FUNC_1(VAR_4 * FUNC_1(VAR_4));
    }
}
