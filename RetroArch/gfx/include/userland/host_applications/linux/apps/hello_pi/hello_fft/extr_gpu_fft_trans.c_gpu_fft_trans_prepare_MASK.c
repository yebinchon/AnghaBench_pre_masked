
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct GPU_FFT_TRANS {int dummy; } ;
struct TYPE_4__ {int* uptr; scalar_t__ vptr; } ;
struct GPU_FFT_PTR {TYPE_2__ arm; } ;
struct GPU_FFT_COMPLEX {int dummy; } ;
struct GPU_FFT_BASE {int vc_code; int* vc_unifs; void* vc_msg; } ;
struct TYPE_3__ {int vc_msg; } ;
struct GPU_FFT {int step; int x; int y; TYPE_1__ base; scalar_t__ in; scalar_t__ out; } ;


 int FUNC_0 (int,unsigned int,struct GPU_FFT_PTR*) ;
 void* FUNC_1 (struct GPU_FFT_PTR*,unsigned int) ;
 int FUNC_2 (scalar_t__,int ,unsigned int) ;
 int VAR_0 ;

int FUNC_3(
    int VAR_1,
    struct GPU_FFT *VAR_2,
    struct GPU_FFT *VAR_3,
    struct GPU_FFT_TRANS **VAR_4) {

    unsigned VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    int VAR_10;

    struct GPU_FFT_TRANS *VAR_11;
    struct GPU_FFT_BASE *VAR_12;
    struct GPU_FFT_PTR VAR_13;

    VAR_6 = VAR_7 = VAR_8 = VAR_9 = 4096;

    VAR_5 = VAR_6 +
            VAR_7 +
            VAR_8 +
            VAR_9;

    VAR_10 = FUNC_0(VAR_1, VAR_5, &VAR_13);
    if (VAR_10) return VAR_10;


    VAR_11 = (struct GPU_FFT_TRANS *) VAR_13.arm.vptr;
    VAR_12 = (struct GPU_FFT_BASE *) VAR_11;
    FUNC_1(&VAR_13, VAR_6);


    FUNC_2(VAR_13.arm.vptr, VAR_0, VAR_7);
    VAR_12->vc_code = FUNC_1(&VAR_13, VAR_7);


    VAR_13.arm.uptr[0] = VAR_2->base.vc_msg;
    VAR_13.arm.uptr[1] = ((char*)VAR_2->out) - ((char*)VAR_2->in);
    VAR_13.arm.uptr[2] = VAR_3->base.vc_msg;
    VAR_13.arm.uptr[3] = 0;
    VAR_13.arm.uptr[4] = VAR_2->step * sizeof(struct GPU_FFT_COMPLEX);
    VAR_13.arm.uptr[5] = VAR_3->step * sizeof(struct GPU_FFT_COMPLEX);
    VAR_13.arm.uptr[6] = VAR_2->x < VAR_3->y? VAR_2->x : VAR_3->y;
    VAR_13.arm.uptr[7] = VAR_2->y < VAR_3->x? VAR_2->y : VAR_3->x;
    VAR_12->vc_unifs[0] = FUNC_1(&VAR_13, VAR_8);


    VAR_13.arm.uptr[0] = VAR_12->vc_unifs[0];
    VAR_13.arm.uptr[1] = VAR_12->vc_code;
    VAR_12->vc_msg = FUNC_1(&VAR_13, VAR_9);

    *VAR_4 = VAR_11;
    return 0;
}
