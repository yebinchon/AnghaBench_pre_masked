
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nrbins ;
typedef TYPE_1__* kiss_fftndr_cfg ;
typedef int kiss_fft_scalar ;
typedef int kiss_fft_cpx ;
struct TYPE_3__ {int dimReal; int dimOther; int cfg_r; int cfg_nd; scalar_t__ tmpbuf; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int *,int *) ;

void FUNC_3(kiss_fftndr_cfg VAR_0,const kiss_fft_cpx *VAR_1,kiss_fft_scalar *VAR_2)
{
    int VAR_3,VAR_4;
    int VAR_5 = VAR_0->dimReal;
    int VAR_6 = VAR_0->dimOther;
    int VAR_7 = VAR_5/2+1;
    kiss_fft_cpx * VAR_8 = (kiss_fft_cpx*)VAR_0->tmpbuf;
    kiss_fft_cpx * VAR_9 = VAR_8 + FUNC_0(VAR_7,VAR_6);

    for (VAR_4=0;VAR_4<VAR_7;++VAR_4) {
        for (VAR_3=0;VAR_3<VAR_6;++VAR_3)
            VAR_8[VAR_3] = VAR_1[ VAR_3*(VAR_7) + VAR_4 ];
        FUNC_1(VAR_0->cfg_nd, VAR_8, VAR_9+VAR_4*VAR_6);
    }

    for (VAR_3=0;VAR_3<VAR_6;++VAR_3) {
        for (VAR_4=0;VAR_4<VAR_7;++VAR_4)
            VAR_8[VAR_4] = VAR_9[ VAR_4*VAR_6+VAR_3 ];
        FUNC_2( VAR_0->cfg_r,VAR_8,VAR_2 + VAR_3*VAR_5);
    }
}
