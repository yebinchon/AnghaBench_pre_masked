
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float,float const) ;

__attribute__((used)) static inline float FUNC_1(int VAR_0, int VAR_1, const float *VAR_2)
{
    float VAR_3 = 0.0f;
    int VAR_4, VAR_5;
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
            VAR_3 = FUNC_0(VAR_3, VAR_2[VAR_4*128+VAR_5]);
        }
    }
    return VAR_3;
}
