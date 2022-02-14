
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ r; scalar_t__ i; } ;
typedef TYPE_1__ kiss_fft_cpx ;
typedef TYPE_2__* kiss_fft_cfg ;
struct TYPE_18__ {scalar_t__ inverse; TYPE_1__* twiddles; } ;


 int FUNC_0 (TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_1 (TYPE_1__,TYPE_1__) ;
 int FUNC_2 (TYPE_1__,int) ;
 int FUNC_3 (TYPE_1__,TYPE_1__,TYPE_1__) ;
 int FUNC_4 (TYPE_1__,TYPE_1__,TYPE_1__) ;

__attribute__((used)) static void FUNC_5(
        kiss_fft_cpx * VAR_0,
        const size_t VAR_1,
        const kiss_fft_cfg VAR_2,
        const size_t VAR_3
        )
{
    kiss_fft_cpx *VAR_4,*VAR_5,*VAR_6;
    kiss_fft_cpx VAR_7[6];
    size_t VAR_8=VAR_3;
    const size_t VAR_9=2*VAR_3;
    const size_t VAR_10=3*VAR_3;


    VAR_6 = VAR_5 = VAR_4 = VAR_2->twiddles;

    do {
        FUNC_2(*VAR_0,4); FUNC_2(VAR_0[VAR_3],4); FUNC_2(VAR_0[VAR_9],4); FUNC_2(VAR_0[VAR_10],4);

        FUNC_3(VAR_7[0],VAR_0[VAR_3] , *VAR_4 );
        FUNC_3(VAR_7[1],VAR_0[VAR_9] , *VAR_5 );
        FUNC_3(VAR_7[2],VAR_0[VAR_10] , *VAR_6 );

        FUNC_4( VAR_7[5] , *VAR_0, VAR_7[1] );
        FUNC_1(*VAR_0, VAR_7[1]);
        FUNC_0( VAR_7[3] , VAR_7[0] , VAR_7[2] );
        FUNC_4( VAR_7[4] , VAR_7[0] , VAR_7[2] );
        FUNC_4( VAR_0[VAR_9], *VAR_0, VAR_7[3] );
        VAR_4 += VAR_1;
        VAR_5 += VAR_1*2;
        VAR_6 += VAR_1*3;
        FUNC_1( *VAR_0 , VAR_7[3] );

        if(VAR_2->inverse) {
            VAR_0[VAR_3].r = VAR_7[5].r - VAR_7[4].i;
            VAR_0[VAR_3].i = VAR_7[5].i + VAR_7[4].r;
            VAR_0[VAR_10].r = VAR_7[5].r + VAR_7[4].i;
            VAR_0[VAR_10].i = VAR_7[5].i - VAR_7[4].r;
        }else{
            VAR_0[VAR_3].r = VAR_7[5].r + VAR_7[4].i;
            VAR_0[VAR_3].i = VAR_7[5].i - VAR_7[4].r;
            VAR_0[VAR_10].r = VAR_7[5].r - VAR_7[4].i;
            VAR_0[VAR_10].i = VAR_7[5].i + VAR_7[4].r;
        }
        ++VAR_0;
    }while(--VAR_8);
}
