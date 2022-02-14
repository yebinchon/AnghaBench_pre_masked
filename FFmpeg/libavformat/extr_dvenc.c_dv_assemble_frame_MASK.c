
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int frame_size; } ;
struct TYPE_11__ {TYPE_1__* codecpar; } ;
struct TYPE_10__ {int has_video; int n_ast; int has_audio; TYPE_6__* sys; int frames; int * audio_data; TYPE_3__** ast; int * frame_buf; } ;
struct TYPE_9__ {int codec_type; int sample_rate; } ;
typedef TYPE_2__ DVMuxContext ;
typedef TYPE_3__ AVStream ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int *,int,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,char*,int,...) ;
 int FUNC_5 (TYPE_6__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int,int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (int *,int *,int) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_3,
                             DVMuxContext *VAR_4, AVStream* VAR_5,
                             uint8_t* VAR_6, int VAR_7, uint8_t** VAR_8)
{
    int VAR_9, VAR_10;

    *VAR_8 = &VAR_4->frame_buf[0];

    switch (VAR_5->codecpar->codec_type) {
    case 128:

        if (VAR_4->has_video)
            FUNC_4(VAR_3, VAR_0, "Can't process DV frame #%d. Insufficient audio data or severe sync problem.\n", VAR_4->frames);
        if (VAR_7 != VAR_4->sys->frame_size) {
            FUNC_4(VAR_3, VAR_0, "Unexpected frame size, %d != %d\n",
                   VAR_7, VAR_4->sys->frame_size);
            return FUNC_0(VAR_1);
        }

        FUNC_8(*VAR_8, VAR_6, VAR_4->sys->frame_size);
        VAR_4->has_video = 1;
        break;
    case 129:
        for (VAR_9 = 0; VAR_9 < VAR_4->n_ast && VAR_5 != VAR_4->ast[VAR_9]; VAR_9++);


        if (FUNC_3(VAR_4->audio_data[VAR_9]) + VAR_7 >= 100*VAR_2)
            FUNC_4(VAR_3, VAR_0, "Can't process DV frame #%d. Insufficient video data or severe sync problem.\n", VAR_4->frames);
        FUNC_2(VAR_4->audio_data[VAR_9], VAR_6, VAR_7, ((void*)0));

        VAR_10 = 4 * FUNC_5(VAR_4->sys, VAR_4->frames, VAR_5->codecpar->sample_rate);


        VAR_4->has_audio |= ((VAR_10 <= FUNC_3(VAR_4->audio_data[VAR_9])) << VAR_9);

        break;
    default:
        break;
    }


    if (VAR_4->has_video == 1 && VAR_4->has_audio + 1 == 1 << VAR_4->n_ast) {
        FUNC_7(VAR_4, *VAR_8);
        VAR_4->has_audio = 0;
        for (VAR_9=0; VAR_9 < VAR_4->n_ast; VAR_9++) {
            FUNC_6(VAR_4, VAR_9, *VAR_8);
            VAR_10 = 4 * FUNC_5(VAR_4->sys, VAR_4->frames, VAR_4->ast[VAR_9]->codecpar->sample_rate);
            FUNC_1(VAR_4->audio_data[VAR_9], VAR_10);
            VAR_4->has_audio |= ((VAR_10 <= FUNC_3(VAR_4->audio_data[VAR_9])) << VAR_9);
        }

        VAR_4->has_video = 0;

        VAR_4->frames++;

        return VAR_4->sys->frame_size;
    }

    return 0;
}
