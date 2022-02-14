
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef enum AVHWDeviceType { ____Placeholder_AVHWDeviceType } AVHWDeviceType ;
struct TYPE_24__ {scalar_t__ data; } ;
struct TYPE_23__ {scalar_t__ extra_hw_frames; TYPE_6__* hw_device_ctx; TYPE_4__** inputs; TYPE_1__* priv; } ;
struct TYPE_22__ {scalar_t__ format; int h; int w; TYPE_6__* hw_frames_ctx; TYPE_5__* src; } ;
struct TYPE_21__ {scalar_t__ format; scalar_t__ sw_format; scalar_t__ initial_pool_size; int height; int width; TYPE_6__* device_ref; } ;
struct TYPE_20__ {int flags; } ;
struct TYPE_19__ {int reverse; TYPE_6__* hwframes_ref; int mode; scalar_t__ derive_device_type; } ;
typedef TYPE_1__ HWMapContext ;
typedef TYPE_2__ AVPixFmtDescriptor ;
typedef TYPE_3__ AVHWFramesContext ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;
typedef TYPE_6__ AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__**) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_6__**,int,TYPE_6__*,int ) ;
 int FUNC_5 (scalar_t__) ;
 void* FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__**,scalar_t__,TYPE_6__*,TYPE_6__*,int ) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_5__*,int ,char*,...) ;
 TYPE_2__* FUNC_10 (scalar_t__) ;

__attribute__((used)) static int FUNC_11(AVFilterLink *VAR_6)
{
    AVFilterContext *VAR_7 = VAR_6->src;
    HWMapContext *VAR_8 = VAR_7->priv;
    AVFilterLink *VAR_9 = VAR_7->inputs[0];
    AVHWFramesContext *VAR_10;
    AVBufferRef *VAR_11;
    const AVPixFmtDescriptor *VAR_12;
    int VAR_13, VAR_14;

    FUNC_9(VAR_7, VAR_1, "Configure hwmap %s -> %s.\n",
           FUNC_3(VAR_9->format),
           FUNC_3(VAR_6->format));

    FUNC_2(&VAR_8->hwframes_ref);

    VAR_11 = VAR_7->hw_device_ctx;
    VAR_14 = 0;

    if (VAR_9->hw_frames_ctx) {
        VAR_10 = (AVHWFramesContext*)VAR_9->hw_frames_ctx->data;

        if (VAR_8->derive_device_type) {
            enum AVHWDeviceType VAR_15;

            VAR_15 = FUNC_5(VAR_8->derive_device_type);
            if (VAR_15 == VAR_0) {
                FUNC_9(VAR_7, VAR_2, "Invalid device type.\n");
                VAR_13 = FUNC_0(VAR_4);
                goto fail;
            }

            VAR_13 = FUNC_4(&VAR_11, VAR_15,
                                                 VAR_10->device_ref, 0);
            if (VAR_13 < 0) {
                FUNC_9(VAR_7, VAR_2, "Failed to created derived "
                       "device context: %d.\n", VAR_13);
                goto fail;
            }
            VAR_14 = 1;
        }

        VAR_12 = FUNC_10(VAR_6->format);
        if (!VAR_12) {
            VAR_13 = FUNC_0(VAR_4);
            goto fail;
        }

        if (VAR_9->format == VAR_10->format &&
            (VAR_12->flags & VAR_3) &&
            !VAR_8->reverse) {



            if (!VAR_11) {
                FUNC_9(VAR_7, VAR_2, "A device reference is "
                       "required to map to a hardware format.\n");
                VAR_13 = FUNC_0(VAR_4);
                goto fail;
            }

            VAR_13 = FUNC_7(&VAR_8->hwframes_ref,
                                                VAR_6->format,
                                                VAR_11,
                                                VAR_9->hw_frames_ctx,
                                                VAR_8->mode);
            if (VAR_13 < 0) {
                FUNC_9(VAR_7, VAR_2, "Failed to create derived "
                       "frames context: %d.\n", VAR_13);
                goto fail;
            }

        } else if (VAR_9->format == VAR_10->format &&
                   (VAR_12->flags & VAR_3) &&
                   VAR_8->reverse) {




            AVBufferRef *VAR_16;
            AVHWFramesContext *VAR_17;

            VAR_8->hwframes_ref = FUNC_6(VAR_11);
            if (!VAR_8->hwframes_ref) {
                VAR_13 = FUNC_0(VAR_5);
                goto fail;
            }
            VAR_17 = (AVHWFramesContext*)VAR_8->hwframes_ref->data;

            VAR_17->format = VAR_6->format;
            VAR_17->sw_format = VAR_10->sw_format;
            VAR_17->width = VAR_10->width;
            VAR_17->height = VAR_10->height;

            if (VAR_7->extra_hw_frames >= 0)
                VAR_17->initial_pool_size = 2 + VAR_7->extra_hw_frames;

            VAR_13 = FUNC_8(VAR_8->hwframes_ref);
            if (VAR_13 < 0) {
                FUNC_9(VAR_7, VAR_2, "Failed to initialise "
                       "target frames context: %d.\n", VAR_13);
                goto fail;
            }

            VAR_13 = FUNC_7(&VAR_16,
                                                VAR_9->format,
                                                VAR_10->device_ref,
                                                VAR_8->hwframes_ref,
                                                VAR_8->mode);
            if (VAR_13 < 0) {
                FUNC_9(VAR_7, VAR_2, "Failed to create "
                       "derived source frames context: %d.\n", VAR_13);
                goto fail;
            }







            FUNC_2(&VAR_9->hw_frames_ctx);
            VAR_9->hw_frames_ctx = VAR_16;

        } else if ((VAR_6->format == VAR_10->format &&
                    VAR_9->format == VAR_10->sw_format) ||
                   VAR_9->format == VAR_10->format) {



            VAR_8->hwframes_ref = FUNC_1(VAR_9->hw_frames_ctx);
            if (!VAR_8->hwframes_ref) {
                VAR_13 = FUNC_0(VAR_5);
                goto fail;
            }

        } else {


            FUNC_9(VAR_7, VAR_2, "Unsupported formats for "
                   "hwmap: from %s (%s) to %s.\n",
                   FUNC_3(VAR_9->format),
                   FUNC_3(VAR_10->format),
                   FUNC_3(VAR_6->format));
            VAR_13 = FUNC_0(VAR_4);
            goto fail;
        }
    } else if (VAR_7->hw_device_ctx) {





        if (!VAR_11) {
            FUNC_9(VAR_7, VAR_2, "A device reference is "
                   "required to create new frames with reverse "
                   "mapping.\n");
            VAR_13 = FUNC_0(VAR_4);
            goto fail;
        }

        VAR_8->reverse = 1;

        VAR_8->hwframes_ref = FUNC_6(VAR_11);
        if (!VAR_8->hwframes_ref) {
            VAR_13 = FUNC_0(VAR_5);
            goto fail;
        }
        VAR_10 = (AVHWFramesContext*)VAR_8->hwframes_ref->data;

        VAR_10->format = VAR_6->format;
        VAR_10->sw_format = VAR_9->format;
        VAR_10->width = VAR_9->w;
        VAR_10->height = VAR_9->h;

        if (VAR_7->extra_hw_frames >= 0)
            VAR_10->initial_pool_size = 2 + VAR_7->extra_hw_frames;

        VAR_13 = FUNC_8(VAR_8->hwframes_ref);
        if (VAR_13 < 0) {
            FUNC_9(VAR_7, VAR_2, "Failed to create frame "
                   "context for reverse mapping: %d.\n", VAR_13);
            goto fail;
        }

    } else {
        FUNC_9(VAR_7, VAR_2, "Mapping requires a hardware "
               "context (a device, or frames on input).\n");
        return FUNC_0(VAR_4);
    }

    VAR_6->hw_frames_ctx = FUNC_1(VAR_8->hwframes_ref);
    if (!VAR_6->hw_frames_ctx) {
        VAR_13 = FUNC_0(VAR_5);
        goto fail;
    }

    VAR_6->w = VAR_9->w;
    VAR_6->h = VAR_9->h;

    if (VAR_14)
        FUNC_2(&VAR_11);
    return 0;

fail:
    if (VAR_14)
        FUNC_2(&VAR_11);
    FUNC_2(&VAR_8->hwframes_ref);
    return VAR_13;
}
