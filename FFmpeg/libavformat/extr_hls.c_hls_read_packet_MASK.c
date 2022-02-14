
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;


struct TYPE_26__ {scalar_t__ stream_index; scalar_t__ dts; int flags; scalar_t__ data; } ;
struct playlist {scalar_t__ seek_timestamp; scalar_t__ seek_stream_index; int seek_flags; scalar_t__ n_main_streams; TYPE_5__ pkt; TYPE_3__** main_streams; TYPE_17__* ctx; scalar_t__ has_noheader_flag; scalar_t__ is_id3_timestamped; int pb; scalar_t__ needed; } ;
typedef scalar_t__ int64_t ;
struct TYPE_27__ {TYPE_2__* priv_data; } ;
struct TYPE_25__ {int den; } ;
struct TYPE_24__ {size_t index; TYPE_1__* codecpar; TYPE_4__ time_base; int event_flags; int metadata; } ;
struct TYPE_23__ {int n_playlists; scalar_t__ first_timestamp; void* cur_timestamp; struct playlist** playlists; scalar_t__ first_packet; } ;
struct TYPE_22__ {scalar_t__ codec_id; } ;
struct TYPE_21__ {int event_flags; int ctx_flags; TYPE_3__** streams; int nb_streams; int metadata; } ;
typedef TYPE_2__ HLSContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVRational ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFormatContext ;


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
 int VAR_11 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_6__*,int ,char*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_17__*,TYPE_5__*) ;
 void* FUNC_4 (scalar_t__,TYPE_4__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (scalar_t__,struct playlist*,scalar_t__,struct playlist*) ;
 int FUNC_8 (struct playlist*) ;
 TYPE_4__ FUNC_9 (struct playlist*) ;
 int FUNC_10 (TYPE_6__*,scalar_t__) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_3__*,struct playlist*,TYPE_3__*) ;
 int FUNC_13 (TYPE_6__*) ;
 int FUNC_14 (TYPE_6__*,struct playlist*) ;

__attribute__((used)) static int FUNC_15(AVFormatContext *VAR_12, AVPacket *VAR_13)
{
    HLSContext *VAR_14 = VAR_12->priv_data;
    int VAR_15, VAR_16, VAR_17 = -1;

    FUNC_10(VAR_12, VAR_14->first_packet);
    VAR_14->first_packet = 0;

    for (VAR_16 = 0; VAR_16 < VAR_14->n_playlists; VAR_16++) {
        struct playlist *VAR_18 = VAR_14->playlists[VAR_16];


        if (VAR_18->needed && !VAR_18->pkt.data) {
            while (1) {
                int64_t VAR_19;
                AVRational VAR_20;
                VAR_15 = FUNC_3(VAR_18->ctx, &VAR_18->pkt);
                if (VAR_15 < 0) {
                    if (!FUNC_6(&VAR_18->pb) && VAR_15 != VAR_1)
                        return VAR_15;
                    FUNC_11(&VAR_18->pkt);
                    break;
                } else {

                    if (VAR_18->is_id3_timestamped && VAR_18->pkt.stream_index == 0) {

                        FUNC_8(VAR_18);
                    }

                    if (VAR_14->first_timestamp == VAR_7 &&
                        VAR_18->pkt.dts != VAR_7)
                        VAR_14->first_timestamp = FUNC_4(VAR_18->pkt.dts,
                            FUNC_9(VAR_18), VAR_11);
                }

                if (VAR_18->seek_timestamp == VAR_7)
                    break;

                if (VAR_18->seek_stream_index < 0 ||
                    VAR_18->seek_stream_index == VAR_18->pkt.stream_index) {

                    if (VAR_18->pkt.dts == VAR_7) {
                        VAR_18->seek_timestamp = VAR_7;
                        break;
                    }

                    VAR_20 = FUNC_9(VAR_18);
                    VAR_19 = FUNC_5(VAR_18->pkt.dts, VAR_10,
                                            VAR_20.den, VAR_9) -
                            VAR_18->seek_timestamp;
                    if (VAR_19 >= 0 && (VAR_18->seek_flags & VAR_4 ||
                                        VAR_18->pkt.flags & VAR_8)) {
                        VAR_18->seek_timestamp = VAR_7;
                        break;
                    }
                }
                FUNC_2(&VAR_18->pkt);
            }
        }

        if (VAR_18->pkt.data) {
            struct playlist *VAR_21 = VAR_17 < 0 ?
                                     ((void*)0) : VAR_14->playlists[VAR_17];
            if (VAR_17 < 0) {
                VAR_17 = VAR_16;
            } else {
                int64_t VAR_22 = VAR_18->pkt.dts;
                int64_t VAR_23 = VAR_21->pkt.dts;

                if (VAR_22 == VAR_7 ||
                    (VAR_23 != VAR_7 && FUNC_7(VAR_22, VAR_18, VAR_23, VAR_21) < 0))
                    VAR_17 = VAR_16;
            }
        }
    }


    if (VAR_17 >= 0) {
        struct playlist *VAR_24 = VAR_14->playlists[VAR_17];
        AVStream *VAR_25;
        AVStream *VAR_26;

        VAR_15 = FUNC_14(VAR_12, VAR_24);
        if (VAR_15 < 0) {
            FUNC_2(&VAR_24->pkt);
            return VAR_15;
        }



        if (VAR_24->ctx->event_flags & VAR_3) {
            if (VAR_24->n_main_streams) {
                VAR_26 = VAR_24->main_streams[0];
                FUNC_0(&VAR_26->metadata, VAR_24->ctx->metadata, 0);
                VAR_26->event_flags |= VAR_5;
            }
            VAR_24->ctx->event_flags &= ~VAR_3;
        }


        if (VAR_24->has_noheader_flag && !(VAR_24->ctx->ctx_flags & VAR_2)) {
            VAR_24->has_noheader_flag = 0;
            FUNC_13(VAR_12);
        }

        if (VAR_24->pkt.stream_index >= VAR_24->n_main_streams) {
            FUNC_1(VAR_12, VAR_6, "stream index inconsistency: index %d, %d main streams, %d subdemuxer streams\n",
                   VAR_24->pkt.stream_index, VAR_24->n_main_streams, VAR_24->ctx->nb_streams);
            FUNC_2(&VAR_24->pkt);
            return VAR_0;
        }

        VAR_25 = VAR_24->ctx->streams[VAR_24->pkt.stream_index];
        VAR_26 = VAR_24->main_streams[VAR_24->pkt.stream_index];

        *VAR_13 = VAR_24->pkt;
        VAR_13->stream_index = VAR_26->index;
        FUNC_11(&VAR_14->playlists[VAR_17]->pkt);

        if (VAR_13->dts != VAR_7)
            VAR_14->cur_timestamp = FUNC_4(VAR_13->dts,
                                            VAR_25->time_base,
                                            VAR_11);



        if (VAR_25->codecpar->codec_id != VAR_26->codecpar->codec_id) {
            VAR_15 = FUNC_12(VAR_26, VAR_24, VAR_25);
            if (VAR_15 < 0) {
                FUNC_2(VAR_13);
                return VAR_15;
            }
        }

        return 0;
    }
    return VAR_1;
}
