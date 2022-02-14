
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float y; float u; float v; } ;
struct TYPE_8__ {TYPE_1__ yuv; } ;
struct TYPE_7__ {float re; float im; } ;
typedef TYPE_2__ FFTComplex ;
typedef TYPE_3__ ColorFloat ;


 int FUNC_0 (float,float) ;
 float FUNC_1 (int ,float) ;

__attribute__((used)) static void FUNC_2(ColorFloat *VAR_0, const FFTComplex *VAR_1, float VAR_2, int VAR_3, float VAR_4[3][3], float VAR_5[6])
{
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
        float VAR_7, VAR_8, VAR_9;
        VAR_7 = FUNC_1(FUNC_0(1.0f, VAR_5[0] * VAR_1[VAR_6].re + VAR_5[3] * VAR_1[VAR_6].im), VAR_2);
        VAR_8 = FUNC_1(FUNC_0(1.0f, VAR_5[1] * VAR_1[VAR_6].re + VAR_5[4] * VAR_1[VAR_6].im), VAR_2);
        VAR_9 = FUNC_1(FUNC_0(1.0f, VAR_5[2] * VAR_1[VAR_6].re + VAR_5[5] * VAR_1[VAR_6].im), VAR_2);
        VAR_0[VAR_6].yuv.y = VAR_4[0][0] * VAR_7 + VAR_4[0][1] * VAR_8 + VAR_4[0][2] * VAR_9;
        VAR_0[VAR_6].yuv.u = VAR_4[1][0] * VAR_7 + VAR_4[1][1] * VAR_8 + VAR_4[1][2] * VAR_9;
        VAR_0[VAR_6].yuv.v = VAR_4[2][0] * VAR_7 + VAR_4[2][1] * VAR_8 + VAR_4[2][2] * VAR_9;
    }
}
