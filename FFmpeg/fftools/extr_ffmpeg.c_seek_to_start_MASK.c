
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int int64_t ;
struct TYPE_20__ {scalar_t__ codec_type; int sample_rate; } ;
struct TYPE_19__ {int start_time; } ;
struct TYPE_18__ {int member_0; int member_1; } ;
struct TYPE_17__ {int nb_streams; int ist_index; scalar_t__ loop; int time_base; int duration; } ;
struct TYPE_14__ {scalar_t__ num; } ;
struct TYPE_16__ {int nb_samples; TYPE_1__* st; scalar_t__ min_pts; scalar_t__ max_pts; TYPE_13__ framerate; TYPE_6__* dec_ctx; } ;
struct TYPE_15__ {int time_base; TYPE_13__ avg_frame_rate; } ;
typedef TYPE_2__ InputStream ;
typedef TYPE_3__ InputFile ;
typedef TYPE_4__ AVRational ;
typedef TYPE_5__ AVFormatContext ;
typedef TYPE_6__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__ FUNC_0 (TYPE_13__) ;
 int FUNC_1 (int,TYPE_4__,int ) ;
 int FUNC_2 (TYPE_5__*,int,int ,int ,int ,int ) ;
 int FUNC_3 (int,int *,int ,int ) ;
 TYPE_2__** VAR_2 ;

__attribute__((used)) static int FUNC_4(InputFile *VAR_3, AVFormatContext *VAR_4)
{
    InputStream *VAR_5;
    AVCodecContext *VAR_6;
    int VAR_7, VAR_8, VAR_9 = 0;
    int64_t VAR_10 = 0;

    VAR_8 = FUNC_2(VAR_4, -1, VAR_1, VAR_4->start_time, VAR_4->start_time, 0);
    if (VAR_8 < 0)
        return VAR_8;

    for (VAR_7 = 0; VAR_7 < VAR_3->nb_streams; VAR_7++) {
        VAR_5 = VAR_2[VAR_3->ist_index + VAR_7];
        VAR_6 = VAR_5->dec_ctx;




        if (VAR_6->codec_type == VAR_0 && VAR_5->nb_samples)
            VAR_9 = 1;
    }

    for (VAR_7 = 0; VAR_7 < VAR_3->nb_streams; VAR_7++) {
        VAR_5 = VAR_2[VAR_3->ist_index + VAR_7];
        VAR_6 = VAR_5->dec_ctx;

        if (VAR_9) {
            if (VAR_6->codec_type == VAR_0 && VAR_5->nb_samples) {
                AVRational VAR_11 = {1, VAR_6->sample_rate};

                VAR_10 = FUNC_1(VAR_5->nb_samples, VAR_11, VAR_5->st->time_base);
            } else {
                continue;
            }
        } else {
            if (VAR_5->framerate.num) {
                VAR_10 = FUNC_1(1, FUNC_0(VAR_5->framerate), VAR_5->st->time_base);
            } else if (VAR_5->st->avg_frame_rate.num) {
                VAR_10 = FUNC_1(1, FUNC_0(VAR_5->st->avg_frame_rate), VAR_5->st->time_base);
            } else {
                VAR_10 = 1;
            }
        }
        if (!VAR_3->duration)
            VAR_3->time_base = VAR_5->st->time_base;


        VAR_10 += VAR_5->max_pts - VAR_5->min_pts;
        VAR_3->time_base = FUNC_3(VAR_10, &VAR_3->duration, VAR_5->st->time_base,
                                        VAR_3->time_base);
    }

    if (VAR_3->loop > 0)
        VAR_3->loop--;

    return VAR_8;
}
