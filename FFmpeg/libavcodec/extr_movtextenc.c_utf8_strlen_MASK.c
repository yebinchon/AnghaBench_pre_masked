
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static uint16_t FUNC_0(const char *VAR_0, int VAR_1)
{
    uint16_t VAR_2 = 0, VAR_3 = 0;
    while (VAR_2 < VAR_1) {
        char VAR_4 = VAR_0[VAR_2];
        if ((VAR_4 & 0x80) == 0)
            VAR_2 += 1;
        else if ((VAR_4 & 0xE0) == 0xC0)
            VAR_2 += 2;
        else if ((VAR_4 & 0xF0) == 0xE0)
            VAR_2 += 3;
        else if ((VAR_4 & 0xF8) == 0xF0)
            VAR_2 += 4;
        else
            return 0;
        VAR_3++;
    }
    return VAR_3;
}
