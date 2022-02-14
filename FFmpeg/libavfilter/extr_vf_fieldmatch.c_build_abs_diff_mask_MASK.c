
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static void FUNC_1(const uint8_t *VAR_0, int VAR_1,
                                const uint8_t *VAR_2, int VAR_3,
                                uint8_t *VAR_4, int VAR_5,
                                int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9;

    VAR_0 -= VAR_1;
    VAR_2 -= VAR_3;
    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
        for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
            VAR_4[VAR_9] = FUNC_0(VAR_0[VAR_9] - VAR_2[VAR_9]);
        VAR_0 += VAR_1;
        VAR_2 += VAR_3;
        VAR_4 += VAR_5;
    }
}
