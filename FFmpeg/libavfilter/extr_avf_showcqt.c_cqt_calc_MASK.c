
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int len; int* val; int start; } ;
struct TYPE_6__ {int re; int im; int member_1; int member_0; } ;
typedef int FFTSample ;
typedef TYPE_1__ FFTComplex ;
typedef TYPE_2__ Coeffs ;



__attribute__((used)) static void FUNC_0(FFTComplex *VAR_0, const FFTComplex *VAR_1, const Coeffs *VAR_2,
                     int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8;
    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        FFTComplex VAR_9, VAR_10, VAR_11 = {0,0}, VAR_12 = {0,0};

        for (VAR_6 = 0; VAR_6 < VAR_2[VAR_5].len; VAR_6++) {
            FFTSample VAR_13 = VAR_2[VAR_5].val[VAR_6];
            VAR_7 = VAR_2[VAR_5].start + VAR_6;
            VAR_8 = VAR_4 - VAR_7;
            VAR_11.re += VAR_13 * VAR_1[VAR_7].re;
            VAR_11.im += VAR_13 * VAR_1[VAR_7].im;
            VAR_12.re += VAR_13 * VAR_1[VAR_8].re;
            VAR_12.im += VAR_13 * VAR_1[VAR_8].im;
        }


        VAR_9.re = VAR_11.re + VAR_12.re;
        VAR_9.im = VAR_11.im - VAR_12.im;
        VAR_10.re = VAR_12.im + VAR_11.im;
        VAR_10.im = VAR_12.re - VAR_11.re;
        VAR_0[VAR_5].re = VAR_9.re * VAR_9.re + VAR_9.im * VAR_9.im;
        VAR_0[VAR_5].im = VAR_10.re * VAR_10.re + VAR_10.im * VAR_10.im;
    }
}
