
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(const uint8_t *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    VAR_1 += VAR_2;
    VAR_0 += VAR_2 * 2;
    VAR_2 = -VAR_2;
    while (VAR_2 < 0) {
        VAR_1[VAR_2] = VAR_0[2 * VAR_2];
        VAR_2++;
    }
}
