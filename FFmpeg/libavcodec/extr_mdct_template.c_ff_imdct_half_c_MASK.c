
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {void* re; void* im; } ;
struct TYPE_6__ {int* revtab; void** tcos; void** tsin; int mdct_bits; int (* fft_calc ) (TYPE_1__*,TYPE_2__*) ;} ;
typedef void* FFTSample ;
typedef TYPE_1__ FFTContext ;
typedef TYPE_2__ FFTComplex ;


 int FUNC_0 (void*,void*,void* const,void* const,void* const,void* const) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;

void FUNC_2(FFTContext *VAR_0, FFTSample *VAR_1, const FFTSample *VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    const uint16_t *VAR_9 = VAR_0->revtab;
    const FFTSample *VAR_10 = VAR_0->tcos;
    const FFTSample *VAR_11 = VAR_0->tsin;
    const FFTSample *VAR_12, *VAR_13;
    FFTComplex *VAR_14 = (FFTComplex *)VAR_1;

    VAR_7 = 1 << VAR_0->mdct_bits;
    VAR_6 = VAR_7 >> 1;
    VAR_5 = VAR_7 >> 2;
    VAR_4 = VAR_7 >> 3;


    VAR_12 = VAR_2;
    VAR_13 = VAR_2 + VAR_6 - 1;
    for(VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
        VAR_8=VAR_9[VAR_3];
        FUNC_0(VAR_14[VAR_8].re, VAR_14[VAR_8].im, *VAR_13, *VAR_12, VAR_10[VAR_3], VAR_11[VAR_3]);
        VAR_12 += 2;
        VAR_13 -= 2;
    }
    VAR_0->fft_calc(VAR_0, VAR_14);


    for(VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
        FFTSample VAR_15, VAR_16, VAR_17, VAR_18;
        FUNC_0(VAR_15, VAR_18, VAR_14[VAR_4-VAR_3-1].im, VAR_14[VAR_4-VAR_3-1].re, VAR_11[VAR_4-VAR_3-1], VAR_10[VAR_4-VAR_3-1]);
        FUNC_0(VAR_17, VAR_16, VAR_14[VAR_4+VAR_3 ].im, VAR_14[VAR_4+VAR_3 ].re, VAR_11[VAR_4+VAR_3 ], VAR_10[VAR_4+VAR_3 ]);
        VAR_14[VAR_4-VAR_3-1].re = VAR_15;
        VAR_14[VAR_4-VAR_3-1].im = VAR_16;
        VAR_14[VAR_4+VAR_3 ].re = VAR_17;
        VAR_14[VAR_4+VAR_3 ].im = VAR_18;
    }
}
