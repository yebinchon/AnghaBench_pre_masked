
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {float* interpolation_coeffs; } ;
typedef TYPE_1__ EVRCContext ;


 int FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(EVRCContext *VAR_0, float *VAR_1, float VAR_2)
{
    float *VAR_3;
    int VAR_4, VAR_5, VAR_6;
    int16_t VAR_7;

    VAR_4 = FUNC_0(VAR_2);

    VAR_7 = (VAR_4 - VAR_2 + 0.5) * 8.0 + 0.5;
    if (VAR_7 == 8) {
        VAR_7 = 0;
        VAR_4--;
    }

    VAR_3 = VAR_1 - VAR_4 - 8;

    VAR_6 = VAR_7 * (2 * 8 + 1);

    VAR_1[0] = 0.0;
    for (VAR_5 = 0; VAR_5 < 2 * 8 + 1; VAR_5++)
        VAR_1[0] += VAR_0->interpolation_coeffs[VAR_6 + VAR_5] * VAR_3[VAR_5];
}
