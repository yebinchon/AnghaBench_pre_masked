
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct dxva2_picture_context {scalar_t__ slice_count; scalar_t__ bitstream_size; int qm; int pp; } ;
struct TYPE_11__ {TYPE_3__* priv_data; } ;
struct TYPE_10__ {TYPE_2__* avctx; TYPE_1__* cur_pic_ptr; int * slice_ctx; } ;
struct TYPE_9__ {int height; } ;
struct TYPE_8__ {int f; struct dxva2_picture_context* hwaccel_picture_private; } ;
typedef int H264SliceContext ;
typedef TYPE_3__ H264Context ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ,int *,int,int *,int,int ) ;
 int FUNC_1 (TYPE_3__*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_1)
{
    H264Context *VAR_2 = VAR_1->priv_data;
    H264SliceContext *VAR_3 = &VAR_2->slice_ctx[0];
    struct dxva2_picture_context *VAR_4 =
        VAR_2->cur_pic_ptr->hwaccel_picture_private;
    int VAR_5;

    if (VAR_4->slice_count <= 0 || VAR_4->bitstream_size <= 0)
        return -1;
    VAR_5 = FUNC_0(VAR_1, VAR_2->cur_pic_ptr->f,
                                    &VAR_4->pp, sizeof(VAR_4->pp),
                                    &VAR_4->qm, sizeof(VAR_4->qm),
                                    VAR_0);
    if (!VAR_5)
        FUNC_1(VAR_2, VAR_3, 0, VAR_2->avctx->height);
    return VAR_5;
}
