
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int audio_stream; int video_stream; int subtitle_stream; int * subtitle_st; int * video_st; int * audio_st; int subdec; int subpq; int viddec; int pictq; int rdft_bits; int * rdft; int rdft_data; int * audio_buf; int audio_buf1_size; int audio_buf1; int swr_ctx; int auddec; int sampq; TYPE_3__* ic; } ;
typedef TYPE_2__ VideoState ;
struct TYPE_9__ {int codec_type; } ;
struct TYPE_8__ {int nb_streams; TYPE_1__** streams; } ;
struct TYPE_6__ {int discard; TYPE_4__* codecpar; } ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(VideoState *VAR_2, int VAR_3)
{
    AVFormatContext *VAR_4 = VAR_2->ic;
    AVCodecParameters *VAR_5;

    if (VAR_3 < 0 || VAR_3 >= VAR_4->nb_streams)
        return;
    VAR_5 = VAR_4->streams[VAR_3]->codecpar;

    switch (VAR_5->codec_type) {
    case 130:
        FUNC_3(&VAR_2->auddec, &VAR_2->sampq);
        FUNC_0(VAR_1);
        FUNC_4(&VAR_2->auddec);
        FUNC_5(&VAR_2->swr_ctx);
        FUNC_1(&VAR_2->audio_buf1);
        VAR_2->audio_buf1_size = 0;
        VAR_2->audio_buf = ((void*)0);

        if (VAR_2->rdft) {
            FUNC_2(VAR_2->rdft);
            FUNC_1(&VAR_2->rdft_data);
            VAR_2->rdft = ((void*)0);
            VAR_2->rdft_bits = 0;
        }
        break;
    case 128:
        FUNC_3(&VAR_2->viddec, &VAR_2->pictq);
        FUNC_4(&VAR_2->viddec);
        break;
    case 129:
        FUNC_3(&VAR_2->subdec, &VAR_2->subpq);
        FUNC_4(&VAR_2->subdec);
        break;
    default:
        break;
    }

    VAR_4->streams[VAR_3]->discard = VAR_0;
    switch (VAR_5->codec_type) {
    case 130:
        VAR_2->audio_st = ((void*)0);
        VAR_2->audio_stream = -1;
        break;
    case 128:
        VAR_2->video_st = ((void*)0);
        VAR_2->video_stream = -1;
        break;
    case 129:
        VAR_2->subtitle_st = ((void*)0);
        VAR_2->subtitle_stream = -1;
        break;
    default:
        break;
    }
}
