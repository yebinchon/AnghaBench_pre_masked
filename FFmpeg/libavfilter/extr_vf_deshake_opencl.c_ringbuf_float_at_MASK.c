
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data_end_offset; int data_start_offset; } ;
struct TYPE_5__ {int smooth_window; TYPE_1__ abs_motion; } ;
typedef TYPE_2__ DeshakeOpenCLContext ;
typedef int AVFifoBuffer ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int *,float*,int,int,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(
    DeshakeOpenCLContext *VAR_0,
    AVFifoBuffer *VAR_1,
    float *VAR_2,
    int VAR_3
) {
    int VAR_4, VAR_5, VAR_6;
    if (VAR_0->abs_motion.data_end_offset != -1) {
        VAR_5 = VAR_0->abs_motion.data_end_offset;
    } else {


        VAR_5 = VAR_0->smooth_window - (FUNC_2(VAR_1) / sizeof(float)) - 1;
    }

    if (VAR_0->abs_motion.data_start_offset != -1) {
        VAR_4 = VAR_0->abs_motion.data_start_offset;
    } else {



        VAR_4 = 0;
    }

    VAR_6 = FUNC_0(
        VAR_3,
        VAR_4,
        VAR_5
    );

    FUNC_1(
        VAR_1,
        VAR_2,
        VAR_6 * sizeof(float),
        sizeof(float),
        ((void*)0)
    );
}
