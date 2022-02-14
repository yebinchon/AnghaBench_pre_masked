
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* kissf_fftnd_cfg ;
typedef int const kissf_fft_cpx ;
struct TYPE_3__ {int ndims; int dimprod; int* dims; int const* tmpbuf; int * states; } ;


 int FUNC_0 (int ,int const*,int const*,int) ;
 int FUNC_1 (int const*,int const*,int) ;

void FUNC_2(kissf_fftnd_cfg VAR_0,const kissf_fft_cpx *VAR_1,kissf_fft_cpx *VAR_2)
{
    int VAR_3,VAR_4;
    const kissf_fft_cpx * VAR_5=VAR_1;
    kissf_fft_cpx * VAR_6;


    if ( VAR_0->ndims & 1 ) {
        VAR_6 = VAR_2;
        if (VAR_1==VAR_2) {
            FUNC_1( VAR_0->tmpbuf, VAR_1, sizeof(kissf_fft_cpx) * VAR_0->dimprod );
            VAR_5 = VAR_0->tmpbuf;
        }
    }else
        VAR_6 = VAR_0->tmpbuf;

    for ( VAR_4=0; VAR_4 < VAR_0->ndims; ++VAR_4) {
        int VAR_7 = VAR_0->dims[VAR_4];
        int VAR_8 = VAR_0->dimprod / VAR_7;

        for ( VAR_3=0 ; VAR_3<VAR_8 ; ++VAR_3 )
            FUNC_0( VAR_0->states[VAR_4], VAR_5+VAR_3 , VAR_6+VAR_3*VAR_7, VAR_8 );


        if (VAR_6 == VAR_0->tmpbuf){
            VAR_6 = VAR_2;
            VAR_5 = VAR_0->tmpbuf;
        }else{
            VAR_6 = VAR_0->tmpbuf;
            VAR_5 = VAR_2;
        }
    }
}
