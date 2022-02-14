
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vdpau_picture_context {int dummy; } ;
struct TYPE_11__ {TYPE_3__* priv_data; } ;
struct TYPE_10__ {TYPE_1__* avctx; TYPE_2__* cur_pic_ptr; int * slice_ctx; } ;
struct TYPE_9__ {int f; struct vdpau_picture_context* hwaccel_picture_private; } ;
struct TYPE_8__ {int height; } ;
typedef int H264SliceContext ;
typedef TYPE_2__ H264Picture ;
typedef TYPE_3__ H264Context ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (TYPE_3__*,int *,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ,struct vdpau_picture_context*) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0)
{
    H264Context *VAR_1 = VAR_0->priv_data;
    H264SliceContext *VAR_2 = &VAR_1->slice_ctx[0];
    H264Picture *VAR_3 = VAR_1->cur_pic_ptr;
    struct vdpau_picture_context *VAR_4 = VAR_3->hwaccel_picture_private;
    int VAR_5;

    VAR_5 = FUNC_1(VAR_0, VAR_3->f, VAR_4);
    if (VAR_5 < 0)
        return VAR_5;

    FUNC_0(VAR_1, VAR_2, 0, VAR_1->avctx->height);
    return 0;
}
