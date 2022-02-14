
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int kissf_fft_cpx ;
typedef TYPE_1__* kissf_fft_cfg ;
struct TYPE_3__ {int nfft; int * twiddles; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(
        kissf_fft_cpx * VAR_0,
        const size_t VAR_1,
        const kissf_fft_cfg VAR_2,
        int VAR_3,
        int VAR_4
        )
{
    int VAR_5,VAR_6,VAR_7,VAR_8;
    kissf_fft_cpx * VAR_9 = VAR_2->twiddles;
    kissf_fft_cpx VAR_10;
    int VAR_11 = VAR_2->nfft;

    kissf_fft_cpx * VAR_12 = (kissf_fft_cpx*)FUNC_3(sizeof(kissf_fft_cpx)*VAR_4);

    for ( VAR_5=0; VAR_5<VAR_3; ++VAR_5 ) {
        VAR_6=VAR_5;
        for ( VAR_7=0 ; VAR_7<VAR_4 ; ++VAR_7 ) {
            VAR_12[VAR_7] = VAR_0[ VAR_6 ];
            FUNC_1(VAR_12[VAR_7],VAR_4);
            VAR_6 += VAR_3;
        }

        VAR_6=VAR_5;
        for ( VAR_7=0 ; VAR_7<VAR_4 ; ++VAR_7 ) {
            int VAR_13=0;
            VAR_0[ VAR_6 ] = VAR_12[0];
            for (VAR_8=1;VAR_8<VAR_4;++VAR_8 ) {
                VAR_13 += VAR_1 * VAR_6;
                if (VAR_13>=VAR_11) VAR_13-=VAR_11;
                FUNC_2(VAR_10,VAR_12[VAR_8] , VAR_9[VAR_13] );
                FUNC_0( VAR_0[ VAR_6 ] ,VAR_10);
            }
            VAR_6 += VAR_3;
        }
    }
    FUNC_4(VAR_12);
}
