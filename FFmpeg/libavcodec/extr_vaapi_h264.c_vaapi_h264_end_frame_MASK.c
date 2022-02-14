
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VAAPIDecodePicture ;
struct TYPE_11__ {TYPE_3__* priv_data; } ;
struct TYPE_10__ {TYPE_1__* avctx; int * slice_ctx; TYPE_2__* cur_pic_ptr; } ;
struct TYPE_9__ {int * hwaccel_picture_private; } ;
struct TYPE_8__ {int height; } ;
typedef int H264SliceContext ;
typedef TYPE_3__ H264Context ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (TYPE_3__ const*,int *,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0)
{
    const H264Context *VAR_1 = VAR_0->priv_data;
    VAAPIDecodePicture *VAR_2 = VAR_1->cur_pic_ptr->hwaccel_picture_private;
    H264SliceContext *VAR_3 = &VAR_1->slice_ctx[0];
    int VAR_4;

    VAR_4 = FUNC_1(VAR_0, VAR_2);
    if (VAR_4 < 0)
        goto finish;

    FUNC_0(VAR_1, VAR_3, 0, VAR_1->avctx->height);

finish:
    return VAR_4;
}
