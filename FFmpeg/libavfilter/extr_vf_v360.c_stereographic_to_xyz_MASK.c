
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* flat_range; } ;
typedef TYPE_1__ V360Context ;


 int FUNC_0 (float*) ;

__attribute__((used)) static void FUNC_1(const V360Context *VAR_0,
                                 int VAR_1, int VAR_2, int VAR_3, int VAR_4,
                                 float *VAR_5)
{
    const float VAR_6 = ((2.f * VAR_1) / VAR_3 - 1.f) * VAR_0->flat_range[0];
    const float VAR_7 = ((2.f * VAR_2) / VAR_4 - 1.f) * VAR_0->flat_range[1];
    const float VAR_8 = VAR_6 * VAR_6 + VAR_7 * VAR_7;

    VAR_5[0] = 2.f * VAR_6 / (1.f + VAR_8);
    VAR_5[1] = (-1.f + VAR_8) / (1.f + VAR_8);
    VAR_5[2] = 2.f * VAR_7 / (1.f + VAR_8);

    FUNC_0(VAR_5);
}
