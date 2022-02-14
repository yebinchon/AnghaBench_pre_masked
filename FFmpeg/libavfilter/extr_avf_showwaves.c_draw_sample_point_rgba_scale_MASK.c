
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int int16_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, int VAR_1, int VAR_2,
                                         int16_t *VAR_3,
                                         const uint8_t VAR_4[4], int VAR_5)
{
    if (VAR_5 >= 0 && VAR_5 < VAR_1) {
        VAR_0[VAR_5 * VAR_2 + 0] += VAR_4[0];
        VAR_0[VAR_5 * VAR_2 + 1] += VAR_4[1];
        VAR_0[VAR_5 * VAR_2 + 2] += VAR_4[2];
        VAR_0[VAR_5 * VAR_2 + 3] += VAR_4[3];
    }
}
