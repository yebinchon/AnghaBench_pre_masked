
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(
    float *VAR_0,
    float VAR_1, float VAR_2, float VAR_3, float VAR_4, char VAR_5)
{
    float *VAR_6 = VAR_0;
    float VAR_7 = 0.0625;
    float VAR_8 = VAR_7;
    float VAR_9 = VAR_7 * 2;
    int VAR_10 = VAR_5 - 32;
    float VAR_11 = (VAR_10 % 16) * VAR_8;
    float VAR_12 = 1 - (VAR_10 / 16) * VAR_9 - VAR_9;
    *(VAR_6++) = VAR_1 - VAR_3; *(VAR_6++) = VAR_2 - VAR_4;
    *(VAR_6++) = VAR_11 + 0; *(VAR_6++) = VAR_12;
    *(VAR_6++) = VAR_1 + VAR_3; *(VAR_6++) = VAR_2 - VAR_4;
    *(VAR_6++) = VAR_11 + VAR_8; *(VAR_6++) = VAR_12;
    *(VAR_6++) = VAR_1 + VAR_3; *(VAR_6++) = VAR_2 + VAR_4;
    *(VAR_6++) = VAR_11 + VAR_8; *(VAR_6++) = VAR_12 + VAR_9;
    *(VAR_6++) = VAR_1 - VAR_3; *(VAR_6++) = VAR_2 - VAR_4;
    *(VAR_6++) = VAR_11 + 0; *(VAR_6++) = VAR_12;
    *(VAR_6++) = VAR_1 + VAR_3; *(VAR_6++) = VAR_2 + VAR_4;
    *(VAR_6++) = VAR_11 + VAR_8; *(VAR_6++) = VAR_12 + VAR_9;
    *(VAR_6++) = VAR_1 - VAR_3; *(VAR_6++) = VAR_2 + VAR_4;
    *(VAR_6++) = VAR_11 + 0; *(VAR_6++) = VAR_12 + VAR_9;
}
