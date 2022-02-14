
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int den; int num; } ;
struct TYPE_15__ {int n_difchan; TYPE_1__ time_base; } ;
struct TYPE_14__ {int nb_streams; TYPE_4__** streams; TYPE_3__* priv_data; } ;
struct TYPE_13__ {TYPE_2__* codecpar; int time_base; } ;
struct TYPE_12__ {int n_ast; int * audio_data; TYPE_4__** ast; int start_time; scalar_t__ has_video; scalar_t__ has_audio; scalar_t__ frames; TYPE_9__* sys; } ;
struct TYPE_11__ {int codec_type; scalar_t__ codec_id; int channels; int sample_rate; int format; int height; int width; } ;
typedef TYPE_3__ DVMuxContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVFormatContext ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_9__* FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*,int *,int) ;

__attribute__((used)) static DVMuxContext* FUNC_4(AVFormatContext* VAR_3)
{
    DVMuxContext *VAR_4 = VAR_3->priv_data;
    AVStream *VAR_5 = ((void*)0);
    int VAR_6;


    if (VAR_3->nb_streams > 3)
        return ((void*)0);

    VAR_4->n_ast = 0;
    VAR_4->ast[0] = VAR_4->ast[1] = ((void*)0);


    for (VAR_6=0; VAR_6<VAR_3->nb_streams; VAR_6++) {
        switch (VAR_3->streams[VAR_6]->codecpar->codec_type) {
        case 128:
            if (VAR_5) return ((void*)0);
            VAR_5 = VAR_3->streams[VAR_6];
            break;
        case 129:
            if (VAR_4->n_ast > 1) return ((void*)0);
            VAR_4->ast[VAR_4->n_ast++] = VAR_3->streams[VAR_6];
            break;
        default:
            goto bail_out;
        }
    }


    if (!VAR_5 || VAR_5->codecpar->codec_id != VAR_0)
        goto bail_out;
    for (VAR_6=0; VAR_6<VAR_4->n_ast; VAR_6++) {
        if (VAR_4->ast[VAR_6]) {
            if(VAR_4->ast[VAR_6]->codecpar->codec_id != VAR_1 ||
               VAR_4->ast[VAR_6]->codecpar->channels != 2)
                goto bail_out;
            if (VAR_4->ast[VAR_6]->codecpar->sample_rate != 48000 &&
                VAR_4->ast[VAR_6]->codecpar->sample_rate != 44100 &&
                VAR_4->ast[VAR_6]->codecpar->sample_rate != 32000 )
                goto bail_out;
        }
    }
    VAR_4->sys = FUNC_0(VAR_5->codecpar->width, VAR_5->codecpar->height,
                                  VAR_5->codecpar->format, VAR_5->time_base);
    if (!VAR_4->sys)
        goto bail_out;

    if ((VAR_4->sys->time_base.den != 25 && VAR_4->sys->time_base.den != 50) || VAR_4->sys->time_base.num != 1) {
        if (VAR_4->ast[0] && VAR_4->ast[0]->codecpar->sample_rate != 48000)
            goto bail_out;
        if (VAR_4->ast[1] && VAR_4->ast[1]->codecpar->sample_rate != 48000)
            goto bail_out;
    }

    if ((VAR_4->n_ast > 1) && (VAR_4->sys->n_difchan < 2)) {

        goto bail_out;
    }


    VAR_4->frames = 0;
    VAR_4->has_audio = 0;
    VAR_4->has_video = 0;
    FUNC_3(VAR_3, &VAR_4->start_time, 1);

    for (VAR_6=0; VAR_6 < VAR_4->n_ast; VAR_6++) {
        if (VAR_4->ast[VAR_6] && !(VAR_4->audio_data[VAR_6]=FUNC_1(100, VAR_2))) {
            while (VAR_6 > 0) {
                VAR_6--;
                FUNC_2(&VAR_4->audio_data[VAR_6]);
            }
            goto bail_out;
        }
    }

    return VAR_4;

bail_out:
    return ((void*)0);
}
