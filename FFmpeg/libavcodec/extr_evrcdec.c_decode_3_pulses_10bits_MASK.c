
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static void FUNC_0(uint16_t VAR_0, float *VAR_1)
{
    float VAR_2;
    int VAR_3;

    VAR_2 = (VAR_0 & 0x200) ? -1.0 : 1.0;

    VAR_3 = ((VAR_0 & 0x7) * 7) + 4;
    VAR_1[VAR_3] += VAR_2;
    VAR_3 = (((VAR_0 >> 3) & 0x7) * 7) + 2;
    VAR_1[VAR_3] -= VAR_2;
    VAR_3 = (((VAR_0 >> 6) & 0x7) * 7);
    VAR_1[VAR_3] += VAR_2;
}
