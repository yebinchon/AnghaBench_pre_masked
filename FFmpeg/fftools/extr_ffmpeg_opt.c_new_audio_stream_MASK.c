
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_24__ {char* channels; char* sample_rate; int sample_fmt; int codec_type; } ;
struct TYPE_23__ {int index; } ;
struct TYPE_22__ {int ofile_idx; int ostream_idx; int channel_idx; scalar_t__ file_idx; scalar_t__ stream_idx; } ;
struct TYPE_21__ {scalar_t__ file_index; TYPE_1__* st; } ;
struct TYPE_20__ {int nb_filters; int nb_audio_channel_maps; TYPE_5__* audio_channel_maps; } ;
struct TYPE_19__ {char* filters_script; char* filters; char* apad; int file_index; size_t source_index; int* audio_channels_map; scalar_t__ stream_copy; scalar_t__ audio_channels_mapped; TYPE_6__* st; int avfilter; TYPE_7__* enc_ctx; } ;
struct TYPE_18__ {scalar_t__ index; } ;
typedef TYPE_2__ OutputStream ;
typedef TYPE_3__ OptionsContext ;
typedef TYPE_4__ InputStream ;
typedef TYPE_5__ AudioChannelMap ;
typedef TYPE_6__ AVStream ;
typedef int AVFormatContext ;
typedef TYPE_7__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*,int *,TYPE_6__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,char*,...) ;
 scalar_t__ FUNC_3 (int**,scalar_t__,int) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (TYPE_3__*,int *,TYPE_2__*,int ) ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (TYPE_3__*,int *,TYPE_2__*) ;
 int VAR_9 ;
 TYPE_4__** VAR_10 ;
 TYPE_2__* FUNC_8 (TYPE_3__*,int *,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static OutputStream *FUNC_9(OptionsContext *VAR_13, AVFormatContext *VAR_14, int VAR_15)
{
    int VAR_16;
    AVStream *VAR_17;
    OutputStream *VAR_18;
    AVCodecContext *VAR_19;

    VAR_18 = FUNC_8(VAR_13, VAR_14, VAR_0, VAR_15);
    VAR_17 = VAR_18->st;

    VAR_19 = VAR_18->enc_ctx;
    VAR_19->codec_type = VAR_0;

    FUNC_0(VAR_7, VAR_12, VAR_18->filters_script, VAR_14, VAR_17);
    FUNC_0(VAR_8, VAR_12, VAR_18->filters, VAR_14, VAR_17);
    if (VAR_13->nb_filters > 1)
        FUNC_2(((void*)0), VAR_1, "Only '-af %s' read, ignoring remaining -af options: Use ',' to separate filters\n", VAR_18->filters);

    if (!VAR_18->stream_copy) {
        char *VAR_20 = ((void*)0);

        FUNC_0(VAR_5, VAR_9, VAR_19->channels, VAR_14, VAR_17);

        FUNC_0(VAR_11, VAR_12, VAR_20, VAR_14, VAR_17);
        if (VAR_20 &&
            (VAR_19->sample_fmt = FUNC_1(VAR_20)) == VAR_3) {
            FUNC_2(((void*)0), VAR_2, "Invalid sample format '%s'\n", VAR_20);
            FUNC_6(1);
        }

        FUNC_0(VAR_6, VAR_9, VAR_19->sample_rate, VAR_14, VAR_17);

        FUNC_0(VAR_4, VAR_12, VAR_18->apad, VAR_14, VAR_17);
        VAR_18->apad = FUNC_4(VAR_18->apad);

        VAR_18->avfilter = FUNC_7(VAR_13, VAR_14, VAR_18);
        if (!VAR_18->avfilter)
            FUNC_6(1);


        for (VAR_16 = 0; VAR_16 < VAR_13->nb_audio_channel_maps; VAR_16++) {
            AudioChannelMap *VAR_21 = &VAR_13->audio_channel_maps[VAR_16];
            if ((VAR_21->ofile_idx == -1 || VAR_18->file_index == VAR_21->ofile_idx) &&
                (VAR_21->ostream_idx == -1 || VAR_18->st->index == VAR_21->ostream_idx)) {
                InputStream *VAR_22;

                if (VAR_21->channel_idx == -1) {
                    VAR_22 = ((void*)0);
                } else if (VAR_18->source_index < 0) {
                    FUNC_2(((void*)0), VAR_2, "Cannot determine input stream for channel mapping %d.%d\n",
                           VAR_18->file_index, VAR_18->st->index);
                    continue;
                } else {
                    VAR_22 = VAR_10[VAR_18->source_index];
                }

                if (!VAR_22 || (VAR_22->file_index == VAR_21->file_idx && VAR_22->st->index == VAR_21->stream_idx)) {
                    if (FUNC_3(&VAR_18->audio_channels_map,
                                          VAR_18->audio_channels_mapped + 1,
                                          sizeof(*VAR_18->audio_channels_map)
                                          ) < 0 )
                        FUNC_6(1);

                    VAR_18->audio_channels_map[VAR_18->audio_channels_mapped++] = VAR_21->channel_idx;
                }
            }
        }
    }

    if (VAR_18->stream_copy)
        FUNC_5(VAR_13, VAR_14, VAR_18, VAR_0);

    return VAR_18;
}
