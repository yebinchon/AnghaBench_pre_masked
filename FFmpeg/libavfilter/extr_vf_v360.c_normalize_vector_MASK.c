
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(float *VAR_0)
{
    const float VAR_1 = FUNC_0(VAR_0[0] * VAR_0[0] + VAR_0[1] * VAR_0[1] + VAR_0[2] * VAR_0[2]);

    VAR_0[0] /= VAR_1;
    VAR_0[1] /= VAR_1;
    VAR_0[2] /= VAR_1;
}
