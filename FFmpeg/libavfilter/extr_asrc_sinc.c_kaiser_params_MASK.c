
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 int FUNC_0 (float) ;
 float FUNC_1 (float,float) ;

__attribute__((used)) static void FUNC_2(float VAR_1, float VAR_2, float VAR_3, float *VAR_4, int *VAR_5)
{
    *VAR_4 = *VAR_4 < 0.f ? FUNC_1(VAR_1, VAR_3 * .5f / VAR_2): *VAR_4;
    VAR_1 = VAR_1 < 60.f ? (VAR_1 - 7.95f) / (2.285f * VAR_0 * 2.f) :
        ((.0007528358f-1.577737e-05 * *VAR_4) * *VAR_4 + 0.6248022f) * *VAR_4 + .06186902f;
    *VAR_5 = !*VAR_5 ? FUNC_0(VAR_1/VAR_3 + 1) : *VAR_5;
}
