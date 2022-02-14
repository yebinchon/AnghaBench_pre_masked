
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;
typedef struct TYPE_20__ TYPE_16__ ;
typedef struct TYPE_19__ TYPE_15__ ;


struct TYPE_23__ {int nb_streams; int packets_written; int new_start; scalar_t__ fmp4_init_filename; int base_output_dirname; int out; int basename; scalar_t__ init_range_length; scalar_t__ start_pos; TYPE_1__** streams; TYPE_15__* vtt_oformat; TYPE_5__* vtt_avf; TYPE_15__* oformat; TYPE_5__* avf; } ;
typedef TYPE_2__ VariantStream ;
struct TYPE_26__ {int pb; TYPE_15__* oformat; int * metadata; int io_close; int io_open; int opaque; int max_delay; int interrupt_callback; int url; TYPE_3__* priv_data; } ;
struct TYPE_25__ {int * metadata; int time_base; int sample_aspect_ratio; TYPE_16__* codecpar; } ;
struct TYPE_24__ {int flags; scalar_t__ max_seg_size; scalar_t__ segment_type; scalar_t__ http_persistent; scalar_t__ format_options_str; int * format_options; } ;
struct TYPE_22__ {int * metadata; int time_base; int sample_aspect_ratio; TYPE_17__* codecpar; } ;
struct TYPE_21__ {scalar_t__ codec_type; scalar_t__ codec_tag; int codec_id; } ;
struct TYPE_20__ {scalar_t__ codec_id; scalar_t__ codec_tag; } ;
struct TYPE_19__ {int codec_tag; } ;
typedef TYPE_3__ HLSContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVFormatContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int **,int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int **,scalar_t__,char*,char*,int ) ;
 int FUNC_7 (int **,char*,char*,int ) ;
 int FUNC_8 (TYPE_5__*,int ,char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_16__*,TYPE_17__*) ;
 int FUNC_11 (TYPE_5__**,TYPE_15__*,int *,int *) ;
 int FUNC_12 (TYPE_5__*,int **) ;
 TYPE_4__* FUNC_13 (TYPE_5__*,int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_5__*,int *,int ,int **) ;
 int FUNC_17 (TYPE_5__*,int **,TYPE_3__*) ;

__attribute__((used)) static int FUNC_18(AVFormatContext *VAR_9, VariantStream *VAR_10)
{
    AVDictionary *VAR_11 = ((void*)0);
    HLSContext *VAR_12 = VAR_9->priv_data;
    AVFormatContext *VAR_13;
    AVFormatContext *VAR_14 = ((void*)0);
    int VAR_15 = (VAR_12->flags & VAR_7) || (VAR_12->max_seg_size > 0);
    int VAR_16, VAR_17;

    VAR_17 = FUNC_11(&VAR_10->avf, VAR_10->oformat, ((void*)0), ((void*)0));
    if (VAR_17 < 0)
        return VAR_17;
    VAR_13 = VAR_10->avf;

    VAR_13->url = FUNC_9("");
    if (!VAR_13->url)
        return FUNC_0(VAR_6);

    VAR_13->oformat = VAR_10->oformat;
    VAR_13->interrupt_callback = VAR_9->interrupt_callback;
    VAR_13->max_delay = VAR_9->max_delay;
    VAR_13->opaque = VAR_9->opaque;
    VAR_13->io_open = VAR_9->io_open;
    VAR_13->io_close = VAR_9->io_close;
    FUNC_3(&VAR_13->metadata, VAR_9->metadata, 0);

    if (VAR_10->vtt_oformat) {
        VAR_17 = FUNC_11(&VAR_10->vtt_avf, VAR_10->vtt_oformat, ((void*)0), ((void*)0));
        if (VAR_17 < 0)
            return VAR_17;
        VAR_14 = VAR_10->vtt_avf;
        VAR_14->oformat = VAR_10->vtt_oformat;
        FUNC_3(&VAR_14->metadata, VAR_9->metadata, 0);
    }

    for (VAR_16 = 0; VAR_16 < VAR_10->nb_streams; VAR_16++) {
        AVStream *VAR_18;
        AVFormatContext *VAR_19;
        if (VAR_10->streams[VAR_16]->codecpar->codec_type == VAR_1)
            VAR_19 = VAR_14;
        else
            VAR_19 = VAR_13;

        if (!(VAR_18 = FUNC_13(VAR_19, ((void*)0))))
            return FUNC_0(VAR_6);
        FUNC_10(VAR_18->codecpar, VAR_10->streams[VAR_16]->codecpar);
        if (!VAR_13->oformat->codec_tag ||
            FUNC_1 (VAR_13->oformat->codec_tag, VAR_10->streams[VAR_16]->codecpar->codec_tag) == VAR_18->codecpar->codec_id ||
            FUNC_2(VAR_13->oformat->codec_tag, VAR_10->streams[VAR_16]->codecpar->codec_id) <= 0) {
            VAR_18->codecpar->codec_tag = VAR_10->streams[VAR_16]->codecpar->codec_tag;
        } else {
            VAR_18->codecpar->codec_tag = 0;
        }

        VAR_18->sample_aspect_ratio = VAR_10->streams[VAR_16]->sample_aspect_ratio;
        VAR_18->time_base = VAR_10->streams[VAR_16]->time_base;
        FUNC_3(&VAR_18->metadata, VAR_10->streams[VAR_16]->metadata, 0);
    }

    VAR_10->packets_written = 1;
    VAR_10->start_pos = 0;
    VAR_10->new_start = 1;

    if (VAR_12->segment_type == VAR_8 && VAR_12->max_seg_size > 0) {
        if (VAR_12->http_persistent > 0) {

            FUNC_8(VAR_9, VAR_4, "http persistent mode is currently unsupported for fragment mp4 in the HLS muxer.\n");
        }
        if (VAR_12->max_seg_size > 0) {
            FUNC_8(VAR_9, VAR_4, "Multi-file byterange mode is currently unsupported in the HLS muxer.\n");
            return VAR_0;
        }
    }

    VAR_10->packets_written = 0;
    VAR_10->init_range_length = 0;
    FUNC_17(VAR_9, &VAR_11, VAR_12);
    if ((VAR_17 = FUNC_15(&VAR_13->pb)) < 0)
        return VAR_17;

    if (VAR_12->segment_type == VAR_8) {
        if (VAR_15) {
            VAR_17 = FUNC_16(VAR_9, &VAR_10->out, VAR_10->basename, &VAR_11);
        } else {
            VAR_17 = FUNC_16(VAR_9, &VAR_10->out, VAR_10->base_output_dirname, &VAR_11);
        }
    }
    FUNC_5(&VAR_11);
    if (VAR_17 < 0) {
        FUNC_8(VAR_9, VAR_3, "Failed to open segment '%s'\n", VAR_10->fmp4_init_filename);
        return VAR_17;
    }

    if (VAR_12->format_options_str) {
        VAR_17 = FUNC_6(&VAR_12->format_options, VAR_12->format_options_str, "=", ":", 0);
        if (VAR_17 < 0) {
            FUNC_8(VAR_9, VAR_3, "Could not parse format options list '%s'\n",
                   VAR_12->format_options_str);
            return VAR_17;
        }
    }

    FUNC_3(&VAR_11, VAR_12->format_options, 0);
    if (VAR_12->segment_type == VAR_8) {
        FUNC_7(&VAR_11, "fflags", "-autobsf", 0);
        FUNC_7(&VAR_11, "movflags", "+frag_custom+dash+delay_moov", VAR_2);
        VAR_17 = FUNC_12(VAR_13, &VAR_11);
        if (VAR_17 < 0)
            return VAR_17;
        if (FUNC_4(VAR_11)) {
            FUNC_8(VAR_9, VAR_3, "Some of the provided format options in '%s' are not recognized\n", VAR_12->format_options_str);
            FUNC_5(&VAR_11);
            return FUNC_0(VAR_5);
        }
    }
    FUNC_14(VAR_13->pb);
    FUNC_5(&VAR_11);
    return 0;
}
