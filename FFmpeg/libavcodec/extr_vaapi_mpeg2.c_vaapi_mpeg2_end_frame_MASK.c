
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
struct TYPE_10__ {TYPE_2__* avctx; TYPE_1__* current_picture_ptr; } ;
struct TYPE_9__ {int height; } ;
struct TYPE_8__ {int * hwaccel_picture_private; } ;
typedef TYPE_3__ MpegEncContext ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0)
{
    MpegEncContext *VAR_1 = VAR_0->priv_data;
    VAAPIDecodePicture *VAR_2 = VAR_1->current_picture_ptr->hwaccel_picture_private;
    int VAR_3;

    VAR_3 = FUNC_1(VAR_0, VAR_2);
    if (VAR_3 < 0)
        goto fail;

    FUNC_0(VAR_1, 0, VAR_1->avctx->height);

fail:
    return VAR_3;
}
