
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef TYPE_1__* kiss_fftr_cfg ;
typedef int kiss_fft_scalar ;
struct TYPE_18__ {int r; int i; } ;
typedef TYPE_2__ kiss_fft_cpx ;
struct TYPE_19__ {scalar_t__ inverse; int nfft; } ;
struct TYPE_17__ {TYPE_2__* tmpbuf; TYPE_5__* substate; int * super_twiddles; } ;


 int FUNC_0 (TYPE_2__,TYPE_2__,TYPE_2__) ;
 int FUNC_1 (TYPE_2__,int) ;
 int FUNC_2 (TYPE_2__,TYPE_2__,int ) ;
 int FUNC_3 (TYPE_2__,TYPE_2__,TYPE_2__) ;
 int FUNC_4 (double) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_5__*,TYPE_2__*,TYPE_2__*) ;
 int VAR_0 ;

void FUNC_8(kiss_fftr_cfg VAR_1,const kiss_fft_cpx *VAR_2,kiss_fft_scalar *VAR_3)
{

    int VAR_4, VAR_5;

    if (VAR_1->substate->inverse == 0) {
        FUNC_6 (VAR_0, "kiss fft usage error: improper alloc\n");
        FUNC_5 (1);
    }

    VAR_5 = VAR_1->substate->nfft;

    VAR_1->tmpbuf[0].r = VAR_2[0].r + VAR_2[VAR_5].r;
    VAR_1->tmpbuf[0].i = VAR_2[0].r - VAR_2[VAR_5].r;
    FUNC_1(VAR_1->tmpbuf[0],2);

    for (VAR_4 = 1; VAR_4 <= VAR_5 / 2; ++VAR_4) {
        kiss_fft_cpx VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
        VAR_6 = VAR_2[VAR_4];
        VAR_7.r = VAR_2[VAR_5 - VAR_4].r;
        VAR_7.i = -VAR_2[VAR_5 - VAR_4].i;
        FUNC_1( VAR_6 , 2 );
        FUNC_1( VAR_7 , 2 );

        FUNC_0 (VAR_8, VAR_6, VAR_7);
        FUNC_3 (VAR_10, VAR_6, VAR_7);
        FUNC_2 (VAR_9, VAR_10, VAR_1->super_twiddles[VAR_4-1]);
        FUNC_0 (VAR_1->tmpbuf[VAR_4], VAR_8, VAR_9);
        FUNC_3 (VAR_1->tmpbuf[VAR_5 - VAR_4], VAR_8, VAR_9);



        VAR_1->tmpbuf[VAR_5 - VAR_4].i *= -1;

    }
    FUNC_7 (VAR_1->substate, VAR_1->tmpbuf, (kiss_fft_cpx *) VAR_3);
}
