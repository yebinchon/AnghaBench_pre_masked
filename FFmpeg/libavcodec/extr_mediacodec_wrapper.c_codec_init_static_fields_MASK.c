
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int info_output_format_changed_id; int mediacodec_class; int info_output_buffers_changed_id; int info_try_again_later_id; int configure_flag_encode_id; int buffer_flag_key_frame_id; int buffer_flag_end_of_stream_id; int buffer_flag_codec_config_id; } ;
struct TYPE_19__ {TYPE_1__ jfields; int INFO_OUTPUT_FORMAT_CHANGED; int INFO_OUTPUT_BUFFERS_CHANGED; int INFO_TRY_AGAIN_LATER; int CONFIGURE_FLAG_ENCODE; int BUFFER_FLAG_KEY_FRAME; int BUFFER_FLAG_END_OF_STREAM; int BUFFER_FLAG_CODEC_CONFIG; } ;
struct TYPE_18__ {int (* GetStaticIntField ) (TYPE_2__**,int ,int ) ;} ;
typedef TYPE_2__* JNIEnv ;
typedef TYPE_3__ FFAMediaCodec ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__**,TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_2__**,int,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__**,int ,int ) ;
 int FUNC_3 (TYPE_2__**,int ,int ) ;
 int FUNC_4 (TYPE_2__**,int ,int ) ;
 int FUNC_5 (TYPE_2__**,int ,int ) ;
 int FUNC_6 (TYPE_2__**,int ,int ) ;
 int FUNC_7 (TYPE_2__**,int ,int ) ;
 int FUNC_8 (TYPE_2__**,int ,int ) ;
 int FUNC_9 (TYPE_2__**,int ,int ) ;

__attribute__((used)) static int FUNC_10(FFAMediaCodec *VAR_1)
{
    int VAR_2 = 0;
    JNIEnv *VAR_3 = ((void*)0);

    FUNC_0(VAR_3, VAR_1, VAR_0);

    VAR_1->INFO_TRY_AGAIN_LATER = (*VAR_3)->GetStaticIntField(VAR_3, VAR_1->jfields.mediacodec_class, VAR_1->jfields.info_try_again_later_id);
    if ((VAR_2 = FUNC_1(VAR_3, 1, VAR_1)) < 0) {
        goto fail;
    }

    VAR_1->BUFFER_FLAG_CODEC_CONFIG = (*VAR_3)->GetStaticIntField(VAR_3, VAR_1->jfields.mediacodec_class, VAR_1->jfields.buffer_flag_codec_config_id);
    if ((VAR_2 = FUNC_1(VAR_3, 1, VAR_1)) < 0) {
        goto fail;
    }

    VAR_1->BUFFER_FLAG_END_OF_STREAM = (*VAR_3)->GetStaticIntField(VAR_3, VAR_1->jfields.mediacodec_class, VAR_1->jfields.buffer_flag_end_of_stream_id);
    if ((VAR_2 = FUNC_1(VAR_3, 1, VAR_1)) < 0) {
        goto fail;
    }

    if (VAR_1->jfields.buffer_flag_key_frame_id) {
        VAR_1->BUFFER_FLAG_KEY_FRAME = (*VAR_3)->GetStaticIntField(VAR_3, VAR_1->jfields.mediacodec_class, VAR_1->jfields.buffer_flag_key_frame_id);
        if ((VAR_2 = FUNC_1(VAR_3, 1, VAR_1)) < 0) {
            goto fail;
        }
    }

    VAR_1->CONFIGURE_FLAG_ENCODE = (*VAR_3)->GetStaticIntField(VAR_3, VAR_1->jfields.mediacodec_class, VAR_1->jfields.configure_flag_encode_id);
    if ((VAR_2 = FUNC_1(VAR_3, 1, VAR_1)) < 0) {
        goto fail;
    }

    VAR_1->INFO_TRY_AGAIN_LATER = (*VAR_3)->GetStaticIntField(VAR_3, VAR_1->jfields.mediacodec_class, VAR_1->jfields.info_try_again_later_id);
    if ((VAR_2 = FUNC_1(VAR_3, 1, VAR_1)) < 0) {
        goto fail;
    }

    VAR_1->INFO_OUTPUT_BUFFERS_CHANGED = (*VAR_3)->GetStaticIntField(VAR_3, VAR_1->jfields.mediacodec_class, VAR_1->jfields.info_output_buffers_changed_id);
    if ((VAR_2 = FUNC_1(VAR_3, 1, VAR_1)) < 0) {
        goto fail;
    }

    VAR_1->INFO_OUTPUT_FORMAT_CHANGED = (*VAR_3)->GetStaticIntField(VAR_3, VAR_1->jfields.mediacodec_class, VAR_1->jfields.info_output_format_changed_id);
    if ((VAR_2 = FUNC_1(VAR_3, 1, VAR_1)) < 0) {
        goto fail;
    }

fail:

    return VAR_2;
}
