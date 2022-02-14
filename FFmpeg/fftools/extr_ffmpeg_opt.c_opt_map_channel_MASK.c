
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int nb_streams; size_t ist_index; TYPE_1__* ctx; } ;
struct TYPE_14__ {scalar_t__ user_set_discard; } ;
struct TYPE_13__ {TYPE_2__* codecpar; } ;
struct TYPE_12__ {int channel_idx; int ofile_idx; int ostream_idx; int file_idx; int stream_idx; } ;
struct TYPE_11__ {int nb_audio_channel_maps; TYPE_4__* audio_channel_maps; } ;
struct TYPE_10__ {scalar_t__ codec_type; int channels; } ;
struct TYPE_9__ {TYPE_5__** streams; } ;
typedef TYPE_3__ OptionsContext ;
typedef TYPE_4__ AudioChannelMap ;
typedef TYPE_5__ AVStream ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,char*,...) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (int) ;
 TYPE_7__** VAR_5 ;
 TYPE_6__** VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (char const*,char*,int*,int*,int*,...) ;
 char* FUNC_7 (char*,char) ;

__attribute__((used)) static int FUNC_8(void *VAR_8, const char *VAR_9, const char *VAR_10)
{
    OptionsContext *VAR_11 = VAR_8;
    int VAR_12;
    AVStream *VAR_13;
    AudioChannelMap *VAR_14;
    char *VAR_15;
    char *VAR_16;
    VAR_16 = FUNC_4(VAR_10);
    if (!VAR_16)
        return FUNC_0(VAR_4);

    FUNC_1(VAR_11->audio_channel_maps, VAR_11->nb_audio_channel_maps);
    VAR_14 = &VAR_11->audio_channel_maps[VAR_11->nb_audio_channel_maps - 1];


    VAR_12 = FUNC_6(VAR_10, "%d:%d.%d", &VAR_14->channel_idx, &VAR_14->ofile_idx, &VAR_14->ostream_idx);
    if ((VAR_12 == 1 || VAR_12 == 3) && VAR_14->channel_idx == -1) {
        VAR_14->file_idx = VAR_14->stream_idx = -1;
        if (VAR_12 == 1)
            VAR_14->ofile_idx = VAR_14->ostream_idx = -1;
        FUNC_2(VAR_16);
        return 0;
    }


    VAR_12 = FUNC_6(VAR_10, "%d.%d.%d:%d.%d",
               &VAR_14->file_idx, &VAR_14->stream_idx, &VAR_14->channel_idx,
               &VAR_14->ofile_idx, &VAR_14->ostream_idx);

    if (VAR_12 != 3 && VAR_12 != 5) {
        FUNC_3(((void*)0), VAR_2, "Syntax error, mapchan usage: "
               "[file.stream.channel|-1][:syncfile:syncstream]\n");
        FUNC_5(1);
    }

    if (VAR_12 != 5)
        VAR_14->ofile_idx = VAR_14->ostream_idx = -1;


    if (VAR_14->file_idx < 0 || VAR_14->file_idx >= VAR_7) {
        FUNC_3(((void*)0), VAR_2, "mapchan: invalid input file index: %d\n",
               VAR_14->file_idx);
        FUNC_5(1);
    }
    if (VAR_14->stream_idx < 0 ||
        VAR_14->stream_idx >= VAR_5[VAR_14->file_idx]->nb_streams) {
        FUNC_3(((void*)0), VAR_2, "mapchan: invalid input file stream index #%d.%d\n",
               VAR_14->file_idx, VAR_14->stream_idx);
        FUNC_5(1);
    }
    VAR_13 = VAR_5[VAR_14->file_idx]->ctx->streams[VAR_14->stream_idx];
    if (VAR_13->codecpar->codec_type != VAR_1) {
        FUNC_3(((void*)0), VAR_2, "mapchan: stream #%d.%d is not an audio stream.\n",
               VAR_14->file_idx, VAR_14->stream_idx);
        FUNC_5(1);
    }

    if ((VAR_15 = FUNC_7(VAR_16, '?')))
        *VAR_15 = 0;
    if (VAR_14->channel_idx < 0 || VAR_14->channel_idx >= VAR_13->codecpar->channels ||
        VAR_6[VAR_5[VAR_14->file_idx]->ist_index + VAR_14->stream_idx]->user_set_discard == VAR_0) {
        if (VAR_15) {
            FUNC_3(((void*)0), VAR_3, "mapchan: invalid audio channel #%d.%d.%d\n",
                    VAR_14->file_idx, VAR_14->stream_idx, VAR_14->channel_idx);
        } else {
            FUNC_3(((void*)0), VAR_2, "mapchan: invalid audio channel #%d.%d.%d\n"
                    "To ignore this, add a trailing '?' to the map_channel.\n",
                    VAR_14->file_idx, VAR_14->stream_idx, VAR_14->channel_idx);
            FUNC_5(1);
        }

    }
    FUNC_2(VAR_16);
    return 0;
}
