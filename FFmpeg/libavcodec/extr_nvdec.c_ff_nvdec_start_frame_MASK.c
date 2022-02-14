
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_21__ {TYPE_1__* internal; } ;
struct TYPE_20__ {TYPE_2__* private_ref; } ;
struct TYPE_19__ {int post_process; int (* hwaccel_priv_free ) (TYPE_3__*) ;TYPE_3__* hwaccel_priv; } ;
struct TYPE_18__ {int decoder_pool; int decoder_ref; scalar_t__ nb_slices; scalar_t__ bitstream_len; } ;
struct TYPE_17__ {unsigned int idx; TYPE_13__* idx_ref; int decoder_ref; } ;
struct TYPE_16__ {scalar_t__ data; } ;
struct TYPE_15__ {TYPE_4__* hwaccel_priv_data; } ;
struct TYPE_14__ {scalar_t__ data; } ;
typedef TYPE_3__ NVDECFrame ;
typedef TYPE_4__ NVDECContext ;
typedef TYPE_5__ FrameDecodeData ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_13__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_7__*,int ,char*) ;
 TYPE_3__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_2 ;

int FUNC_6(AVCodecContext *VAR_3, AVFrame *VAR_4)
{
    NVDECContext *VAR_5 = VAR_3->internal->hwaccel_priv_data;
    FrameDecodeData *VAR_6 = (FrameDecodeData*)VAR_4->private_ref->data;
    NVDECFrame *VAR_7 = ((void*)0);
    int VAR_8;

    VAR_5->bitstream_len = 0;
    VAR_5->nb_slices = 0;

    if (VAR_6->hwaccel_priv)
        return 0;

    VAR_7 = FUNC_4(sizeof(*VAR_7));
    if (!VAR_7)
        return FUNC_0(VAR_1);

    VAR_7->decoder_ref = FUNC_2(VAR_5->decoder_ref);
    if (!VAR_7->decoder_ref) {
        VAR_8 = FUNC_0(VAR_1);
        goto fail;
    }

    VAR_7->idx_ref = FUNC_1(VAR_5->decoder_pool);
    if (!VAR_7->idx_ref) {
        FUNC_3(VAR_3, VAR_0, "No decoder surfaces left\n");
        VAR_8 = FUNC_0(VAR_1);
        goto fail;
    }
    VAR_7->idx = *(unsigned int*)VAR_7->idx_ref->data;

    VAR_6->hwaccel_priv = VAR_7;
    VAR_6->hwaccel_priv_free = FUNC_5;
    VAR_6->post_process = VAR_2;

    return 0;
fail:
    FUNC_5(VAR_7);
    return VAR_8;

}
