
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static float FUNC_0(int VAR_0, float VAR_1[2])
{
    float VAR_2;

    VAR_2 = 0.7548f * (VAR_0 - VAR_1[0]) + 0.5095f * VAR_1[1];
    VAR_1[0] = VAR_0;
    VAR_1[1] = VAR_2;
    return VAR_2;
}
