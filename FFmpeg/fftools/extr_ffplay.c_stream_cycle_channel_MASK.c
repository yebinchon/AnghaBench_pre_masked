
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int last_video_stream; int video_stream; int last_audio_stream; int audio_stream; int last_subtitle_stream; int subtitle_stream; TYPE_5__* ic; } ;
typedef TYPE_2__ VideoState ;
struct TYPE_15__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_14__ {int nb_stream_indexes; int* stream_index; } ;
struct TYPE_13__ {TYPE_1__* codecpar; } ;
struct TYPE_11__ {int codec_type; int channels; int sample_rate; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVProgram ;
typedef TYPE_5__ AVFormatContext ;





 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_5__*,int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,char*,int ,int,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_5(VideoState *VAR_1, int VAR_2)
{
    AVFormatContext *VAR_3 = VAR_1->ic;
    int VAR_4, VAR_5;
    int VAR_6;
    AVStream *VAR_7;
    AVProgram *VAR_8 = ((void*)0);
    int VAR_9 = VAR_1->ic->nb_streams;

    if (VAR_2 == 128) {
        VAR_4 = VAR_1->last_video_stream;
        VAR_6 = VAR_1->video_stream;
    } else if (VAR_2 == 130) {
        VAR_4 = VAR_1->last_audio_stream;
        VAR_6 = VAR_1->audio_stream;
    } else {
        VAR_4 = VAR_1->last_subtitle_stream;
        VAR_6 = VAR_1->subtitle_stream;
    }
    VAR_5 = VAR_4;

    if (VAR_2 != 128 && VAR_1->video_stream != -1) {
        VAR_8 = FUNC_0(VAR_3, ((void*)0), VAR_1->video_stream);
        if (VAR_8) {
            VAR_9 = VAR_8->nb_stream_indexes;
            for (VAR_4 = 0; VAR_4 < VAR_9; VAR_4++)
                if (VAR_8->stream_index[VAR_4] == VAR_5)
                    break;
            if (VAR_4 == VAR_9)
                VAR_4 = -1;
            VAR_5 = VAR_4;
        }
    }

    for (;;) {
        if (++VAR_5 >= VAR_9)
        {
            if (VAR_2 == 129)
            {
                VAR_5 = -1;
                VAR_1->last_subtitle_stream = -1;
                goto the_end;
            }
            if (VAR_4 == -1)
                return;
            VAR_5 = 0;
        }
        if (VAR_5 == VAR_4)
            return;
        VAR_7 = VAR_1->ic->streams[VAR_8 ? VAR_8->stream_index[VAR_5] : VAR_5];
        if (VAR_7->codecpar->codec_type == VAR_2) {

            switch (VAR_2) {
            case 130:
                if (VAR_7->codecpar->sample_rate != 0 &&
                    VAR_7->codecpar->channels != 0)
                    goto the_end;
                break;
            case 128:
            case 129:
                goto the_end;
            default:
                break;
            }
        }
    }
 the_end:
    if (VAR_8 && VAR_5 != -1)
        VAR_5 = VAR_8->stream_index[VAR_5];
    FUNC_2(((void*)0), VAR_0, "Switch %s stream from #%d to #%d\n",
           FUNC_1(VAR_2),
           VAR_6,
           VAR_5);

    FUNC_3(VAR_1, VAR_6);
    FUNC_4(VAR_1, VAR_5);
}
