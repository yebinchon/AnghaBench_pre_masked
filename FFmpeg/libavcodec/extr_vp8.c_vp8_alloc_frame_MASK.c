
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int tf; void* seg_map; TYPE_1__* hwaccel_priv_buf; int hwaccel_picture_private; } ;
typedef TYPE_2__ VP8Frame ;
struct TYPE_11__ {int mb_width; int mb_height; TYPE_7__* avctx; } ;
typedef TYPE_3__ VP8Context ;
struct TYPE_13__ {TYPE_4__* hwaccel; } ;
struct TYPE_12__ {int frame_priv_data_size; } ;
struct TYPE_9__ {int data; } ;
typedef TYPE_4__ AVHWAccel ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (TYPE_7__*,int *,int ) ;
 int FUNC_4 (TYPE_7__*,int *) ;

__attribute__((used)) static int FUNC_5(VP8Context *VAR_2, VP8Frame *VAR_3, int VAR_4)
{
    int VAR_5;
    if ((VAR_5 = FUNC_3(VAR_2->avctx, &VAR_3->tf,
                                    VAR_4 ? VAR_0 : 0)) < 0)
        return VAR_5;
    if (!(VAR_3->seg_map = FUNC_1(VAR_2->mb_width * VAR_2->mb_height)))
        goto fail;
    if (VAR_2->avctx->hwaccel) {
        const AVHWAccel *VAR_6 = VAR_2->avctx->hwaccel;
        if (VAR_6->frame_priv_data_size) {
            VAR_3->hwaccel_priv_buf = FUNC_1(VAR_6->frame_priv_data_size);
            if (!VAR_3->hwaccel_priv_buf)
                goto fail;
            VAR_3->hwaccel_picture_private = VAR_3->hwaccel_priv_buf->data;
        }
    }
    return 0;

fail:
    FUNC_2(&VAR_3->seg_map);
    FUNC_4(VAR_2->avctx, &VAR_3->tf);
    return FUNC_0(VAR_1);
}
