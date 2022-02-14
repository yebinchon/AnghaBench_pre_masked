
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nrbins ;
typedef TYPE_1__* kissf_fftndr_cfg ;
typedef int kissf_fft_scalar ;
typedef int kissf_fft_cpx ;
struct TYPE_3__ {int dimReal; int dimOther; int cfg_nd; int cfg_r; scalar_t__ tmpbuf; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int const*,int *) ;

void FUNC_3(kissf_fftndr_cfg VAR_0,const kissf_fft_scalar *VAR_1,kissf_fft_cpx *VAR_2)
{
    int VAR_3,VAR_4;
    int VAR_5 = VAR_0->dimReal;
    int VAR_6 = VAR_0->dimOther;
    int VAR_7 = VAR_5/2+1;

    kissf_fft_cpx * VAR_8 = (kissf_fft_cpx*)VAR_0->tmpbuf;
    kissf_fft_cpx * VAR_9 = VAR_8 + FUNC_0(VAR_7,VAR_6);




    for (VAR_3=0;VAR_3<VAR_6;++VAR_3) {
        FUNC_2( VAR_0->cfg_r, VAR_1 + VAR_3*VAR_5 , VAR_8 );
        for (VAR_4=0;VAR_4<VAR_7;++VAR_4)
           VAR_9[ VAR_4*VAR_6+VAR_3 ] = VAR_8[VAR_4];
    }

    for (VAR_4=0;VAR_4<VAR_7;++VAR_4) {
        FUNC_1(VAR_0->cfg_nd, VAR_9+VAR_4*VAR_6, VAR_8);
        for (VAR_3=0;VAR_3<VAR_6;++VAR_3)
            VAR_2[ VAR_3*(VAR_7) + VAR_4] = VAR_8[VAR_3];
    }
}
