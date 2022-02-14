
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



__attribute__((used)) static void FUNC_0(int16_t *VAR_0)
{
    int VAR_1;

    for (VAR_1 = 4; VAR_1 < 6; VAR_1++) {
        if (VAR_0[VAR_1] >= 44 && VAR_0[VAR_1] < 108) {
            VAR_0[VAR_1] += 64;
        } else if (VAR_0[VAR_1] >= 108 && VAR_0[VAR_1] < 128) {
            VAR_0[VAR_1] += 128;
        }
    }
}
