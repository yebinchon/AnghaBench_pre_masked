
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float FUNC_0 (float) ;

__attribute__((used)) static inline void FUNC_1(int VAR_1, int VAR_2, float VAR_3, float VAR_4,
                           float *VAR_5, float *VAR_6, int VAR_7)
{
    if (VAR_1 && VAR_2 < VAR_4) {
        *VAR_5 = VAR_2 < VAR_3 ? 1.f : .5f*(1.f+FUNC_0(VAR_0*(VAR_3-VAR_2)/(VAR_3-VAR_4)));
        *VAR_5 *= *VAR_6;
        if (VAR_7)
            *VAR_6 -= *VAR_5;
    } else {
        *VAR_5 = 0.f;
    }
}
