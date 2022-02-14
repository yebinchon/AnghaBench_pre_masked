
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* fft_permute ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ FFTContext ;
typedef int FFTComplex ;


 int FUNC_0 (TYPE_1__*,int *) ;

void FUNC_1(FFTContext *VAR_0, FFTComplex *VAR_1)
{
    VAR_0->fft_permute(VAR_0, VAR_1);
}
