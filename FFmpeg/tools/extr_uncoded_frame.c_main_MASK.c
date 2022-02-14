
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_10__ ;


struct TYPE_36__ {scalar_t__ pb; int url; TYPE_1__* oformat; } ;
struct TYPE_35__ {int nb_inputs; int nb_outputs; int * outputs; int * inputs; } ;
struct TYPE_34__ {int nb_filters; TYPE_6__** filters; } ;
struct TYPE_33__ {scalar_t__ pts; } ;
struct TYPE_32__ {TYPE_9__* mux; TYPE_10__* stream; int sink; } ;
struct TYPE_31__ {int codec_type; void* format; int codec_id; int sample_rate; int channels; int channel_layout; int sample_aspect_ratio; int height; int width; } ;
struct TYPE_30__ {int flags; } ;
struct TYPE_29__ {int index; int time_base; TYPE_2__* codecpar; int r_frame_rate; int avg_frame_rate; } ;
typedef TYPE_3__ Stream ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterGraph ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_4__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 TYPE_3__* FUNC_13 (int,int) ;
 int FUNC_14 (int) ;
 TYPE_4__* FUNC_15 () ;
 int FUNC_16 (TYPE_4__**) ;
 int FUNC_17 (TYPE_3__**) ;
 int FUNC_18 (void*,int) ;
 int FUNC_19 (TYPE_9__*,int ,TYPE_4__*) ;
 int FUNC_20 (TYPE_9__*,int ,char*,...) ;
 scalar_t__ FUNC_21 (scalar_t__,int ,int ) ;
 int FUNC_22 (TYPE_9__*) ;
 int FUNC_23 (TYPE_9__*,int ) ;
 int FUNC_24 () ;
 TYPE_5__* FUNC_25 () ;
 int FUNC_26 (TYPE_5__*,int *) ;
 int FUNC_27 (TYPE_5__**) ;
 int FUNC_28 (TYPE_5__*,char*,int *,int *,int *) ;
 int FUNC_29 (TYPE_5__*) ;
 int FUNC_30 (TYPE_9__**,int *,char*,char*) ;
 int FUNC_31 (TYPE_9__*) ;
 TYPE_10__* FUNC_32 (TYPE_9__*,int *) ;
 int FUNC_33 (TYPE_9__*,int *) ;
 int FUNC_34 (scalar_t__*) ;
 int FUNC_35 (scalar_t__*,int ,int ,int *,int *) ;
 int FUNC_36 (int ,TYPE_5__*,TYPE_6__*,int) ;
 int FUNC_37 (int) ;
 char* FUNC_38 (char*,char) ;

int FUNC_39(int VAR_11, char **VAR_12)
{
    char *VAR_13, **VAR_14;
    int VAR_15 = 0, VAR_16 = 0;
    AVFilterGraph *VAR_17 = ((void*)0);
    Stream *VAR_18 = ((void*)0), *VAR_19;
    AVFrame *VAR_20 = ((void*)0);
    int VAR_21, VAR_22, VAR_23 = 1, VAR_24;



    if (VAR_11 < 3) {
        FUNC_20(((void*)0), VAR_5,
               "Usage: %s filter_graph dev:out [dev2:out2...]\n\n"
               "Examples:\n"
               "%s movie=file.nut:s=v+a xv:- alsa:default\n"
               "%s movie=file.nut:s=v+a uncodedframecrc:pipe:0\n",
               VAR_12[0], VAR_12[0], VAR_12[0]);
        FUNC_37(1);
    }
    VAR_13 = VAR_12[1];
    VAR_14 = VAR_12 + 2;
    VAR_15 = VAR_11 - 2;

    FUNC_24();


    if (!(VAR_17 = FUNC_25())) {
        VAR_24 = FUNC_0(VAR_10);
        FUNC_20(((void*)0), VAR_5, "Unable to alloc graph graph: %s\n",
               FUNC_14(VAR_24));
        goto fail;
    }
    VAR_24 = FUNC_28(VAR_17, VAR_13, ((void*)0), ((void*)0), ((void*)0));
    if (VAR_24 < 0) {
        FUNC_20(((void*)0), VAR_5, "Unable to parse graph: %s\n",
               FUNC_14(VAR_24));
        goto fail;
    }
    VAR_16 = 0;
    for (VAR_21 = 0; VAR_21 < VAR_17->nb_filters; VAR_21++) {
        AVFilterContext *VAR_25 = VAR_17->filters[VAR_21];
        for (VAR_22 = 0; VAR_22 < VAR_25->nb_inputs; VAR_22++) {
            if (!VAR_25->inputs[VAR_22]) {
                FUNC_20(((void*)0), VAR_5, "Graph has unconnected inputs\n");
                VAR_24 = FUNC_0(VAR_9);
                goto fail;
            }
        }
        for (VAR_22 = 0; VAR_22 < VAR_25->nb_outputs; VAR_22++)
            if (!VAR_25->outputs[VAR_22])
                VAR_16++;
    }
    if (!VAR_16) {
        FUNC_20(((void*)0), VAR_5, "Graph has no output stream\n");
        VAR_24 = FUNC_0(VAR_9);
        goto fail;
    }
    if (VAR_15 != 1 && VAR_15 != VAR_16) {
        FUNC_20(((void*)0), VAR_5,
               "Graph has %d output streams, %d devices given\n",
               VAR_16, VAR_15);
        VAR_24 = FUNC_0(VAR_9);
        goto fail;
    }

    if (!(VAR_18 = FUNC_13(VAR_16, sizeof(*VAR_18)))) {
        VAR_24 = FUNC_0(VAR_10);
        FUNC_20(((void*)0), VAR_5, "Could not allocate streams\n");
    }
    VAR_19 = VAR_18;
    for (VAR_21 = 0; VAR_21 < VAR_17->nb_filters; VAR_21++) {
        AVFilterContext *VAR_26 = VAR_17->filters[VAR_21];
        for (VAR_22 = 0; VAR_22 < VAR_26->nb_outputs; VAR_22++) {
            if (!VAR_26->outputs[VAR_22]) {
                if ((VAR_24 = FUNC_36(VAR_19++, VAR_17, VAR_26, VAR_22)) < 0)
                    goto fail;
            }
        }
    }
    FUNC_1(VAR_19 - VAR_18 == VAR_16);
    if ((VAR_24 = FUNC_26(VAR_17, ((void*)0))) < 0) {
        FUNC_20(((void*)0), VAR_5, "Failed to configure graph\n");
        goto fail;
    }


    for (VAR_21 = 0; VAR_21 < VAR_15; VAR_21++) {
        char *VAR_27 = ((void*)0), *VAR_28 = VAR_14[VAR_21];
        VAR_19 = &VAR_18[VAR_21];
        if ((VAR_28 = FUNC_38(VAR_28, ':'))) {
            *(VAR_28++) = 0;
            VAR_27 = VAR_14[VAR_21];
        }
        VAR_24 = FUNC_30(&VAR_19->mux, ((void*)0), VAR_27, VAR_28);
        if (VAR_24 < 0) {
            FUNC_20(((void*)0), VAR_5, "Failed to allocate output: %s\n",
                   FUNC_14(VAR_24));
            goto fail;
        }
        if (!(VAR_19->mux->oformat->flags & VAR_1)) {
            VAR_24 = FUNC_35(&VAR_19->mux->pb, VAR_19->mux->url, VAR_2,
                             ((void*)0), ((void*)0));
            if (VAR_24 < 0) {
                FUNC_20(VAR_19->mux, VAR_5, "Failed to init output: %s\n",
                       FUNC_14(VAR_24));
                goto fail;
            }
        }
    }
    for (; VAR_21 < VAR_16; VAR_21++)
        VAR_18[VAR_21].mux = VAR_18[0].mux;


    for (VAR_21 = 0; VAR_21 < VAR_16; VAR_21++) {
        VAR_19 = &VAR_18[VAR_21];
        if (!(VAR_19->stream = FUNC_32(VAR_19->mux, ((void*)0)))) {
            VAR_24 = FUNC_0(VAR_10);
            FUNC_20(((void*)0), VAR_5, "Failed to create output stream\n");
            goto fail;
        }
        VAR_19->stream->codecpar->codec_type = FUNC_11(VAR_19->sink);
        VAR_19->stream->time_base = FUNC_10(VAR_19->sink);
        switch (FUNC_11(VAR_19->sink)) {
        case 128:
            VAR_19->stream->codecpar->codec_id = VAR_4;
            VAR_19->stream->avg_frame_rate =
            VAR_19->stream-> r_frame_rate = FUNC_6(VAR_19->sink);
            VAR_19->stream->codecpar->width = FUNC_12(VAR_19->sink);
            VAR_19->stream->codecpar->height = FUNC_7(VAR_19->sink);
            VAR_19->stream->codecpar->sample_aspect_ratio = FUNC_8(VAR_19->sink);
            VAR_19->stream->codecpar->format = FUNC_4(VAR_19->sink);
            break;
        case 129:
            VAR_19->stream->codecpar->channel_layout = FUNC_2(VAR_19->sink);
            VAR_19->stream->codecpar->channels = FUNC_3(VAR_19->sink);
            VAR_19->stream->codecpar->sample_rate = FUNC_9(VAR_19->sink);
            VAR_19->stream->codecpar->format = FUNC_4(VAR_19->sink);
            VAR_19->stream->codecpar->codec_id = FUNC_18(VAR_19->stream->codecpar->format, -1);
            break;
        default:
            FUNC_1(!"reached");
        }
    }


    for (VAR_21 = 0; VAR_21 < VAR_15; VAR_21++) {
        VAR_19 = &VAR_18[VAR_21];
        if ((VAR_24 = FUNC_33(VAR_19->mux, ((void*)0))) < 0) {
            FUNC_20(VAR_19->mux, VAR_5, "Failed to init output: %s\n",
                   FUNC_14(VAR_24));
            goto fail;
        }
    }


    for (VAR_21 = 0; VAR_21 < VAR_16; VAR_21++) {
        VAR_19 = &VAR_18[VAR_21];
        VAR_24 = FUNC_23(VAR_19->mux, VAR_19->stream->index);
        if (VAR_24 < 0) {
            FUNC_20(VAR_19->mux, VAR_5,
                   "Uncoded frames not supported on stream #%d: %s\n",
                   VAR_21, FUNC_14(VAR_24));
            goto fail;
        }
    }

    while (VAR_23) {
        VAR_24 = FUNC_29(VAR_17);
        if (VAR_24 < 0) {
            if (VAR_24 == VAR_0) {
                VAR_23 = 0;
            } else {
                FUNC_20(((void*)0), VAR_5, "Error filtering: %s\n",
                       FUNC_14(VAR_24));
                break;
            }
        }
        for (VAR_21 = 0; VAR_21 < VAR_16; VAR_21++) {
            VAR_19 = &VAR_18[VAR_21];
            while (1) {
                if (!VAR_20 && !(VAR_20 = FUNC_15())) {
                    VAR_24 = FUNC_0(VAR_10);
                    FUNC_20(((void*)0), VAR_5, "Could not allocate frame\n");
                    goto fail;
                }
                VAR_24 = FUNC_5(VAR_19->sink, VAR_20,
                                                    VAR_3);
                if (VAR_24 < 0) {
                    if (VAR_24 != FUNC_0(VAR_8) && VAR_24 != VAR_0)
                        FUNC_20(((void*)0), VAR_6, "Error in sink: %s\n",
                               FUNC_14(VAR_24));
                    break;
                }
                if (VAR_20->pts != VAR_7)
                    VAR_20->pts = FUNC_21(VAR_20->pts,
                                              FUNC_10(VAR_19->sink),
                                              VAR_19->stream->time_base);
                VAR_24 = FUNC_19(VAR_19->mux,
                                                         VAR_19->stream->index,
                                                         VAR_20);
                VAR_20 = ((void*)0);
                if (VAR_24 < 0) {
                    FUNC_20(VAR_19->mux, VAR_5,
                           "Error writing frame: %s\n", FUNC_14(VAR_24));
                    goto fail;
                }
            }
        }
    }
    VAR_24 = 0;

    for (VAR_21 = 0; VAR_21 < VAR_15; VAR_21++) {
        VAR_19 = &VAR_18[VAR_21];
        FUNC_22(VAR_19->mux);
    }

fail:
    FUNC_16(&VAR_20);
    FUNC_27(&VAR_17);
    if (VAR_18) {
        for (VAR_21 = 0; VAR_21 < VAR_15; VAR_21++) {
            VAR_19 = &VAR_18[VAR_21];
            if (VAR_19->mux) {
                if (VAR_19->mux->pb)
                    FUNC_34(&VAR_19->mux->pb);
                FUNC_31(VAR_19->mux);
            }
        }
    }
    FUNC_17(&VAR_18);
    return VAR_24 < 0;
}
