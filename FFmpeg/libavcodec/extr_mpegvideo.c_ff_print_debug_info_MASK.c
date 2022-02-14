
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int quarter_sample; int mb_stride; int mb_height; int mb_width; int low_delay; int mbskip_table; int avctx; } ;
struct TYPE_5__ {int motion_val; int qscale_table; int mb_type; } ;
typedef TYPE_1__ Picture ;
typedef TYPE_2__ MpegEncContext ;
typedef int AVFrame ;


 int FUNC_0 (int ,int *,int ,int ,int ,int ,int *,int ,int ,int ,int ) ;

void FUNC_1(MpegEncContext *VAR_0, Picture *VAR_1, AVFrame *VAR_2)
{
    FUNC_0(VAR_0->avctx, VAR_2, VAR_0->mbskip_table, VAR_1->mb_type,
                         VAR_1->qscale_table, VAR_1->motion_val, &VAR_0->low_delay,
                         VAR_0->mb_width, VAR_0->mb_height, VAR_0->mb_stride, VAR_0->quarter_sample);
}
