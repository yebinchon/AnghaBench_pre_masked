
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_9__ {int im; int re; } ;
struct TYPE_8__ {int* revtab; int mdct_bits; int (* fft_calc ) (TYPE_2__*,TYPE_3__*) ;TYPE_3__* tmp_buf; int * tsin; int * tcos; } ;
struct TYPE_7__ {void* im; void* re; } ;
typedef int FFTSample ;
typedef void* FFTDouble ;
typedef TYPE_1__ FFTDComplex ;
typedef TYPE_2__ FFTContext ;
typedef TYPE_3__ FFTComplex ;


 int FUNC_0 (int ,int ,void*,void*,int const,int const) ;
 int FUNC_1 (void*,void*,int ,int ,int const,int const) ;
 void* FUNC_2 (int const,int const) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;

void FUNC_4(FFTContext *VAR_0, FFTDouble *VAR_1, const FFTSample *VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    FFTDouble VAR_10, VAR_11;
    const uint16_t *VAR_12 = VAR_0->revtab;
    const FFTSample *VAR_13 = VAR_0->tcos;
    const FFTSample *VAR_14 = VAR_0->tsin;
    FFTComplex *VAR_15 = VAR_0->tmp_buf;
    FFTDComplex *VAR_16 = (FFTDComplex *)VAR_1;

    VAR_5 = 1 << VAR_0->mdct_bits;
    VAR_8 = VAR_5 >> 1;
    VAR_7 = VAR_5 >> 2;
    VAR_6 = VAR_5 >> 3;
    VAR_9 = 3 * VAR_7;


    for(VAR_3=0;VAR_3<VAR_6;VAR_3++) {
        VAR_10 = FUNC_2(-VAR_2[2*VAR_3+VAR_9], - VAR_2[VAR_9-1-2*VAR_3]);
        VAR_11 = FUNC_2(-VAR_2[VAR_7+2*VAR_3], + VAR_2[VAR_7-1-2*VAR_3]);
        VAR_4 = VAR_12[VAR_3];
        FUNC_0(VAR_15[VAR_4].re, VAR_15[VAR_4].im, VAR_10, VAR_11, -VAR_13[VAR_3], VAR_14[VAR_3]);

        VAR_10 = FUNC_2( VAR_2[2*VAR_3] , - VAR_2[VAR_8-1-2*VAR_3]);
        VAR_11 = FUNC_2(-VAR_2[VAR_8+2*VAR_3], - VAR_2[ VAR_5-1-2*VAR_3]);
        VAR_4 = VAR_12[VAR_6 + VAR_3];
        FUNC_0(VAR_15[VAR_4].re, VAR_15[VAR_4].im, VAR_10, VAR_11, -VAR_13[VAR_6 + VAR_3], VAR_14[VAR_6 + VAR_3]);
    }

    VAR_0->fft_calc(VAR_0, VAR_15);


    for(VAR_3=0;VAR_3<VAR_6;VAR_3++) {
        FFTDouble VAR_17, VAR_18, VAR_19, VAR_20;
        FUNC_1(VAR_20, VAR_17, VAR_15[VAR_6-VAR_3-1].re, VAR_15[VAR_6-VAR_3-1].im, -VAR_14[VAR_6-VAR_3-1], -VAR_13[VAR_6-VAR_3-1]);
        FUNC_1(VAR_18, VAR_19, VAR_15[VAR_6+VAR_3 ].re, VAR_15[VAR_6+VAR_3 ].im, -VAR_14[VAR_6+VAR_3 ], -VAR_13[VAR_6+VAR_3 ]);
        VAR_16[VAR_6-VAR_3-1].re = VAR_17;
        VAR_16[VAR_6-VAR_3-1].im = VAR_18;
        VAR_16[VAR_6+VAR_3 ].re = VAR_19;
        VAR_16[VAR_6+VAR_3 ].im = VAR_20;
    }
}
