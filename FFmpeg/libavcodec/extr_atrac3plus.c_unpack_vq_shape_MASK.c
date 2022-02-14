
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int8_t ;


 int* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(int VAR_1, const int8_t *VAR_2,
                                   int *VAR_3, int VAR_4)
{
    int VAR_5;

    if (VAR_4) {
        VAR_3[0] = VAR_3[1] = VAR_3[2] = VAR_1;
        for (VAR_5 = 3; VAR_5 < VAR_4; VAR_5++)
            VAR_3[VAR_5] = VAR_1 - VAR_2[VAR_0[VAR_5] - 1];
    }
}
