
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct dshow_ctx {scalar_t__ video_codec_id; scalar_t__ pixel_format; int * event; int * media_event; int * control; int mutex; scalar_t__* curbufsize; scalar_t__ list_options; scalar_t__* device_name; scalar_t__ list_devices; int * graph; scalar_t__ framerate; int requested_framerate; } ;
struct TYPE_10__ {scalar_t__ video_codec_id; struct dshow_ctx* priv_data; } ;
typedef int OAFilterState ;
typedef int IMediaEvent ;
typedef int IMediaControl ;
typedef int IGraphBuilder ;
typedef int ICreateDevEnum ;
typedef int HANDLE ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int *,int ,int *,void**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int ,int *) ;
 int FUNC_4 (int *,int ,int *) ;
 int VAR_10 ;
 int FUNC_5 (int ,int ,int ,int *,int ,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,void**) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,void*) ;
 int VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 int FUNC_12 (TYPE_1__*,int ,char*,...) ;
 int FUNC_13 (int *,scalar_t__) ;
 int FUNC_14 (TYPE_1__*,size_t) ;
 int FUNC_15 (TYPE_1__*,int *,size_t,int ,int *,int *) ;
 int FUNC_16 (TYPE_1__*,int *,size_t,int ) ;
 int FUNC_17 (TYPE_1__*,int *,size_t,int ) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_20(AVFormatContext *VAR_21)
{
    struct dshow_ctx *VAR_22 = VAR_21->priv_data;
    IGraphBuilder *VAR_23 = ((void*)0);
    ICreateDevEnum *VAR_24 = ((void*)0);
    IMediaControl *VAR_25 = ((void*)0);
    IMediaEvent *VAR_26 = ((void*)0);
    HANDLE VAR_27;
    HANDLE VAR_28;
    int VAR_29 = FUNC_0(VAR_12);
    int VAR_30;

    FUNC_2(0);

    if (!VAR_22->list_devices && !FUNC_19(VAR_21)) {
        FUNC_12(VAR_21, VAR_2, "Malformed dshow input string.\n");
        goto error;
    }

    VAR_22->video_codec_id = VAR_21->video_codec_id ? VAR_21->video_codec_id
                                                : VAR_1;
    if (VAR_22->pixel_format != VAR_4) {
        if (VAR_22->video_codec_id != VAR_1) {
            FUNC_12(VAR_21, VAR_2, "Pixel format may only be set when "
                              "video codec is not set or set to rawvideo\n");
            VAR_29 = FUNC_0(VAR_11);
            goto error;
        }
    }
    if (VAR_22->framerate) {
        VAR_30 = FUNC_13(&VAR_22->requested_framerate, VAR_22->framerate);
        if (VAR_30 < 0) {
            FUNC_12(VAR_21, VAR_2, "Could not parse framerate '%s'.\n", VAR_22->framerate);
            goto error;
        }
    }

    VAR_30 = FUNC_1(&VAR_8, ((void*)0), VAR_7,
                         &VAR_14, (void **) &VAR_23);
    if (VAR_30 != VAR_18) {
        FUNC_12(VAR_21, VAR_2, "Could not create capture graph.\n");
        goto error;
    }
    VAR_22->graph = VAR_23;

    VAR_30 = FUNC_1(&VAR_9, ((void*)0), VAR_7,
                         &VAR_13, (void **) &VAR_24);
    if (VAR_30 != VAR_18) {
        FUNC_12(VAR_21, VAR_2, "Could not enumerate system devices.\n");
        goto error;
    }

    if (VAR_22->list_devices) {
        FUNC_12(VAR_21, VAR_3, "DirectShow video devices (some may be both video and audio devices)\n");
        FUNC_15(VAR_21, VAR_24, VAR_19, VAR_20, ((void*)0), ((void*)0));
        FUNC_12(VAR_21, VAR_3, "DirectShow audio devices\n");
        FUNC_15(VAR_21, VAR_24, VAR_5, VAR_6, ((void*)0), ((void*)0));
        VAR_29 = VAR_0;
        goto error;
    }
    if (VAR_22->list_options) {
        if (VAR_22->device_name[VAR_19])
            if ((VAR_30 = FUNC_16(VAR_21, VAR_24, VAR_19, VAR_20))) {
                VAR_29 = VAR_30;
                goto error;
            }
        if (VAR_22->device_name[VAR_5]) {
            if (FUNC_16(VAR_21, VAR_24, VAR_5, VAR_6)) {

                if ((VAR_30 = FUNC_16(VAR_21, VAR_24, VAR_5, VAR_20))) {
                    VAR_29 = VAR_30;
                    goto error;
                }
            }
        }
    }
    if (VAR_22->device_name[VAR_19]) {
        if ((VAR_30 = FUNC_17(VAR_21, VAR_24, VAR_19, VAR_20)) < 0 ||
            (VAR_30 = FUNC_14(VAR_21, VAR_19)) < 0) {
            VAR_29 = VAR_30;
            goto error;
        }
    }
    if (VAR_22->device_name[VAR_5]) {
        if ((VAR_30 = FUNC_17(VAR_21, VAR_24, VAR_5, VAR_6)) < 0 ||
            (VAR_30 = FUNC_14(VAR_21, VAR_5)) < 0) {
            FUNC_12(VAR_21, VAR_3, "Searching for audio device within video devices for %s\n", VAR_22->device_name[VAR_5]);

            if ((VAR_30 = FUNC_17(VAR_21, VAR_24, VAR_5, VAR_20)) < 0 ||
                (VAR_30 = FUNC_14(VAR_21, VAR_5)) < 0) {
                VAR_29 = VAR_30;
                goto error;
            }
        }
    }
    if (VAR_22->list_options) {

        VAR_29 = VAR_0;
        goto error;
    }
    VAR_22->curbufsize[0] = 0;
    VAR_22->curbufsize[1] = 0;
    VAR_22->mutex = FUNC_4(((void*)0), 0, ((void*)0));
    if (!VAR_22->mutex) {
        FUNC_12(VAR_21, VAR_2, "Could not create Mutex\n");
        goto error;
    }
    VAR_22->event[1] = FUNC_3(((void*)0), 1, 0, ((void*)0));
    if (!VAR_22->event[1]) {
        FUNC_12(VAR_21, VAR_2, "Could not create Event\n");
        goto error;
    }

    VAR_30 = FUNC_8(VAR_23, &VAR_15, (void **) &VAR_25);
    if (VAR_30 != VAR_18) {
        FUNC_12(VAR_21, VAR_2, "Could not get media control.\n");
        goto error;
    }
    VAR_22->control = VAR_25;

    VAR_30 = FUNC_8(VAR_23, &VAR_16, (void **) &VAR_26);
    if (VAR_30 != VAR_18) {
        FUNC_12(VAR_21, VAR_2, "Could not get media event.\n");
        goto error;
    }
    VAR_22->media_event = VAR_26;

    VAR_30 = FUNC_11(VAR_26, (void *) &VAR_27);
    if (VAR_30 != VAR_18) {
        FUNC_12(VAR_21, VAR_2, "Could not get media event handle.\n");
        goto error;
    }
    VAR_28 = FUNC_6();
    VAR_30 = FUNC_5(VAR_28, VAR_27, VAR_28, &VAR_22->event[0],
                        0, 0, VAR_10);
    if (!VAR_30) {
        FUNC_12(VAR_21, VAR_2, "Could not duplicate media event handle.\n");
        goto error;
    }

    VAR_30 = FUNC_10(VAR_25);
    if (VAR_30 == VAR_17) {
        OAFilterState VAR_31;
        VAR_30 = FUNC_9(VAR_25, 0, &VAR_31);
    }
    if (VAR_30 != VAR_18) {
        FUNC_12(VAR_21, VAR_2, "Could not run graph (sometimes caused by a device already in use by other application)\n");
        goto error;
    }

    VAR_29 = 0;

error:

    if (VAR_24)
        FUNC_7(VAR_24);

    if (VAR_29 < 0)
        FUNC_18(VAR_21);

    return VAR_29;
}
