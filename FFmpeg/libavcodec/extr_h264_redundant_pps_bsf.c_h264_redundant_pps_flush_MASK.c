
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int extradata_pic_init_qp; int current_pic_init_qp; } ;
typedef TYPE_1__ H264RedundantPPSContext ;
typedef TYPE_2__ AVBSFContext ;



__attribute__((used)) static void FUNC_0(AVBSFContext *VAR_0)
{
    H264RedundantPPSContext *VAR_1 = VAR_0->priv_data;
    VAR_1->current_pic_init_qp = VAR_1->extradata_pic_init_qp;
}
