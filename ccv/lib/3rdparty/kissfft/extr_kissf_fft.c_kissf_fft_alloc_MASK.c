
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kissf_fft_state {int dummy; } ;
typedef int kissf_fft_cpx ;
typedef TYPE_1__* kissf_fft_cfg ;
struct TYPE_3__ {int nfft; int inverse; int factors; scalar_t__ twiddles; } ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (scalar_t__,double) ;
 int FUNC_2 (int,int ) ;

kissf_fft_cfg FUNC_3(int VAR_0,int VAR_1,void * VAR_2,size_t * VAR_3 )
{
    kissf_fft_cfg VAR_4=((void*)0);
    size_t VAR_5 = sizeof(struct kissf_fft_state)
        + sizeof(kissf_fft_cpx)*(VAR_0-1);

    if ( VAR_3==((void*)0) ) {
        VAR_4 = ( kissf_fft_cfg)FUNC_0( VAR_5 );
    }else{
        if (VAR_2 != ((void*)0) && *VAR_3 >= VAR_5)
            VAR_4 = (kissf_fft_cfg)VAR_2;
        *VAR_3 = VAR_5;
    }
    if (VAR_4) {
        int VAR_6;
        VAR_4->nfft=VAR_0;
        VAR_4->inverse = VAR_1;

        for (VAR_6=0;VAR_6<VAR_0;++VAR_6) {
            const double VAR_7=3.141592653589793238462643383279502884197169399375105820974944;
            double VAR_8 = -2*VAR_7*VAR_6 / VAR_0;
            if (VAR_4->inverse)
                VAR_8 *= -1;
            FUNC_1(VAR_4->twiddles+VAR_6, VAR_8 );
        }

        FUNC_2(VAR_0,VAR_4->factors);
    }
    return VAR_4;
}
