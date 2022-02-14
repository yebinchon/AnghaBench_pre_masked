
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef char uint8_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_17__ {int gl_pathc; } ;
struct TYPE_19__ {int den; int num; } ;
struct TYPE_21__ {char* path; int img_number; int is_pipe; int ts_from_file; int use_glob; int img_first; int img_last; int split_planes; scalar_t__ pattern_type; TYPE_10__ globstate; scalar_t__ start_number_range; scalar_t__ start_number; scalar_t__ height; scalar_t__ width; TYPE_2__ framerate; scalar_t__ img_count; scalar_t__ pixel_format; } ;
typedef TYPE_4__ VideoDemuxData ;
struct TYPE_25__ {scalar_t__ video_codec_id; scalar_t__ audio_codec_id; int flags; scalar_t__ pb; int url; TYPE_1__* iformat; int ctx_flags; TYPE_4__* priv_data; } ;
struct TYPE_24__ {scalar_t__ read_header; scalar_t__ (* read_probe ) (TYPE_6__*) ;int flags; scalar_t__ raw_codec_id; } ;
struct TYPE_23__ {char* buf; int buf_size; int filename; int member_0; } ;
struct TYPE_22__ {int duration; TYPE_3__* codecpar; scalar_t__ start_time; int need_parsing; } ;
struct TYPE_20__ {scalar_t__ codec_type; scalar_t__ codec_id; int format; scalar_t__ height; scalar_t__ width; } ;
struct TYPE_18__ {int flags; scalar_t__ raw_codec_id; } ;
typedef TYPE_5__ AVStream ;
typedef TYPE_6__ AVProbeData ;
typedef TYPE_7__ AVInputFormat ;
typedef TYPE_8__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 TYPE_7__* FUNC_1 (void**) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_8__*,int ,char*,...) ;
 char* FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (char const*,char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*,int ,int) ;
 TYPE_5__* FUNC_10 (TYPE_8__*,int *) ;
 int FUNC_11 (scalar_t__,char*,int) ;
 int FUNC_12 (scalar_t__,int ,int ) ;
 int FUNC_13 (TYPE_5__*,int,int,int) ;
 scalar_t__ FUNC_14 (char*) ;
 int FUNC_15 (scalar_t__,char**,int) ;
 scalar_t__ FUNC_16 (scalar_t__,int*,int*,char*,scalar_t__,scalar_t__) ;
 int FUNC_17 (char*,int,int *,TYPE_10__*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*,int ,scalar_t__) ;
 char* FUNC_20 (char*,char) ;
 scalar_t__ FUNC_21 (char*,char*) ;
 scalar_t__ FUNC_22 (TYPE_6__*) ;

int FUNC_23(AVFormatContext *VAR_27)
{
    VideoDemuxData *VAR_28 = VAR_27->priv_data;
    int VAR_29 = 1, VAR_30 = 1;
    AVStream *VAR_31;
    enum AVPixelFormat VAR_32 = VAR_13;

    VAR_27->ctx_flags |= VAR_0;

    VAR_31 = FUNC_10(VAR_27, ((void*)0));
    if (!VAR_31) {
        return FUNC_0(VAR_16);
    }

    if (VAR_28->pixel_format &&
        (VAR_32 = FUNC_4(VAR_28->pixel_format)) == VAR_13) {
        FUNC_5(VAR_27, VAR_11, "No such pixel format: %s.\n",
               VAR_28->pixel_format);
        return FUNC_0(VAR_14);
    }

    FUNC_9(VAR_28->path, VAR_27->url, sizeof(VAR_28->path));
    VAR_28->img_number = 0;
    VAR_28->img_count = 0;


    if (VAR_27->iformat->flags & VAR_2)
        VAR_28->is_pipe = 0;
    else {
        VAR_28->is_pipe = 1;
        VAR_31->need_parsing = VAR_6;
    }

    if (VAR_28->ts_from_file == 2) {

        FUNC_5(VAR_27, VAR_11, "POSIX.1-2008 not supported, nanosecond file timestamps unavailable\n");
        return FUNC_0(VAR_17);

        FUNC_13(VAR_31, 64, 1, 1000000000);
    } else if (VAR_28->ts_from_file)
        FUNC_13(VAR_31, 64, 1, 1);
    else
        FUNC_13(VAR_31, 64, VAR_28->framerate.den, VAR_28->framerate.num);

    if (VAR_28->width && VAR_28->height) {
        VAR_31->codecpar->width = VAR_28->width;
        VAR_31->codecpar->height = VAR_28->height;
    }

    if (!VAR_28->is_pipe) {
        if (VAR_28->pattern_type == VAR_21) {
            if (VAR_27->pb) {
                VAR_28->pattern_type = VAR_24;
            } else
                VAR_28->pattern_type = VAR_23;
        }

        if (VAR_28->pattern_type == VAR_23) {
        VAR_28->use_glob = FUNC_18(VAR_28->path);
        if (VAR_28->use_glob) {





            FUNC_5(VAR_27, VAR_12, "Pattern type 'glob_sequence' is deprecated: "
                   "use pattern_type 'glob' instead\n");
        }
        }
        if ((VAR_28->pattern_type == VAR_23 && !VAR_28->use_glob) || VAR_28->pattern_type == VAR_25) {
            if (FUNC_16(VAR_27->pb, &VAR_29, &VAR_30, VAR_28->path,
                                 VAR_28->start_number, VAR_28->start_number_range) < 0) {
                FUNC_5(VAR_27, VAR_11,
                       "Could find no file with path '%s' and index in the range %d-%d\n",
                       VAR_28->path, VAR_28->start_number, VAR_28->start_number + VAR_28->start_number_range - 1);
                return FUNC_0(VAR_15);
            }
        } else if (VAR_28->pattern_type == VAR_22) {
            FUNC_5(VAR_27, VAR_11,
                   "Pattern type 'glob' was selected but globbing "
                   "is not supported by this libavformat build\n");
            return FUNC_0(VAR_17);

        } else if (VAR_28->pattern_type != VAR_23 && VAR_28->pattern_type != VAR_24) {
            FUNC_5(VAR_27, VAR_11,
                   "Unknown value '%d' for pattern_type option\n", VAR_28->pattern_type);
            return FUNC_0(VAR_14);
        }
        VAR_28->img_first = VAR_29;
        VAR_28->img_last = VAR_30;
        VAR_28->img_number = VAR_29;

        if (!VAR_28->ts_from_file) {
            VAR_31->start_time = 0;
            VAR_31->duration = VAR_30 - VAR_29 + 1;
        }
    }

    if (VAR_27->video_codec_id) {
        VAR_31->codecpar->codec_type = VAR_4;
        VAR_31->codecpar->codec_id = VAR_27->video_codec_id;
    } else if (VAR_27->audio_codec_id) {
        VAR_31->codecpar->codec_type = VAR_3;
        VAR_31->codecpar->codec_id = VAR_27->audio_codec_id;
    } else if (VAR_27->iformat->raw_codec_id) {
        VAR_31->codecpar->codec_type = VAR_4;
        VAR_31->codecpar->codec_id = VAR_27->iformat->raw_codec_id;
    } else {
        const char *VAR_33 = FUNC_20(VAR_28->path, '.');
        VAR_28->split_planes = VAR_33 && !FUNC_7(VAR_33 + 1, "y");
        VAR_31->codecpar->codec_type = VAR_4;
        if (VAR_27->pb) {
            int VAR_34 = 2048;
            uint8_t *VAR_35 = FUNC_6(((void*)0), VAR_34 + VAR_5);
            const AVInputFormat *VAR_36 = ((void*)0);
            void *VAR_37 = ((void*)0);
            AVProbeData VAR_38 = { 0 };

            if (!VAR_35)
                return FUNC_0(VAR_16);

            VAR_34 = FUNC_11(VAR_27->pb, VAR_35, VAR_34);
            if (VAR_34 < 0) {
                FUNC_2(VAR_35);
                return VAR_34;
            }
            FUNC_19(VAR_35 + VAR_34, 0, VAR_5);

            VAR_38.buf = VAR_35;
            VAR_38.buf_size = VAR_34;
            VAR_38.filename = VAR_27->url;

            while ((VAR_36 = FUNC_1(&VAR_37))) {
                if (VAR_36->read_header != FUNC_23 ||
                    !VAR_36->read_probe ||
                    (VAR_36->flags & VAR_2) ||
                    !VAR_36->raw_codec_id)
                    continue;
                if (VAR_36->read_probe(&VAR_38) > 0) {
                    VAR_31->codecpar->codec_id = VAR_36->raw_codec_id;
                    break;
                }
            }
            if (VAR_27->flags & VAR_1) {
                FUNC_12(VAR_27->pb, 0, VAR_26);
                FUNC_3(&VAR_35);
            } else
                FUNC_15(VAR_27->pb, &VAR_35, VAR_34);
        }
        if (VAR_31->codecpar->codec_id == VAR_10)
            VAR_31->codecpar->codec_id = FUNC_14(VAR_28->path);
        if (VAR_31->codecpar->codec_id == VAR_8)
            VAR_31->codecpar->codec_id = VAR_9;
        if (VAR_31->codecpar->codec_id == VAR_7)
            VAR_31->codecpar->codec_id = VAR_10;
    }
    if (VAR_31->codecpar->codec_type == VAR_4 &&
        VAR_32 != VAR_13)
        VAR_31->codecpar->format = VAR_32;

    return 0;
}
