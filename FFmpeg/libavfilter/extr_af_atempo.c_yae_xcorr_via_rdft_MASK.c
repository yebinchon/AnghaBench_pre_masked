
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int re; int im; } ;
typedef int RDFTContext ;
typedef int FFTSample ;
typedef TYPE_1__ FFTComplex ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(FFTSample *VAR_0,
                               RDFTContext *VAR_1,
                               const FFTComplex *VAR_2,
                               const FFTComplex *VAR_3,
                               const int VAR_4)
{
    FFTComplex *VAR_5 = (FFTComplex *)VAR_0;
    int VAR_6;





    VAR_5->re = VAR_2->re * VAR_3->re;
    VAR_5->im = VAR_2->im * VAR_3->im;
    VAR_2++;
    VAR_3++;
    VAR_5++;

    for (VAR_6 = 1; VAR_6 < VAR_4; VAR_6++, VAR_2++, VAR_3++, VAR_5++) {
        VAR_5->re = (VAR_2->re * VAR_3->re + VAR_2->im * VAR_3->im);
        VAR_5->im = (VAR_2->im * VAR_3->re - VAR_2->re * VAR_3->im);
    }


    FUNC_0(VAR_1, VAR_0);
}
