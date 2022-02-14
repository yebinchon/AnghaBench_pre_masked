
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, size_t VAR_1)
{
    uint8_t VAR_2;
    for (int VAR_3 = 0; VAR_3 < VAR_1/2; VAR_3++) {
        VAR_2 = VAR_0[VAR_3];
        VAR_0[VAR_3] = VAR_0[VAR_1 - VAR_3 - 1];
        VAR_0[VAR_1 - VAR_3 - 1] = VAR_2;
    }
}
