
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static void FUNC_0(uint64_t VAR_0[2], const uint64_t VAR_1[2], int VAR_2)
{
    int VAR_3 = 0;
    if (64 <= VAR_2 && VAR_2 < 128) {
        VAR_3 = 1;
        VAR_2 -= 64;
    }
    if (VAR_2 <= 0 || VAR_2 >= 128) {
        VAR_0[0] = VAR_1[VAR_3];
        VAR_0[1] = VAR_1[!VAR_3];
        return;
    }
    VAR_0[0] = (VAR_1[VAR_3] << VAR_2 | VAR_1[!VAR_3] >> (64 - VAR_2));
    VAR_0[1] = (VAR_1[!VAR_3] << VAR_2 | VAR_1[VAR_3] >> (64 - VAR_2));
}
