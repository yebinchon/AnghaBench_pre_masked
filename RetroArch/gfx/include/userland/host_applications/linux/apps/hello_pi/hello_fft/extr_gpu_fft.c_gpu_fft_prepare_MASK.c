
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cptr; unsigned int* uptr; int fptr; scalar_t__ vptr; } ;
struct GPU_FFT_PTR {scalar_t__ vc; TYPE_1__ arm; } ;
struct GPU_FFT_BASE {scalar_t__ vc_msg; void* vc_code; void** vc_unifs; } ;
struct GPU_FFT {int x; int y; int in; int out; unsigned int step; } ;
typedef int COMPLEX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned int,struct GPU_FFT_PTR*) ;
 void* FUNC_1 (struct GPU_FFT_PTR*,int) ;
 int FUNC_2 (int) ;
 unsigned int FUNC_3 (int) ;
 int FUNC_4 (int,int,int ) ;
 scalar_t__ FUNC_5 (int,int*,int*,int*) ;
 int FUNC_6 (scalar_t__,int ,unsigned int) ;

int FUNC_7(
    int VAR_2,
    int VAR_3,
    int VAR_4,
    int VAR_5,
    struct GPU_FFT **VAR_6) {

    unsigned VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    unsigned VAR_13, *VAR_14, VAR_15, VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

    struct GPU_FFT_BASE *VAR_23;
    struct GPU_FFT_PTR VAR_24;
    struct GPU_FFT *VAR_25;

    if (FUNC_5(VAR_3, &VAR_19, &VAR_20, &VAR_21)) return -2;

    VAR_7 = 4096;
    VAR_9 = (1+((sizeof(COMPLEX)<<VAR_3)|4095));
    VAR_10 = FUNC_3(VAR_3);
    VAR_8 = sizeof(COMPLEX)*16*(VAR_19+VAR_1*VAR_20);
    VAR_11 = sizeof(int)*VAR_1*(5+VAR_5*2);
    VAR_12 = sizeof(int)*VAR_1*2;

    VAR_13 = VAR_7 +
            VAR_9*VAR_5*2 +
            VAR_10 +
            VAR_8 +
            VAR_11 +
            VAR_12;

    VAR_22 = FUNC_0(VAR_2, VAR_13, &VAR_24);
    if (VAR_22) return VAR_22;


    VAR_25 = (struct GPU_FFT *) VAR_24.arm.vptr;
    VAR_23 = (struct GPU_FFT_BASE *) VAR_25;
    FUNC_1(&VAR_24, VAR_7);


    VAR_25->x = 1<<VAR_3;
    VAR_25->y = VAR_5;


    VAR_25->in = VAR_25->out = VAR_24.arm.cptr;
    VAR_25->step = VAR_9 / sizeof(COMPLEX);
    if (VAR_21&1) VAR_25->out += VAR_25->step * VAR_5;
    VAR_16 = FUNC_1(&VAR_24, VAR_9*VAR_5*2);


    FUNC_6(VAR_24.arm.vptr, FUNC_2(VAR_3), VAR_10);
    VAR_23->vc_code = FUNC_1(&VAR_24, VAR_10);


    FUNC_4(VAR_3, VAR_4, VAR_24.arm.fptr);
    VAR_15 = FUNC_1(&VAR_24, VAR_8);

    VAR_14 = VAR_24.arm.uptr;


    for (VAR_18=0; VAR_18<VAR_1; VAR_18++) {
        *VAR_14++ = VAR_15;
        *VAR_14++ = VAR_15 + sizeof(COMPLEX)*16*(VAR_19 + VAR_18*VAR_20);
        *VAR_14++ = VAR_18;
        for (VAR_17=0; VAR_17<VAR_5; VAR_17++) {
            *VAR_14++ = VAR_16 + VAR_9*VAR_17;
            *VAR_14++ = VAR_16 + VAR_9*VAR_17 + VAR_9*VAR_5;
        }
        *VAR_14++ = 0;
        *VAR_14++ = (VAR_18==0);

        VAR_23->vc_unifs[VAR_18] = FUNC_1(&VAR_24, sizeof(int)*(5+VAR_5*2));
    }

    if ((VAR_5<<VAR_3) <= VAR_0) {

        VAR_23->vc_msg = 0;
    }
    else {

        for (VAR_18=0; VAR_18<VAR_1; VAR_18++) {
            *VAR_14++ = VAR_23->vc_unifs[VAR_18];
            *VAR_14++ = VAR_23->vc_code;
        }

        VAR_23->vc_msg = VAR_24.vc;
    }

    *VAR_6 = VAR_25;
    return 0;
}
