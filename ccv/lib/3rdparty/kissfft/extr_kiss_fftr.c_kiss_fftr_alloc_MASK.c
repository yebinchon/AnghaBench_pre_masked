
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kiss_fftr_state {int dummy; } ;
typedef TYPE_1__* kiss_fftr_cfg ;
typedef int kiss_fft_cpx ;
typedef int * kiss_fft_cfg ;
struct TYPE_3__ {int * super_twiddles; int * substate; int * tmpbuf; } ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,double) ;
 int FUNC_3 (int,int,int *,size_t*) ;
 int VAR_0 ;

kiss_fftr_cfg FUNC_4(int VAR_1,int VAR_2,void * VAR_3,size_t * VAR_4)
{
    int VAR_5;
    kiss_fftr_cfg VAR_6 = ((void*)0);
    size_t VAR_7, VAR_8;

    if (VAR_1 & 1) {
        FUNC_1(VAR_0,"Real FFT optimization must be even.\n");
        return ((void*)0);
    }
    VAR_1 >>= 1;

    FUNC_3 (VAR_1, VAR_2, ((void*)0), &VAR_7);
    VAR_8 = sizeof(struct kiss_fftr_state) + VAR_7 + sizeof(kiss_fft_cpx) * ( VAR_1 * 3 / 2);

    if (VAR_4 == ((void*)0)) {
        VAR_6 = (kiss_fftr_cfg) FUNC_0 (VAR_8);
    } else {
        if (*VAR_4 >= VAR_8)
            VAR_6 = (kiss_fftr_cfg) VAR_3;
        *VAR_4 = VAR_8;
    }
    if (!VAR_6)
        return ((void*)0);

    VAR_6->substate = (kiss_fft_cfg) (VAR_6 + 1);
    VAR_6->tmpbuf = (kiss_fft_cpx *) (((char *) VAR_6->substate) + VAR_7);
    VAR_6->super_twiddles = VAR_6->tmpbuf + VAR_1;
    FUNC_3(VAR_1, VAR_2, VAR_6->substate, &VAR_7);

    for (VAR_5 = 0; VAR_5 < VAR_1/2; ++VAR_5) {
        double VAR_9 =
            -3.14159265358979323846264338327 * ((double) (VAR_5+1) / VAR_1 + .5);
        if (VAR_2)
            VAR_9 *= -1;
        FUNC_2 (VAR_6->super_twiddles+VAR_5,VAR_9);
    }
    return VAR_6;
}
