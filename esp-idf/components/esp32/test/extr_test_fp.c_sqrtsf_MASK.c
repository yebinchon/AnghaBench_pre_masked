
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static float FUNC_0(float VAR_0)
{
    float VAR_1;
    asm volatile (
        "wfr f0, %1\n"
        "sqrt0.s f2, f0\n"
        "const.s f5, 0\n"
        "maddn.s f5, f2, f2\n"
        "nexp01.s f3, f0\n"
        "const.s f4, 3\n"
        "addexp.s f3, f4\n"
        "maddn.s f4, f5, f3\n"
        "nexp01.s f5, f0\n"
        "neg.s f6, f5\n"
        "maddn.s f2, f4, f2\n"
        "const.s f1, 0\n"
        "const.s f4, 0\n"
        "const.s f7, 0\n"
        "maddn.s f1, f6, f2\n"
        "maddn.s f4, f2, f3\n"
        "const.s f6, 3\n"
        "maddn.s f7, f6, f2\n"
        "maddn.s f5, f1, f1\n"
        "maddn.s f6, f4, f2\n"
        "neg.s f3, f7\n"
        "maddn.s f1, f5, f3\n"
        "maddn.s f7, f6, f7\n"
        "mksadj.s f2, f0\n"
        "nexp01.s f5, f0\n"
        "maddn.s f5, f1, f1\n"
        "neg.s f3, f7\n"
        "addexpm.s f1, f2\n"
        "addexp.s f3, f2\n"
        "divn.s f1, f5, f3\n"
        "rfr %0, f1\n"
        :"=r"(VAR_1):"r"(VAR_0)
    );
    return VAR_1;
}
