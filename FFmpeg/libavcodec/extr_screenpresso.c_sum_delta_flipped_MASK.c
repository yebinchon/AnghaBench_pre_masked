
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, int VAR_1,
                              const uint8_t *VAR_2, int VAR_3,
                              int VAR_4, int VAR_5)
{
    int VAR_6;
    for (; VAR_5 > 0; VAR_5--) {
        for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
            VAR_0[VAR_6] += VAR_2[(VAR_5 - 1) * VAR_3 + VAR_6];
        VAR_0 += VAR_1;
    }
}
