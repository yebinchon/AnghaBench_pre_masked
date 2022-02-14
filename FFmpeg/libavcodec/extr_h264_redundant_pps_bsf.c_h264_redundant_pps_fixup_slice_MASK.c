
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int slice_qp_delta; } ;
struct TYPE_5__ {int current_pic_init_qp; int global_pic_init_qp; } ;
typedef TYPE_1__ H264RedundantPPSContext ;
typedef TYPE_2__ H264RawSliceHeader ;



__attribute__((used)) static int FUNC_0(H264RedundantPPSContext *VAR_0,
                                          H264RawSliceHeader *VAR_1)
{
    int VAR_2;

    VAR_2 = VAR_0->current_pic_init_qp + VAR_1->slice_qp_delta;
    VAR_1->slice_qp_delta = VAR_2 - VAR_0->global_pic_init_qp;

    return 0;
}
