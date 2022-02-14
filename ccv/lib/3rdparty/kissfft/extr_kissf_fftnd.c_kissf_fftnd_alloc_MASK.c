
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kissf_fftnd_state {int dummy; } ;
typedef TYPE_1__* kissf_fftnd_cfg ;
typedef int kissf_fft_cpx ;
typedef int kissf_fft_cfg ;
struct TYPE_3__ {int dimprod; int ndims; int* dims; int * states; int * tmpbuf; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int const,int,char*,size_t*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int VAR_0 ;

kissf_fftnd_cfg FUNC_3(const int *VAR_1,int VAR_2,int VAR_3,void*VAR_4,size_t*VAR_5)
{
    kissf_fftnd_cfg VAR_6 = ((void*)0);
    int VAR_7;
    int VAR_8=1;
    size_t VAR_9 = sizeof(struct kissf_fftnd_state);
    char * VAR_10;

    for (VAR_7=0;VAR_7<VAR_2;++VAR_7) {
        size_t VAR_11=0;
        FUNC_1 (VAR_1[VAR_7], VAR_3, ((void*)0), &VAR_11);
        VAR_9 += VAR_11;
        VAR_8 *= VAR_1[VAR_7];
    }
    VAR_9 += sizeof(int) * VAR_2;
    VAR_9 += sizeof(void*) * VAR_2;
    VAR_9 += sizeof(kissf_fft_cpx) * VAR_8;

    if (VAR_5 == ((void*)0)) {
        VAR_6 = (kissf_fftnd_cfg) FUNC_2 (VAR_9);
    } else {
        if (*VAR_5 >= VAR_9)
            VAR_6 = (kissf_fftnd_cfg) VAR_4;
        *VAR_5 = VAR_9;
    }
    if (!VAR_6)
        return ((void*)0);

    VAR_6->dimprod = VAR_8;
    VAR_6->ndims = VAR_2;
    VAR_10=(char*)(VAR_6+1);

    VAR_6->states = (kissf_fft_cfg *)VAR_10;
    VAR_10 += sizeof(void*) * VAR_2;

    VAR_6->dims = (int*)VAR_10;
    VAR_10 += sizeof(int) * VAR_2;

    VAR_6->tmpbuf = (kissf_fft_cpx*)VAR_10;
    VAR_10 += sizeof(kissf_fft_cpx) * VAR_8;

    for (VAR_7=0;VAR_7<VAR_2;++VAR_7) {
        size_t VAR_12;
        VAR_6->dims[VAR_7] = VAR_1[VAR_7];
        FUNC_1 (VAR_6->dims[VAR_7], VAR_3, ((void*)0), &VAR_12);
        VAR_6->states[VAR_7] = FUNC_1 (VAR_6->dims[VAR_7], VAR_3, VAR_10,&VAR_12);
        VAR_10 += VAR_12;
    }
    if ( VAR_10 - (char*)VAR_6 != (int)VAR_9 ) {
        FUNC_0(VAR_0,
                "################################################################################\n"
                "Internal error! Memory allocation miscalculation\n"
                "################################################################################\n"
               );
    }
    return VAR_6;
}
