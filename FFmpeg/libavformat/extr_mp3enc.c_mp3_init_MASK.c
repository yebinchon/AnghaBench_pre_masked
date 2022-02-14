
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct AVFormatContext {int nb_streams; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_6__ {TYPE_1__* codecpar; } ;
struct TYPE_5__ {int id3v2_version; int audio_stream_idx; int pics_to_write; } ;
struct TYPE_4__ {scalar_t__ codec_type; scalar_t__ codec_id; } ;
typedef TYPE_2__ MP3Context ;
typedef TYPE_3__ AVStream ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct AVFormatContext*,int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct AVFormatContext *VAR_5)
{
    MP3Context *VAR_6 = VAR_5->priv_data;
    int VAR_7;

    if (VAR_6->id3v2_version &&
        VAR_6->id3v2_version != 3 &&
        VAR_6->id3v2_version != 4) {
        FUNC_1(VAR_5, VAR_3, "Invalid ID3v2 version requested: %d. Only "
               "3, 4 or 0 (disabled) are allowed.\n", VAR_6->id3v2_version);
        return FUNC_0(VAR_4);
    }



    VAR_6->audio_stream_idx = -1;
    for (VAR_7 = 0; VAR_7 < VAR_5->nb_streams; VAR_7++) {
        AVStream *VAR_8 = VAR_5->streams[VAR_7];
        if (VAR_8->codecpar->codec_type == VAR_0) {
            if (VAR_6->audio_stream_idx >= 0 || VAR_8->codecpar->codec_id != VAR_2) {
                FUNC_1(VAR_5, VAR_3, "Invalid audio stream. Exactly one MP3 "
                       "audio stream is required.\n");
                return FUNC_0(VAR_4);
            }
            VAR_6->audio_stream_idx = VAR_7;
        } else if (VAR_8->codecpar->codec_type != VAR_1) {
            FUNC_1(VAR_5, VAR_3, "Only audio streams and pictures are allowed in MP3.\n");
            return FUNC_0(VAR_4);
        }
    }
    if (VAR_6->audio_stream_idx < 0) {
        FUNC_1(VAR_5, VAR_3, "No audio stream present.\n");
        return FUNC_0(VAR_4);
    }
    VAR_6->pics_to_write = VAR_5->nb_streams - 1;

    if (VAR_6->pics_to_write && !VAR_6->id3v2_version) {
        FUNC_1(VAR_5, VAR_3, "Attached pictures were requested, but the "
               "ID3v2 header is disabled.\n");
        return FUNC_0(VAR_4);
    }

    return 0;
}
