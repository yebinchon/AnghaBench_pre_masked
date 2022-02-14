
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int const kiss_fft_cpx ;
typedef TYPE_1__* kiss_fft_cfg ;
struct TYPE_4__ {int nfft; int factors; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*,int const*,int,int,int ,TYPE_1__*) ;
 int FUNC_3 (int const*,int const*,int) ;

void FUNC_4(kiss_fft_cfg VAR_0,const kiss_fft_cpx *VAR_1,kiss_fft_cpx *VAR_2,int VAR_3)
{
    if (VAR_1 == VAR_2) {


        kiss_fft_cpx * VAR_4 = (kiss_fft_cpx*)FUNC_0( sizeof(kiss_fft_cpx)*VAR_0->nfft);
        FUNC_2(VAR_4,VAR_1,1,VAR_3, VAR_0->factors,VAR_0);
        FUNC_3(VAR_2,VAR_4,sizeof(kiss_fft_cpx)*VAR_0->nfft);
        FUNC_1(VAR_4);
    }else{
        FUNC_2( VAR_2, VAR_1, 1,VAR_3, VAR_0->factors,VAR_0 );
    }
}
