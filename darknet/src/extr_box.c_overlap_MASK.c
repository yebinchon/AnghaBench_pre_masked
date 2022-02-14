
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
float FUNC_0(float VAR_0, float VAR_1, float VAR_2, float VAR_3)
{
    float VAR_4 = VAR_0 - VAR_1/2;
    float VAR_5 = VAR_2 - VAR_3/2;
    float VAR_6 = VAR_4 > VAR_5 ? VAR_4 : VAR_5;
    float VAR_7 = VAR_0 + VAR_1/2;
    float VAR_8 = VAR_2 + VAR_3/2;
    float VAR_9 = VAR_7 < VAR_8 ? VAR_7 : VAR_8;
    return VAR_9 - VAR_6;
}
