
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int FUNC_0 (int const,int) ;

__attribute__((used)) static void FUNC_1(int16_t *VAR_0, const int16_t *VAR_1,
                                 const int16_t *VAR_2, unsigned int VAR_3)
{
    int VAR_4;
    int VAR_5 = VAR_3 >> 1;

    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
        int16_t VAR_6 = VAR_2[VAR_4];
        VAR_0[VAR_4] = (FUNC_0(VAR_1[VAR_4], VAR_6) + (1 << 14)) >> 15;
        VAR_0[VAR_3-VAR_4-1] = (FUNC_0(VAR_1[VAR_3-VAR_4-1], VAR_6) + (1 << 14)) >> 15;
    }
}
