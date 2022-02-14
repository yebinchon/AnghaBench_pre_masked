
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_30__ {int len; int str; } ;
struct TYPE_29__ {int value; int key; } ;
struct TYPE_28__ {TYPE_1__* priv_data; } ;
struct TYPE_27__ {int channels; int nb_samples; int pkt_pos; int pts; int * metadata; int * data; int format; int height; scalar_t__ width; int linesize; } ;
struct TYPE_26__ {int size; int stream_index; int pos; int pts; int * data; } ;
struct TYPE_25__ {int nb_sinks; int* sink_eof; int* sink_stream_map; int * sinks; TYPE_2__ subcc_packet; TYPE_3__* decoded_frame; } ;
typedef TYPE_1__ LavfiContext ;
typedef int AVRational ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVDictionaryEntry ;
typedef int AVDictionary ;
typedef TYPE_6__ AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 double VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_6__*,char,int) ;
 int FUNC_2 (TYPE_6__*,int *) ;
 int FUNC_3 (TYPE_6__*,int ,int ) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,char*,int ) ;
 int FUNC_6 (int ,TYPE_3__*,int ) ;
 int FUNC_7 (int ) ;
 TYPE_5__* FUNC_8 (int *,char*,TYPE_5__*,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int,int const**,int ,int ,scalar_t__,int ,int) ;
 int FUNC_12 (int ,scalar_t__,int ,int) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int) ;
 int * FUNC_15 (TYPE_2__*,int ,int) ;
 int FUNC_16 (TYPE_2__*) ;
 double FUNC_17 (int ,int ,int ,int) ;
 int FUNC_18 (TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_19 (TYPE_4__*,char*,int,...) ;
 int FUNC_20 (int *,int ,int) ;

__attribute__((used)) static int FUNC_21(AVFormatContext *VAR_10, AVPacket *VAR_11)
{
    LavfiContext *VAR_12 = VAR_10->priv_data;
    double VAR_13 = VAR_8;
    int VAR_14, VAR_15 = 0;
    AVFrame *VAR_16 = VAR_12->decoded_frame;
    AVDictionary *VAR_17;
    int VAR_18, VAR_19;
    int VAR_20 = 0;

    if (VAR_12->subcc_packet.size) {
        *VAR_11 = VAR_12->subcc_packet;
        FUNC_13(&VAR_12->subcc_packet);
        VAR_12->subcc_packet.size = 0;
        VAR_12->subcc_packet.data = ((void*)0);
        return VAR_11->size;
    }



    for (VAR_19 = 0; VAR_19 < VAR_12->nb_sinks; VAR_19++) {
        AVRational VAR_21 = FUNC_7(VAR_12->sinks[VAR_19]);
        double VAR_22;
        int VAR_23;

        if (VAR_12->sink_eof[VAR_19])
            continue;

        VAR_23 = FUNC_6(VAR_12->sinks[VAR_19], VAR_16,
                                            VAR_2);
        if (VAR_23 == VAR_0) {
            FUNC_19(VAR_10, "EOF sink_idx:%d\n", VAR_19);
            VAR_12->sink_eof[VAR_19] = 1;
            continue;
        } else if (VAR_23 < 0)
            return VAR_23;
        VAR_22 = FUNC_17(VAR_16->pts, VAR_21, VAR_7, VAR_5|VAR_6);
        FUNC_19(VAR_10, "sink_idx:%d time:%f\n", VAR_19, VAR_22);
        FUNC_9(VAR_16);

        if (VAR_22 < VAR_13) {
            VAR_13 = VAR_22;
            VAR_15 = VAR_19;
        }
    }
    if (VAR_13 == VAR_8)
        return VAR_0;

    FUNC_19(VAR_10, "min_pts_sink_idx:%i\n", VAR_15);

    FUNC_6(VAR_12->sinks[VAR_15], VAR_16, 0);
    VAR_14 = VAR_12->sink_stream_map[VAR_15];

    if (VAR_16->width ) {
        VAR_20 = FUNC_12(VAR_16->format, VAR_16->width, VAR_16->height, 1);
        if ((VAR_18 = FUNC_14(VAR_11, VAR_20)) < 0)
            return VAR_18;

        FUNC_11(VAR_11->data, VAR_20, (const uint8_t **)VAR_16->data, VAR_16->linesize,
                                VAR_16->format, VAR_16->width, VAR_16->height, 1);
    } else if (VAR_16->channels ) {
        VAR_20 = VAR_16->nb_samples * FUNC_10(VAR_16->format) *
                                   VAR_16->channels;
        if ((VAR_18 = FUNC_14(VAR_11, VAR_20)) < 0)
            return VAR_18;
        FUNC_20(VAR_11->data, VAR_16->data[0], VAR_20);
    }

    VAR_17 = VAR_16->metadata;
    if (VAR_17) {
        uint8_t *VAR_24;
        AVDictionaryEntry *VAR_25 = ((void*)0);
        AVBPrint VAR_26;

        FUNC_3(&VAR_26, 0, VAR_1);
        while ((VAR_25 = FUNC_8(VAR_17, "", VAR_25, VAR_3))) {
            FUNC_5(&VAR_26, "%s", VAR_25->key);
            FUNC_1(&VAR_26, '\0', 1);
            FUNC_5(&VAR_26, "%s", VAR_25->value);
            FUNC_1(&VAR_26, '\0', 1);
        }
        if (!FUNC_4(&VAR_26) ||
            !(VAR_24 = FUNC_15(VAR_11, VAR_4,
                                                 VAR_26.len))) {
            FUNC_2(&VAR_26, ((void*)0));
            return FUNC_0(VAR_9);
        }
        FUNC_20(VAR_24, VAR_26.str, VAR_26.len);
        FUNC_2(&VAR_26, ((void*)0));
    }

    if ((VAR_18 = FUNC_18(VAR_10, VAR_16, VAR_15)) < 0) {
        FUNC_9(VAR_16);
        FUNC_16(VAR_11);
        return VAR_18;
    }

    VAR_11->stream_index = VAR_14;
    VAR_11->pts = VAR_16->pts;
    VAR_11->pos = VAR_16->pkt_pos;
    VAR_11->size = VAR_20;
    FUNC_9(VAR_16);
    return VAR_20;
}
