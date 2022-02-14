
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_15__ ;


typedef int * jstring ;
typedef int * jobject ;
typedef int * jmethodID ;
struct TYPE_28__ {int init_id; int mediainfo_class; scalar_t__ get_output_buffer_id; scalar_t__ get_input_buffer_id; int mediacodec_class; int * create_encoder_by_type_id; int * create_decoder_by_type_id; int * create_by_codec_name_id; } ;
struct TYPE_30__ {int has_get_i_o_buffer; TYPE_15__ jfields; scalar_t__ buffer_info; scalar_t__ object; int * class; } ;
struct TYPE_29__ {int (* DeleteGlobalRef ) (TYPE_1__**,scalar_t__) ;int (* DeleteLocalRef ) (TYPE_1__**,int *) ;scalar_t__ (* NewGlobalRef ) (TYPE_1__**,int *) ;int * (* NewObject ) (TYPE_1__**,int ,int ) ;int * (* CallStaticObjectMethod ) (TYPE_1__**,int ,int *,int *) ;} ;
typedef TYPE_1__* JNIEnv ;
typedef TYPE_2__ FFAMediaCodec ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__**) ;
 TYPE_2__* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_1__**,int,TYPE_2__*) ;
 TYPE_1__** FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_1__**,TYPE_15__*,int ,int,TYPE_2__*) ;
 int FUNC_7 (TYPE_1__**,TYPE_15__*,int ,int,TYPE_2__*) ;
 int * FUNC_8 (TYPE_1__**,char const*,TYPE_2__*) ;
 int VAR_1 ;
 int * FUNC_9 (TYPE_1__**,int ,int *,int *) ;
 scalar_t__ FUNC_10 (TYPE_1__**,int *) ;
 int * FUNC_11 (TYPE_1__**,int ,int ) ;
 scalar_t__ FUNC_12 (TYPE_1__**,int *) ;
 int FUNC_13 (TYPE_1__**,int *) ;
 int FUNC_14 (TYPE_1__**,int *) ;
 int FUNC_15 (TYPE_1__**,int *) ;
 int FUNC_16 (TYPE_1__**,scalar_t__) ;
 int FUNC_17 (TYPE_1__**,scalar_t__) ;

__attribute__((used)) static inline FFAMediaCodec *FUNC_18(int VAR_2, const char *VAR_3)
{
    int VAR_4 = -1;
    JNIEnv *VAR_5 = ((void*)0);
    FFAMediaCodec *VAR_6 = ((void*)0);
    jstring VAR_7 = ((void*)0);
    jobject VAR_8 = ((void*)0);
    jobject VAR_9 = ((void*)0);
    jmethodID VAR_10 = ((void*)0);

    VAR_6 = FUNC_2(sizeof(FFAMediaCodec));
    if (!VAR_6) {
        return ((void*)0);
    }
    VAR_6->class = &VAR_0;

    VAR_5 = FUNC_5(VAR_6);
    if (!VAR_5) {
        FUNC_1(&VAR_6);
        return ((void*)0);
    }

    if (FUNC_6(VAR_5, &VAR_6->jfields, VAR_1, 1, VAR_6) < 0) {
        goto fail;
    }

    VAR_7 = FUNC_8(VAR_5, VAR_3, VAR_6);
    if (!VAR_7) {
        goto fail;
    }

    switch (VAR_2) {
    case 130: VAR_10 = VAR_6->jfields.create_by_codec_name_id; break;
    case 129: VAR_10 = VAR_6->jfields.create_decoder_by_type_id; break;
    case 128: VAR_10 = VAR_6->jfields.create_encoder_by_type_id; break;
    default:
        FUNC_0(0);
    }

    VAR_8 = (*VAR_5)->CallStaticObjectMethod(VAR_5,
                                            VAR_6->jfields.mediacodec_class,
                                            VAR_10,
                                            VAR_7);
    if (FUNC_4(VAR_5, 1, VAR_6) < 0) {
        goto fail;
    }

    VAR_6->object = (*VAR_5)->NewGlobalRef(VAR_5, VAR_8);
    if (!VAR_6->object) {
        goto fail;
    }

    if (FUNC_3(VAR_6) < 0) {
        goto fail;
    }

    if (VAR_6->jfields.get_input_buffer_id && VAR_6->jfields.get_output_buffer_id) {
        VAR_6->has_get_i_o_buffer = 1;
    }

    VAR_9 = (*VAR_5)->NewObject(VAR_5, VAR_6->jfields.mediainfo_class, VAR_6->jfields.init_id);
    if (FUNC_4(VAR_5, 1, VAR_6) < 0) {
        goto fail;
    }

    VAR_6->buffer_info = (*VAR_5)->NewGlobalRef(VAR_5, VAR_9);
    if (!VAR_6->buffer_info) {
        goto fail;
    }

    VAR_4 = 0;
fail:
    if (VAR_7) {
        (*VAR_5)->DeleteLocalRef(VAR_5, VAR_7);
    }

    if (VAR_8) {
        (*VAR_5)->DeleteLocalRef(VAR_5, VAR_8);
    }

    if (VAR_9) {
        (*VAR_5)->DeleteLocalRef(VAR_5, VAR_9);
    }

    if (VAR_4 < 0) {
        if (VAR_6->object) {
            (*VAR_5)->DeleteGlobalRef(VAR_5, VAR_6->object);
        }

        if (VAR_6->buffer_info) {
            (*VAR_5)->DeleteGlobalRef(VAR_5, VAR_6->buffer_info);
        }

        FUNC_7(VAR_5, &VAR_6->jfields, VAR_1, 1, VAR_6);
        FUNC_1(&VAR_6);
    }

    return VAR_6;
}
