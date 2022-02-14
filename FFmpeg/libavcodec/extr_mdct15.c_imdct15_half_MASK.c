
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_11__ {int nbits; int (* fft_calc ) (TYPE_4__*,int ) ;scalar_t__* revtab; } ;
struct TYPE_10__ {float const member_0; float const member_1; } ;
struct TYPE_9__ {int len4; int len2; int* pfa_prereindex; int pfa_postreindex; int * twiddle_exptab; scalar_t__ tmp; int (* postreindex ) (TYPE_2__*,scalar_t__,int *,int ,int) ;TYPE_4__ ptwo_fft; int exptab; int (* fft15 ) (scalar_t__,TYPE_2__*,int ,int) ;} ;
typedef TYPE_1__ MDCT15Context ;
typedef TYPE_2__ FFTComplex ;


 int FUNC_0 (TYPE_2__,TYPE_2__,int ) ;
 int FUNC_1 (scalar_t__,TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__,int *,int ,int) ;

__attribute__((used)) static void FUNC_4(MDCT15Context *VAR_0, float *VAR_1, const float *VAR_2,
                         ptrdiff_t VAR_3)
{
    FFTComplex VAR_4[15];
    FFTComplex *VAR_5 = (FFTComplex *)VAR_1;
    int VAR_6, VAR_7, VAR_8 = VAR_0->len4 >> 1, VAR_9 = 1 << VAR_0->ptwo_fft.nbits;
    const float *VAR_10 = VAR_2, *VAR_11 = VAR_2 + (VAR_0->len2 - 1) * VAR_3;


    for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
        for (VAR_7 = 0; VAR_7 < 15; VAR_7++) {
            const int VAR_12 = VAR_0->pfa_prereindex[VAR_6*15 + VAR_7];
            FFTComplex VAR_13 = { VAR_11[-VAR_12*VAR_3], VAR_10[VAR_12*VAR_3] };
            FUNC_0(VAR_4[VAR_7], VAR_13, VAR_0->twiddle_exptab[VAR_12 >> 1]);
        }
        VAR_0->fft15(VAR_0->tmp + VAR_0->ptwo_fft.revtab[VAR_6], VAR_4, VAR_0->exptab, VAR_9);
    }


    for (VAR_6 = 0; VAR_6 < 15; VAR_6++)
        VAR_0->ptwo_fft.fft_calc(&VAR_0->ptwo_fft, VAR_0->tmp + VAR_9*VAR_6);


    VAR_0->postreindex(VAR_5, VAR_0->tmp, VAR_0->twiddle_exptab, VAR_0->pfa_postreindex, VAR_8);
}
