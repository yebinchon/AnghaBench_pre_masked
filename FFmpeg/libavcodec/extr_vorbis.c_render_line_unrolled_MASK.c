
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int) ;
 float* VAR_0 ;

__attribute__((used)) static inline void FUNC_1(intptr_t VAR_1, int VAR_2, int VAR_3,
                                        intptr_t VAR_4, int VAR_5, int VAR_6,
                                        float *VAR_7)
{
    int VAR_8 = -VAR_6;
    VAR_1 -= VAR_3 - 1;
    VAR_7 += VAR_3 - 1;
    while (++VAR_1 < 0) {
        VAR_8 += VAR_5;
        if (VAR_8 >= 0) {
            VAR_8 += VAR_5 - VAR_6;
            VAR_2 += VAR_4;
            VAR_7[VAR_1++] = VAR_0[FUNC_0(VAR_2)];
        }
        VAR_7[VAR_1] = VAR_0[FUNC_0(VAR_2)];
    }
    if (VAR_1 <= 0) {
        if (VAR_8 + VAR_5 >= 0)
            VAR_2 += VAR_4;
        VAR_7[VAR_1] = VAR_0[FUNC_0(VAR_2)];
    }
}
