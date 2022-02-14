
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_11__ ;


typedef int int64_t ;
struct TYPE_25__ {TYPE_2__* priv_data; } ;
struct TYPE_24__ {size_t stream_index; int size; scalar_t__ dts; int * data; } ;
struct TYPE_23__ {int nb_streams; TYPE_1__* tracks; } ;
struct TYPE_22__ {scalar_t__ track_duration; scalar_t__ entry; int last_sample_is_subtitle_end; scalar_t__ mode; TYPE_14__* par; int pal_done; int palette; scalar_t__ is_unaligned_qt_rgb; int cover_image; TYPE_11__* st; } ;
struct TYPE_21__ {scalar_t__ codec_id; scalar_t__ codec_type; int bits_per_coded_sample; int width; scalar_t__ format; } ;
struct TYPE_20__ {int nb_frames; } ;
typedef TYPE_1__ MOVTrack ;
typedef TYPE_2__ MOVMuxContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_4__*,int ,char*,size_t) ;
 int FUNC_1 (TYPE_3__**) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__**,TYPE_14__*,int) ;
 scalar_t__ FUNC_5 (TYPE_11__*) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_8, AVPacket *VAR_9)
{
    MOVMuxContext *VAR_10 = VAR_8->priv_data;
    MOVTrack *VAR_11;

    if (!VAR_9) {
        FUNC_6(VAR_8, 1);
        return 1;
    }

    VAR_11 = &VAR_10->tracks[VAR_9->stream_index];

    if (FUNC_5(VAR_11->st)) {
        int VAR_12;

        if (VAR_11->st->nb_frames >= 1) {
            if (VAR_11->st->nb_frames == 1)
                FUNC_0(VAR_8, VAR_3, "Got more than one picture in stream %d,"
                       " ignoring.\n", VAR_9->stream_index);
            return 0;
        }

        if ((VAR_12 = FUNC_2(&VAR_11->cover_image, VAR_9)) < 0)
            return VAR_12;

        return 0;
    } else {
        int VAR_13;

        if (!VAR_9->size)
            return FUNC_7(VAR_8, VAR_9);
        for (VAR_13 = 0; VAR_13 < VAR_10->nb_streams; VAR_13++) {
            MOVTrack *VAR_14 = &VAR_10->tracks[VAR_13];
            int VAR_15;

            if (VAR_14->par->codec_id == VAR_1 &&
                VAR_14->track_duration < VAR_9->dts &&
                (VAR_14->entry == 0 || !VAR_14->last_sample_is_subtitle_end)) {
                VAR_15 = FUNC_8(VAR_8, VAR_13, VAR_14->track_duration);
                if (VAR_15 < 0) return VAR_15;
                VAR_14->last_sample_is_subtitle_end = 1;
            }
        }

        if (VAR_11->mode == VAR_7 && VAR_11->par->codec_type == VAR_0) {
            AVPacket *VAR_16 = VAR_9;
            int VAR_17, VAR_18;
            if (VAR_11->is_unaligned_qt_rgb) {
                int64_t VAR_19 = VAR_11->par->bits_per_coded_sample != 15 ? VAR_11->par->bits_per_coded_sample : 16;
                int VAR_20 = ((VAR_11->par->width * VAR_19 + 15) >> 4)*2;
                VAR_17 = FUNC_4(VAR_8, &VAR_9, VAR_11->par, VAR_20);
                if (VAR_17 < 0)
                    return VAR_17;
            } else
                VAR_17 = 0;
            if (VAR_11->par->format == VAR_6 && !VAR_11->pal_done) {
                VAR_18 = FUNC_3(VAR_8, VAR_16, VAR_17, VAR_11->palette);
                if (VAR_18 < 0)
                    goto fail;
                if (VAR_18)
                    VAR_11->pal_done++;
            } else if (VAR_11->par->codec_id == VAR_2 &&
                       (VAR_11->par->format == VAR_4 ||
                       VAR_11->par->format == VAR_5)) {
                for (VAR_13 = 0; VAR_13 < VAR_9->size; VAR_13++)
                    VAR_9->data[VAR_13] = ~VAR_9->data[VAR_13];
            }
            if (VAR_17) {
                VAR_18 = FUNC_7(VAR_8, VAR_9);
fail:
                if (VAR_17)
                    FUNC_1(&VAR_9);
                return VAR_18;
            }
        }

        return FUNC_7(VAR_8, VAR_9);
    }
}
