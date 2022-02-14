
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static float FUNC_0(float VAR_0, float VAR_1)
{
    float VAR_2;
    asm volatile (
        "wfr f0, %1\n"
        "wfr f1, %2\n"
        "add.s f2, f0, f1\n"
        "rfr %0, f2\n"
        :"=r"(VAR_2):"r"(VAR_0), "r"(VAR_1)
    );
    return VAR_2;
}
