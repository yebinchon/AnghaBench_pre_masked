
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int weighted_pred_flag; scalar_t__ pic_init_qp_minus26; } ;
struct TYPE_5__ {scalar_t__ global_pic_init_qp; scalar_t__ current_pic_init_qp; } ;
typedef TYPE_1__ H264RedundantPPSContext ;
typedef TYPE_2__ H264RawPPS ;



__attribute__((used)) static int FUNC_0(H264RedundantPPSContext *VAR_0,
                                        H264RawPPS *VAR_1)
{


    VAR_0->current_pic_init_qp = VAR_1->pic_init_qp_minus26 + 26;
    VAR_1->pic_init_qp_minus26 = VAR_0->global_pic_init_qp - 26;




    VAR_1->weighted_pred_flag = 1;

    return 0;
}
