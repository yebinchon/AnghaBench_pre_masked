
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float r; float g; float b; } ;
struct TYPE_8__ {TYPE_1__ rgb; } ;
struct TYPE_7__ {float re; float im; } ;
typedef TYPE_2__ FFTComplex ;
typedef TYPE_3__ ColorFloat ;


 int FUNC_0 (float,float) ;
 float FUNC_1 (int ,float) ;

__attribute__((used)) static void FUNC_2(ColorFloat *VAR_0, const FFTComplex *VAR_1, float VAR_2, int VAR_3, float VAR_4[6])
{
    int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        VAR_0[VAR_5].rgb.r = 255.0f * FUNC_1(FUNC_0(1.0f, VAR_4[0] * VAR_1[VAR_5].re + VAR_4[3] * VAR_1[VAR_5].im), VAR_2);
        VAR_0[VAR_5].rgb.g = 255.0f * FUNC_1(FUNC_0(1.0f, VAR_4[1] * VAR_1[VAR_5].re + VAR_4[4] * VAR_1[VAR_5].im), VAR_2);
        VAR_0[VAR_5].rgb.b = 255.0f * FUNC_1(FUNC_0(1.0f, VAR_4[2] * VAR_1[VAR_5].re + VAR_4[5] * VAR_1[VAR_5].im), VAR_2);
    }
}
