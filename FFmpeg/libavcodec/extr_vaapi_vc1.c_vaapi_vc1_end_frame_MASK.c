
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* avctx; TYPE_1__* current_picture_ptr; } ;
struct TYPE_11__ {TYPE_4__ s; } ;
typedef TYPE_3__ VC1Context ;
typedef int VAAPIDecodePicture ;
struct TYPE_13__ {TYPE_3__* priv_data; } ;
struct TYPE_10__ {int height; } ;
struct TYPE_9__ {int * hwaccel_picture_private; } ;
typedef TYPE_4__ MpegEncContext ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (TYPE_4__*,int ,int ) ;
 int FUNC_1 (TYPE_5__*,int *) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0)
{
    VC1Context *VAR_1 = VAR_0->priv_data;
    MpegEncContext *VAR_2 = &VAR_1->s;
    VAAPIDecodePicture *VAR_3 = VAR_2->current_picture_ptr->hwaccel_picture_private;
    int VAR_4;

    VAR_4 = FUNC_1(VAR_0, VAR_3);
    if (VAR_4 < 0)
        goto fail;

    FUNC_0(VAR_2, 0, VAR_2->avctx->height);

fail:
    return VAR_4;
}
