
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, const char *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    VAR_0 += VAR_4*VAR_2 + VAR_3*3;
    for (VAR_5 = 0; VAR_1[VAR_5]; VAR_5++, VAR_0 += 3) {
        VAR_0[0] = 0x0;
        VAR_0[1] = VAR_1[VAR_5];
        VAR_0[2] = 0x0f;
    }
}
