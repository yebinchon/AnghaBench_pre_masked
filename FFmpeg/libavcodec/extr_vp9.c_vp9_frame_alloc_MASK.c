
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int VP9mvrefPair ;
struct TYPE_14__ {TYPE_2__* hwaccel_priv_buf; scalar_t__ hwaccel_picture_private; TYPE_1__* extradata; int * mv; scalar_t__ segmentation_map; int tf; } ;
typedef TYPE_3__ VP9Frame ;
struct TYPE_15__ {int sb_cols; int sb_rows; } ;
typedef TYPE_4__ VP9Context ;
struct TYPE_17__ {TYPE_5__* hwaccel; TYPE_4__* priv_data; } ;
struct TYPE_16__ {int frame_priv_data_size; } ;
struct TYPE_13__ {scalar_t__ data; } ;
struct TYPE_12__ {scalar_t__ data; } ;
typedef TYPE_5__ AVHWAccel ;
typedef TYPE_6__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_6__*,int *,int ) ;
 int FUNC_4 (TYPE_6__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_2, VP9Frame *VAR_3)
{
    VP9Context *VAR_4 = VAR_2->priv_data;
    int VAR_5, VAR_6;

    VAR_5 = FUNC_3(VAR_2, &VAR_3->tf, VAR_0);
    if (VAR_5 < 0)
        return VAR_5;

    VAR_6 = 64 * VAR_4->sb_cols * VAR_4->sb_rows;
    VAR_3->extradata = FUNC_2(VAR_6 * (1 + sizeof(VP9mvrefPair)));
    if (!VAR_3->extradata) {
        goto fail;
    }

    VAR_3->segmentation_map = VAR_3->extradata->data;
    VAR_3->mv = (VP9mvrefPair *) (VAR_3->extradata->data + VAR_6);

    if (VAR_2->hwaccel) {
        const AVHWAccel *VAR_7 = VAR_2->hwaccel;
        FUNC_1(!VAR_3->hwaccel_picture_private);
        if (VAR_7->frame_priv_data_size) {
            VAR_3->hwaccel_priv_buf = FUNC_2(VAR_7->frame_priv_data_size);
            if (!VAR_3->hwaccel_priv_buf)
                goto fail;
            VAR_3->hwaccel_picture_private = VAR_3->hwaccel_priv_buf->data;
        }
    }

    return 0;

fail:
    FUNC_4(VAR_2, VAR_3);
    return FUNC_0(VAR_1);
}
