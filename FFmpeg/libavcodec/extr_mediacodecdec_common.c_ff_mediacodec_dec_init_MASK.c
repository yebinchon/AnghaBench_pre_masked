
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_23__ {TYPE_1__* hw_device_ctx; TYPE_4__* hwaccel_context; } ;
struct TYPE_22__ {scalar_t__ type; scalar_t__ hwctx; } ;
struct TYPE_21__ {scalar_t__ surface; } ;
struct TYPE_20__ {scalar_t__ surface; } ;
struct TYPE_19__ {int current_input_buffer; void* codec; scalar_t__ format; void* codec_name; void* surface; int serial; int hw_buffer_count; int refcount; TYPE_6__* avctx; } ;
struct TYPE_18__ {scalar_t__ data; } ;
typedef TYPE_2__ MediaCodecDecContext ;
typedef int FFAMediaFormat ;
typedef TYPE_3__ AVMediaCodecDeviceContext ;
typedef TYPE_4__ AVMediaCodecContext ;
typedef TYPE_5__ AVHWDeviceContext ;
typedef TYPE_6__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (TYPE_6__*,int ,char*,...) ;
 void* FUNC_3 (char const*,int,int ,TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (void*,int *,void*,int *,int ) ;
 void* FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (void*) ;
 int FUNC_8 (void*) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (TYPE_6__*,int const*) ;
 int FUNC_11 (TYPE_6__*,TYPE_2__*) ;
 void* FUNC_12 (scalar_t__,TYPE_6__*) ;
 int FUNC_13 (TYPE_6__*,TYPE_2__*) ;

int FUNC_14(AVCodecContext *VAR_6, MediaCodecDecContext *VAR_7,
                           const char *VAR_8, FFAMediaFormat *VAR_9)
{
    int VAR_10 = 0;
    int VAR_11;
    int VAR_12;

    enum AVPixelFormat VAR_13;
    static const enum AVPixelFormat VAR_14[] = {
        129,
        128,
    };

    VAR_7->avctx = VAR_6;
    FUNC_0(&VAR_7->refcount, 1);
    FUNC_0(&VAR_7->hw_buffer_count, 0);
    FUNC_0(&VAR_7->serial, 1);
    VAR_7->current_input_buffer = -1;

    VAR_13 = FUNC_10(VAR_6, VAR_14);
    if (VAR_13 == 129) {
        AVMediaCodecContext *VAR_15 = VAR_6->hwaccel_context;

        if (VAR_6->hw_device_ctx) {
            AVHWDeviceContext *VAR_16 = (AVHWDeviceContext*)(VAR_6->hw_device_ctx->data);
            if (VAR_16->type == VAR_1) {
                if (VAR_16->hwctx) {
                    AVMediaCodecDeviceContext *VAR_17 = (AVMediaCodecDeviceContext *)VAR_16->hwctx;
                    VAR_7->surface = FUNC_12(VAR_17->surface, VAR_6);
                    FUNC_2(VAR_6, VAR_4, "Using surface %p\n", VAR_7->surface);
                }
            }
        }

        if (!VAR_7->surface && VAR_15 && VAR_15->surface) {
            VAR_7->surface = FUNC_12(VAR_15->surface, VAR_6);
            FUNC_2(VAR_6, VAR_4, "Using surface %p\n", VAR_7->surface);
        }
    }

    VAR_12 = FUNC_4(VAR_6);
    if (VAR_12 < 0) {
        FUNC_2(VAR_6, VAR_5, "Unsupported or unknown profile\n");
    }

    VAR_7->codec_name = FUNC_3(VAR_8, VAR_12, 0, VAR_6);
    if (!VAR_7->codec_name) {
        VAR_10 = VAR_0;
        goto fail;
    }

    FUNC_2(VAR_6, VAR_2, "Found decoder %s\n", VAR_7->codec_name);
    VAR_7->codec = FUNC_6(VAR_7->codec_name);
    if (!VAR_7->codec) {
        FUNC_2(VAR_6, VAR_3, "Failed to create media decoder for type %s and name %s\n", VAR_8, VAR_7->codec_name);
        VAR_10 = VAR_0;
        goto fail;
    }

    VAR_11 = FUNC_5(VAR_7->codec, VAR_9, VAR_7->surface, ((void*)0), 0);
    if (VAR_11 < 0) {
        char *VAR_18 = FUNC_9(VAR_9);
        FUNC_2(VAR_6, VAR_3,
            "Failed to configure codec %s (status = %d) with format %s\n",
            VAR_7->codec_name, VAR_11, VAR_18);
        FUNC_1(&VAR_18);

        VAR_10 = VAR_0;
        goto fail;
    }

    VAR_11 = FUNC_8(VAR_7->codec);
    if (VAR_11 < 0) {
        char *VAR_19 = FUNC_9(VAR_9);
        FUNC_2(VAR_6, VAR_3,
            "Failed to start codec %s (status = %d) with format %s\n",
            VAR_7->codec_name, VAR_11, VAR_19);
        FUNC_1(&VAR_19);
        VAR_10 = VAR_0;
        goto fail;
    }

    VAR_7->format = FUNC_7(VAR_7->codec);
    if (VAR_7->format) {
        if ((VAR_10 = FUNC_13(VAR_6, VAR_7)) < 0) {
            FUNC_2(VAR_6, VAR_3,
                "Failed to configure context\n");
            goto fail;
        }
    }

    FUNC_2(VAR_6, VAR_2, "MediaCodec %p started successfully\n", VAR_7->codec);

    return 0;

fail:
    FUNC_2(VAR_6, VAR_3, "MediaCodec %p failed to start\n", VAR_7->codec);
    FUNC_11(VAR_6, VAR_7);
    return VAR_10;
}
