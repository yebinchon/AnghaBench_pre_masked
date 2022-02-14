
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_17__ ;


typedef int int64_t ;
struct TYPE_26__ {int nb_streams; TYPE_5__** streams; int url; TYPE_4__* priv_data; } ;
struct TYPE_25__ {int time_base; TYPE_1__* codecpar; } ;
struct TYPE_24__ {int seg_duration; char* dirname; int window_size; int extra_window_size; scalar_t__ nr_of_streams_flushed; scalar_t__ nr_of_streams_to_flush; scalar_t__ has_video; scalar_t__ global_sidx; TYPE_3__* streams; scalar_t__ single_file; scalar_t__ index_correction; int use_timeline; scalar_t__ use_template; } ;
struct TYPE_23__ {int segment_index; scalar_t__ last_pts; scalar_t__ first_pts; scalar_t__ segment_type; int pos; int muxer_overhead; int total_pkt_size; scalar_t__ max_pts; scalar_t__ start_pts; int bit_rate; int nb_segments; TYPE_2__** segments; int init_range_length; TYPE_17__* ctx; scalar_t__ ctx_inited; int full_path; int filename; int temp_path; int out; scalar_t__ packets_written; int initfile; int written_len; } ;
struct TYPE_22__ {int start_pos; } ;
struct TYPE_21__ {scalar_t__ codec_type; } ;
struct TYPE_20__ {int pb; } ;
typedef TYPE_2__ Segment ;
typedef TYPE_3__ OutputStream ;
typedef TYPE_4__ DASHContext ;
typedef TYPE_5__ AVStream ;
typedef TYPE_6__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_3__*,int ,scalar_t__,scalar_t__,int,int,int,int) ;
 int FUNC_1 (TYPE_6__*,int ,char*,int,int,int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (TYPE_17__*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_6__*,TYPE_3__*,int) ;
 int FUNC_8 (TYPE_6__*,int *,int ) ;
 int FUNC_9 (TYPE_6__*,int ,int,int*) ;
 int FUNC_10 (TYPE_4__*,TYPE_3__*,int*) ;
 int FUNC_11 (TYPE_3__*,TYPE_4__*,int*,int*) ;
 int FUNC_12 (int ,int,char*,char*,int ) ;
 int FUNC_13 (char const*,char*) ;
 int FUNC_14 (TYPE_6__*,int) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(AVFormatContext *VAR_6, int VAR_7, int VAR_8)
{
    DASHContext *VAR_9 = VAR_6->priv_data;
    int VAR_10, VAR_11 = 0;

    const char *VAR_12 = FUNC_4(VAR_6->url);
    int VAR_13 = VAR_12 && !FUNC_13(VAR_12, "file");

    int VAR_14 = 0, VAR_15 = -1;
    if (VAR_8 >= 0) {
        VAR_14 = VAR_9->streams[VAR_8].segment_index;


        if (VAR_9->use_template && !VAR_9->use_timeline && VAR_9->index_correction &&
            VAR_9->streams[VAR_8].last_pts != VAR_2 &&
            VAR_9->streams[VAR_8].first_pts != VAR_2) {
            int64_t VAR_16 = FUNC_2(VAR_9->streams[VAR_8].last_pts -
                                            VAR_9->streams[VAR_8].first_pts,
                                            VAR_6->streams[VAR_8]->time_base,
                                            VAR_4);
            VAR_15 = (VAR_16 / VAR_9->seg_duration) + 1;
        }
    }

    for (VAR_10 = 0; VAR_10 < VAR_6->nb_streams; VAR_10++) {
        OutputStream *VAR_17 = &VAR_9->streams[VAR_10];
        AVStream *VAR_18 = VAR_6->streams[VAR_10];
        int VAR_19, VAR_20 = 0;

        if (!VAR_17->packets_written)
            continue;




        if (VAR_8 >= 0 && VAR_10 != VAR_8) {
            if (VAR_6->streams[VAR_10]->codecpar->codec_type != VAR_0)
                continue;


            if (VAR_9->has_video && VAR_17->segment_index > VAR_14)
                continue;
        }

        if (!VAR_9->single_file) {
            if (VAR_17->segment_type == VAR_5 && !VAR_17->written_len)
                FUNC_15(VAR_17->ctx->pb);
        } else {
            FUNC_12(VAR_17->full_path, sizeof(VAR_17->full_path), "%s%s", VAR_9->dirname, VAR_17->initfile);
        }

        VAR_11 = FUNC_10(VAR_9, VAR_17, &VAR_19);
        if (VAR_11 < 0)
            break;
        VAR_17->packets_written = 0;

        if (VAR_9->single_file) {
            FUNC_9(VAR_6, VAR_17->full_path, VAR_17->pos, &VAR_20);
        } else {
            FUNC_8(VAR_6, &VAR_17->out, VAR_17->temp_path);

            if (VAR_13) {
                VAR_11 = FUNC_6(VAR_17->temp_path, VAR_17->full_path);
                if (VAR_11 < 0)
                    break;
            }
        }

        if (!VAR_17->muxer_overhead)
            VAR_17->muxer_overhead = ((int64_t) (VAR_19 - VAR_17->total_pkt_size) *
                                  8 * VAR_3) /
                                 FUNC_2(VAR_17->max_pts - VAR_17->start_pts,
                                              VAR_18->time_base, VAR_4);
        VAR_17->total_pkt_size = 0;

        if (!VAR_17->bit_rate) {

            int64_t VAR_21 = (int64_t) VAR_19 * 8 * VAR_3 / FUNC_2(VAR_17->max_pts - VAR_17->start_pts,
                                                                                       VAR_18->time_base,
                                                                                       VAR_4);
            if (VAR_21 >= 0)
                VAR_17->bit_rate = VAR_21;
        }
        FUNC_0(VAR_17, VAR_17->filename, VAR_17->start_pts, VAR_17->max_pts - VAR_17->start_pts, VAR_17->pos, VAR_19, VAR_20, VAR_15);
        FUNC_1(VAR_6, VAR_1, "Representation %d media segment %d written to: %s\n", VAR_10, VAR_17->segment_index, VAR_17->full_path);

        VAR_17->pos += VAR_19;
    }

    if (VAR_9->window_size) {
        for (VAR_10 = 0; VAR_10 < VAR_6->nb_streams; VAR_10++) {
            OutputStream *VAR_22 = &VAR_9->streams[VAR_10];
            int VAR_23 = VAR_22->nb_segments - VAR_9->window_size - VAR_9->extra_window_size;
            if (VAR_23 > 0)
                FUNC_7(VAR_6, VAR_22, VAR_23);
        }
    }

    if (VAR_7) {
        for (VAR_10 = 0; VAR_10 < VAR_6->nb_streams; VAR_10++) {
            OutputStream *VAR_24 = &VAR_9->streams[VAR_10];
            if (VAR_24->ctx && VAR_24->ctx_inited) {
                int64_t VAR_25 = FUNC_5(VAR_24->ctx->pb);
                FUNC_3(VAR_24->ctx);
                if (VAR_9->global_sidx) {
                    int VAR_26, VAR_27, VAR_28;
                    int64_t VAR_29 = FUNC_5(VAR_24->ctx->pb) - VAR_25;
                    FUNC_11(VAR_24, VAR_9, &VAR_27, &VAR_28);
                    if (VAR_27 >= VAR_24->nb_segments ||
                        VAR_24->segment_type != VAR_5)
                        continue;
                    VAR_24->init_range_length += VAR_29;
                    for (VAR_26 = VAR_27; VAR_26 < VAR_24->nb_segments; VAR_26++) {
                        Segment *VAR_30 = VAR_24->segments[VAR_26];
                        VAR_30->start_pos += VAR_29;
                    }
                }

            }
        }
    }
    if (VAR_11 >= 0) {
        if (VAR_9->has_video && !VAR_7) {
            VAR_9->nr_of_streams_flushed++;
            if (VAR_9->nr_of_streams_flushed != VAR_9->nr_of_streams_to_flush)
                return VAR_11;

            VAR_9->nr_of_streams_flushed = 0;
        }
        VAR_11 = FUNC_14(VAR_6, VAR_7);
    }
    return VAR_11;
}
