
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_22__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_29__ {scalar_t__ seekable; } ;
struct TYPE_28__ {int (* io_open ) (TYPE_5__*,TYPE_7__**,scalar_t__,int ,int *) ;int nb_streams; scalar_t__ avoid_negative_ts; TYPE_4__** streams; TYPE_7__* pb; scalar_t__ url; TYPE_3__* priv_data; } ;
struct TYPE_25__ {int den; int num; } ;
struct TYPE_27__ {TYPE_2__ time_base; int pts_wrap_bits; TYPE_1__* codecpar; } ;
struct TYPE_26__ {int write_header_trailer; scalar_t__ initial_offset; int time; int clocktime_offset; scalar_t__ list_type; size_t reference_stream_index; int header_written; scalar_t__ segment_frame_count; scalar_t__ format_options_str; int format_options; scalar_t__ individual_header_trailer; scalar_t__ header_filename; TYPE_5__* avf; TYPE_22__* oformat; int format; int use_rename; scalar_t__ list; int list_size; scalar_t__ use_clocktime; scalar_t__ time_str; scalar_t__ frames_str; int nb_frames; int frames; scalar_t__ times_str; int nb_times; int times; scalar_t__ segment_count; } ;
struct TYPE_24__ {int flags; scalar_t__ name; } ;
struct TYPE_23__ {int codec_type; } ;
typedef TYPE_3__ SegmentContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVFormatContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int **,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *,scalar_t__,char*,char*,int ) ;
 int FUNC_6 (int **,char*,char*,int ) ;
 int FUNC_7 (int ) ;
 TYPE_22__* FUNC_8 (int ,scalar_t__,int *) ;
 int FUNC_9 (TYPE_5__*,int ,char*,...) ;
 scalar_t__ FUNC_10 (scalar_t__,char*) ;
 int FUNC_11 (int*,scalar_t__,int) ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (TYPE_5__*,int **) ;
 int FUNC_14 (TYPE_5__*,int *) ;
 char* FUNC_15 (scalar_t__) ;
 int FUNC_16 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_17 (TYPE_5__*,TYPE_7__**) ;
 int FUNC_18 (TYPE_7__**) ;
 int FUNC_19 (TYPE_5__*,int *,int *,scalar_t__) ;
 int FUNC_20 (TYPE_5__*,int *,int *,scalar_t__) ;
 int FUNC_21 (TYPE_5__*) ;
 int FUNC_22 (TYPE_5__*) ;
 int FUNC_23 (TYPE_5__*) ;
 int FUNC_24 (TYPE_5__*) ;
 int FUNC_25 (char const*,char*) ;
 int FUNC_26 (TYPE_5__*,TYPE_7__**,scalar_t__,int ,int *) ;

__attribute__((used)) static int FUNC_27(AVFormatContext *VAR_14)
{
    SegmentContext *VAR_15 = VAR_14->priv_data;
    AVFormatContext *VAR_16 = VAR_15->avf;
    AVDictionary *VAR_17 = ((void*)0);
    int VAR_18;
    int VAR_19;

    VAR_15->segment_count = 0;
    if (!VAR_15->write_header_trailer)
        VAR_15->individual_header_trailer = 0;

    if (VAR_15->header_filename) {
        VAR_15->write_header_trailer = 1;
        VAR_15->individual_header_trailer = 0;
    }

    if (VAR_15->initial_offset > 0) {
        FUNC_9(VAR_14, VAR_6, "NOTE: the option initial_offset is deprecated,"
               "you can use output_ts_offset instead of it\n");
    }

    if (!!VAR_15->time_str + !!VAR_15->times_str + !!VAR_15->frames_str > 1) {
        FUNC_9(VAR_14, VAR_4,
               "segment_time, segment_times, and segment_frames options "
               "are mutually exclusive, select just one of them\n");
        return FUNC_0(VAR_7);
    }

    if (VAR_15->times_str) {
        if ((VAR_18 = FUNC_20(VAR_14, &VAR_15->times, &VAR_15->nb_times, VAR_15->times_str)) < 0)
            return VAR_18;
    } else if (VAR_15->frames_str) {
        if ((VAR_18 = FUNC_19(VAR_14, &VAR_15->frames, &VAR_15->nb_frames, VAR_15->frames_str)) < 0)
            return VAR_18;
    } else {

        if (!VAR_15->time_str)
            VAR_15->time_str = FUNC_12("2");
        if ((VAR_18 = FUNC_11(&VAR_15->time, VAR_15->time_str, 1)) < 0) {
            FUNC_9(VAR_14, VAR_4,
                   "Invalid time duration specification '%s' for segment_time option\n",
                   VAR_15->time_str);
            return VAR_18;
        }
        if (VAR_15->use_clocktime) {
            if (VAR_15->time <= 0) {
                FUNC_9(VAR_14, VAR_4, "Invalid negative segment_time with segment_atclocktime option set\n");
                return FUNC_0(VAR_7);
            }
            VAR_15->clocktime_offset = VAR_15->time - (VAR_15->clocktime_offset % VAR_15->time);
        }
    }

    if (VAR_15->format_options_str) {
        VAR_18 = FUNC_5(&VAR_15->format_options, VAR_15->format_options_str, "=", ":", 0);
        if (VAR_18 < 0) {
            FUNC_9(VAR_14, VAR_4, "Could not parse format options list '%s'\n",
                   VAR_15->format_options_str);
            return VAR_18;
        }
    }

    if (VAR_15->list) {
        if (VAR_15->list_type == VAR_13) {
            if (FUNC_10(VAR_15->list, "csv" )) VAR_15->list_type = VAR_8;
            else if (FUNC_10(VAR_15->list, "ext" )) VAR_15->list_type = VAR_9;
            else if (FUNC_10(VAR_15->list, "m3u8")) VAR_15->list_type = VAR_12;
            else if (FUNC_10(VAR_15->list, "ffcat,ffconcat")) VAR_15->list_type = VAR_10;
            else VAR_15->list_type = VAR_11;
        }
        if (!VAR_15->list_size && VAR_15->list_type != VAR_12) {
            if ((VAR_18 = FUNC_21(VAR_14)) < 0)
                return VAR_18;
        } else {
            const char *VAR_20 = FUNC_15(VAR_15->list);
            VAR_15->use_rename = VAR_20 && !FUNC_25(VAR_20, "file");
        }
    }

    if (VAR_15->list_type == VAR_9)
        FUNC_9(VAR_14, VAR_6, "'ext' list type option is deprecated in favor of 'csv'\n");

    if ((VAR_18 = FUNC_23(VAR_14)) < 0)
        return VAR_18;
    FUNC_9(VAR_14, VAR_5, "Selected stream id:%d type:%s\n",
           VAR_15->reference_stream_index,
           FUNC_7(VAR_14->streams[VAR_15->reference_stream_index]->codecpar->codec_type));

    VAR_15->oformat = FUNC_8(VAR_15->format, VAR_14->url, ((void*)0));

    if (!VAR_15->oformat)
        return VAR_0;
    if (VAR_15->oformat->flags & VAR_1) {
        FUNC_9(VAR_14, VAR_4, "format %s not supported.\n",
               VAR_15->oformat->name);
        return FUNC_0(VAR_7);
    }

    if ((VAR_18 = FUNC_22(VAR_14)) < 0)
        return VAR_18;

    if ((VAR_18 = FUNC_24(VAR_14)) < 0)
        return VAR_18;
    VAR_16 = VAR_15->avf;

    if (VAR_15->write_header_trailer) {
        if ((VAR_18 = VAR_14->io_open(VAR_14, &VAR_16->pb,
                              VAR_15->header_filename ? VAR_15->header_filename : VAR_16->url,
                              VAR_2, ((void*)0))) < 0) {
            FUNC_9(VAR_14, VAR_4, "Failed to open segment '%s'\n", VAR_16->url);
            return VAR_18;
        }
        if (!VAR_15->individual_header_trailer)
            VAR_16->pb->seekable = 0;
    } else {
        if ((VAR_18 = FUNC_18(&VAR_16->pb)) < 0)
            return VAR_18;
    }

    FUNC_2(&VAR_17, VAR_15->format_options, 0);
    FUNC_6(&VAR_17, "fflags", "-autobsf", 0);
    VAR_18 = FUNC_13(VAR_16, &VAR_17);
    if (FUNC_3(VAR_17)) {
        FUNC_9(VAR_14, VAR_4,
               "Some of the provided format options in '%s' are not recognized\n", VAR_15->format_options_str);
        FUNC_4(&VAR_17);
        return FUNC_0(VAR_7);
    }
    FUNC_4(&VAR_17);

    if (VAR_18 < 0) {
        FUNC_17(VAR_16, &VAR_16->pb);
        return VAR_18;
    }
    VAR_15->segment_frame_count = 0;

    FUNC_1(VAR_14->nb_streams == VAR_16->nb_streams);
    if (VAR_18 == VAR_3) {
        VAR_18 = FUNC_14(VAR_16, ((void*)0));
        if (VAR_18 < 0)
            return VAR_18;
        VAR_15->header_written = 1;
    }

    for (VAR_19 = 0; VAR_19 < VAR_14->nb_streams; VAR_19++) {
        AVStream *VAR_21 = VAR_16->streams[VAR_19];
        AVStream *VAR_22 = VAR_14->streams[VAR_19];
        FUNC_16(VAR_22, VAR_21->pts_wrap_bits, VAR_21->time_base.num, VAR_21->time_base.den);
    }

    if (VAR_16->avoid_negative_ts > 0 && VAR_14->avoid_negative_ts < 0)
        VAR_14->avoid_negative_ts = 1;

    return VAR_18;
}
