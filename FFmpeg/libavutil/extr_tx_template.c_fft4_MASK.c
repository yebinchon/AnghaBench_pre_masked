
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int im; int re; } ;
typedef int FFTSample ;
typedef TYPE_1__ FFTComplex ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(FFTComplex *VAR_0)
{
    FFTSample VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

    FUNC_0(VAR_3, VAR_1, VAR_0[0].re, VAR_0[1].re);
    FUNC_0(VAR_8, VAR_6, VAR_0[3].re, VAR_0[2].re);
    FUNC_0(VAR_0[2].re, VAR_0[0].re, VAR_1, VAR_6);
    FUNC_0(VAR_4, VAR_2, VAR_0[0].im, VAR_0[1].im);
    FUNC_0(VAR_7, VAR_5, VAR_0[2].im, VAR_0[3].im);
    FUNC_0(VAR_0[3].im, VAR_0[1].im, VAR_4, VAR_8);
    FUNC_0(VAR_0[3].re, VAR_0[1].re, VAR_3, VAR_7);
    FUNC_0(VAR_0[2].im, VAR_0[0].im, VAR_2, VAR_5);
}
