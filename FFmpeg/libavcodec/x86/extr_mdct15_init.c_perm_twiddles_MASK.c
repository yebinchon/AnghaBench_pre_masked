
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int member_1; int re; int member_0; int im; } ;
struct TYPE_6__ {TYPE_2__* exptab; } ;
typedef TYPE_1__ MDCT15Context ;
typedef TYPE_2__ FFTComplex ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_1(MDCT15Context *VAR_0)
{
    int VAR_1;
    FFTComplex VAR_2[30];


    VAR_0->exptab[60].re = VAR_0->exptab[60].im = VAR_0->exptab[19].re;
    VAR_0->exptab[61].re = VAR_0->exptab[61].im = VAR_0->exptab[19].im;
    VAR_0->exptab[62].re = VAR_0->exptab[62].im = VAR_0->exptab[20].re;
    VAR_0->exptab[63].re = VAR_0->exptab[63].im = VAR_0->exptab[20].im;


    for (VAR_1 = 0; VAR_1 < 5; VAR_1++) {
        VAR_2[6*VAR_1 + 0] = VAR_0->exptab[VAR_1 + 0];
        VAR_2[6*VAR_1 + 2] = VAR_0->exptab[VAR_1 + 5];
        VAR_2[6*VAR_1 + 4] = VAR_0->exptab[VAR_1 + 10];

        VAR_2[6*VAR_1 + 1] = VAR_0->exptab[2 * (VAR_1 + 0)];
        VAR_2[6*VAR_1 + 3] = VAR_0->exptab[2 * (VAR_1 + 5)];
        VAR_2[6*VAR_1 + 5] = VAR_0->exptab[2 * VAR_1 + 5 ];
    }

    for (VAR_1 = 0; VAR_1 < 6; VAR_1++) {
        FFTComplex VAR_3[] = {
            { VAR_2[6*1 + VAR_1].re, VAR_2[6*1 + VAR_1].re },
            { VAR_2[6*2 + VAR_1].re, VAR_2[6*2 + VAR_1].re },
            { VAR_2[6*3 + VAR_1].re, VAR_2[6*3 + VAR_1].re },
            { VAR_2[6*4 + VAR_1].re, VAR_2[6*4 + VAR_1].re },
            { VAR_2[6*1 + VAR_1].im, -VAR_2[6*1 + VAR_1].im },
            { VAR_2[6*2 + VAR_1].im, -VAR_2[6*2 + VAR_1].im },
            { VAR_2[6*3 + VAR_1].im, -VAR_2[6*3 + VAR_1].im },
            { VAR_2[6*4 + VAR_1].im, -VAR_2[6*4 + VAR_1].im },
        };
        FUNC_0(VAR_0->exptab + 8*VAR_1, VAR_3, 8*sizeof(FFTComplex));
    }


    for (VAR_1 = 0; VAR_1 < 3; VAR_1++) {
        FFTComplex VAR_4[] = {
            { VAR_2[2*VAR_1 + 0].re, -VAR_2[2*VAR_1 + 0].im },
            { VAR_2[2*VAR_1 + 0].im, VAR_2[2*VAR_1 + 0].re },
            { VAR_2[2*VAR_1 + 1].re, -VAR_2[2*VAR_1 + 1].im },
            { VAR_2[2*VAR_1 + 1].im, VAR_2[2*VAR_1 + 1].re },
        };
        FUNC_0(VAR_0->exptab + 8*6 + 4*VAR_1, VAR_4, 4*sizeof(FFTComplex));
    }
}
