
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const float VAR_1, const float *VAR_2, const int VAR_3)
{
    int VAR_4, VAR_5 = 0;
    float VAR_6 = VAR_0;
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        float VAR_7 = (VAR_1 - VAR_2[VAR_4])*(VAR_1 - VAR_2[VAR_4]);
        if (VAR_7 < VAR_6) {
            VAR_6 = VAR_7;
            VAR_5 = VAR_4;
        }
    }
    return VAR_5;
}
