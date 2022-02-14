
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static inline void FUNC_1(int16_t *VAR_0, int16_t *VAR_1, int16_t *VAR_2,
                         int VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6;
    int16_t VAR_7, VAR_8;
    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
        VAR_7 = (VAR_1[VAR_6] - VAR_2[VAR_6])/2;
        VAR_8 = (VAR_1[VAR_6] + VAR_2[VAR_6])/2;
        VAR_0[VAR_6] = FUNC_0(VAR_7, 10);
        VAR_0[VAR_6 + VAR_4] = FUNC_0(VAR_8, 10);
    }
}
