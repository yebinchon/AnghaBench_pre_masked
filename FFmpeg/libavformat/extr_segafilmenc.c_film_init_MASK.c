
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int nb_streams; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_9__ {TYPE_1__* codecpar; } ;
struct TYPE_8__ {int audio_index; int video_index; int * last; int * start; scalar_t__ packet_count; scalar_t__ stab_pos; } ;
struct TYPE_7__ {scalar_t__ codec_type; int codec_id; } ;
typedef TYPE_2__ FILMOutputContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_4)
{
    AVStream *VAR_5 = ((void*)0);
    FILMOutputContext *VAR_6 = VAR_4->priv_data;
    VAR_6->audio_index = -1;
    VAR_6->video_index = -1;
    VAR_6->stab_pos = 0;
    VAR_6->packet_count = 0;
    VAR_6->start = ((void*)0);
    VAR_6->last = ((void*)0);

    for (int VAR_7 = 0; VAR_7 < VAR_4->nb_streams; VAR_7++) {
        AVStream *VAR_8 = VAR_4->streams[VAR_7];
        if (VAR_8->codecpar->codec_type == VAR_0) {
            if (VAR_6->audio_index > -1) {
                FUNC_1(VAR_4, VAR_2, "Sega FILM allows a maximum of one audio stream.\n");
                return FUNC_0(VAR_3);
            }
            VAR_6->audio_index = VAR_7;
            VAR_5 = VAR_8;
        }

        if (VAR_8->codecpar->codec_type == VAR_1) {
            if (VAR_6->video_index > -1) {
                FUNC_1(VAR_4, VAR_2, "Sega FILM allows a maximum of one video stream.\n");
                return FUNC_0(VAR_3);
            }
            VAR_6->video_index = VAR_7;
        }

        if (VAR_6->video_index == -1) {
            FUNC_1(VAR_4, VAR_2, "No video stream present.\n");
            return FUNC_0(VAR_3);
        }
    }

    if (VAR_5 != ((void*)0) && FUNC_2(VAR_5->codecpar->codec_id) < 0) {
        FUNC_1(VAR_4, VAR_2, "Incompatible audio stream format.\n");
        return FUNC_0(VAR_3);
    }

    return 0;
}
