
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_11__ {scalar_t__ im; scalar_t__ re; } ;
typedef TYPE_1__ FFTComplex ;


 int FUNC_0 (TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(FFTComplex *VAR_0, FFTComplex *VAR_1, FFTComplex *VAR_2, ptrdiff_t VAR_3)
{
    int VAR_4;
    FFTComplex VAR_5[5], VAR_6[5], VAR_7[5];

    FUNC_1(VAR_5, VAR_1 + 0, VAR_2 + 19);
    FUNC_1(VAR_6, VAR_1 + 1, VAR_2 + 19);
    FUNC_1(VAR_7, VAR_1 + 2, VAR_2 + 19);

    for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {
        FFTComplex VAR_8[2];

        FUNC_0(VAR_8[0], VAR_6[VAR_4], VAR_2[VAR_4]);
        FUNC_0(VAR_8[1], VAR_7[VAR_4], VAR_2[2 * VAR_4]);
        VAR_0[VAR_3*VAR_4].re = VAR_5[VAR_4].re + VAR_8[0].re + VAR_8[1].re;
        VAR_0[VAR_3*VAR_4].im = VAR_5[VAR_4].im + VAR_8[0].im + VAR_8[1].im;

        FUNC_0(VAR_8[0], VAR_6[VAR_4], VAR_2[VAR_4 + 5]);
        FUNC_0(VAR_8[1], VAR_7[VAR_4], VAR_2[2 * (VAR_4 + 5)]);
        VAR_0[VAR_3*(VAR_4 + 5)].re = VAR_5[VAR_4].re + VAR_8[0].re + VAR_8[1].re;
        VAR_0[VAR_3*(VAR_4 + 5)].im = VAR_5[VAR_4].im + VAR_8[0].im + VAR_8[1].im;

        FUNC_0(VAR_8[0], VAR_6[VAR_4], VAR_2[VAR_4 + 10]);
        FUNC_0(VAR_8[1], VAR_7[VAR_4], VAR_2[2 * VAR_4 + 5]);
        VAR_0[VAR_3*(VAR_4 + 10)].re = VAR_5[VAR_4].re + VAR_8[0].re + VAR_8[1].re;
        VAR_0[VAR_3*(VAR_4 + 10)].im = VAR_5[VAR_4].im + VAR_8[0].im + VAR_8[1].im;
    }
}
