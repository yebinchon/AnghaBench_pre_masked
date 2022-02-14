
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int LastSliceOfPic; } ;
struct TYPE_13__ {TYPE_1__ fields; } ;
struct TYPE_18__ {TYPE_2__ LongSliceFlags; } ;
struct TYPE_15__ {int pic; scalar_t__ last_size; int last_buffer; TYPE_9__ last_slice_param; } ;
typedef TYPE_4__ VAAPIDecodePictureHEVC ;
struct TYPE_17__ {TYPE_5__* priv_data; } ;
struct TYPE_16__ {TYPE_3__* ref; } ;
struct TYPE_14__ {TYPE_4__* hwaccel_picture_private; } ;
typedef TYPE_5__ HEVCContext ;
typedef TYPE_6__ AVCodecContext ;


 int FUNC_0 (TYPE_6__*,int *) ;
 int FUNC_1 (TYPE_6__*,int *) ;
 int FUNC_2 (TYPE_6__*,int *,TYPE_9__*,int,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_0)
{
    const HEVCContext *VAR_1 = VAR_0->priv_data;
    VAAPIDecodePictureHEVC *VAR_2 = VAR_1->ref->hwaccel_picture_private;
    int VAR_3;

    if (VAR_2->last_size) {
        VAR_2->last_slice_param.LongSliceFlags.fields.LastSliceOfPic = 1;
        VAR_3 = FUNC_2(VAR_0, &VAR_2->pic,
                                                &VAR_2->last_slice_param, sizeof(VAR_2->last_slice_param),
                                                VAR_2->last_buffer, VAR_2->last_size);
        if (VAR_3 < 0)
            goto fail;
    }


    VAR_3 = FUNC_1(VAR_0, &VAR_2->pic);
    if (VAR_3 < 0)
        goto fail;

    return 0;
fail:
    FUNC_0(VAR_0, &VAR_2->pic);
    return VAR_3;
}
