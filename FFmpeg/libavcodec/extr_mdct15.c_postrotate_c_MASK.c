
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ptrdiff_t ;
struct TYPE_5__ {int re; int im; } ;
typedef TYPE_1__ FFTComplex ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(FFTComplex *VAR_0, FFTComplex *VAR_1, FFTComplex *VAR_2,
                         int *VAR_3, ptrdiff_t VAR_4)
{
    int VAR_5;


    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        const int VAR_6 = VAR_4 + VAR_5, VAR_7 = VAR_4 - VAR_5 - 1;
        const int VAR_8 = VAR_3[VAR_6], VAR_9 = VAR_3[VAR_7];

        FUNC_0(VAR_0[VAR_7].re, VAR_0[VAR_6].im, VAR_1[VAR_9].im, VAR_1[VAR_9].re, VAR_2[VAR_7].im, VAR_2[VAR_7].re);
        FUNC_0(VAR_0[VAR_6].re, VAR_0[VAR_7].im, VAR_1[VAR_8].im, VAR_1[VAR_8].re, VAR_2[VAR_6].im, VAR_2[VAR_6].re);
    }
}
