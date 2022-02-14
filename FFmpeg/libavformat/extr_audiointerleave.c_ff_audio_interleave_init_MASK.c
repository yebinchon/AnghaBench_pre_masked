
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_12__ {int num; } ;
struct TYPE_11__ {TYPE_1__* codecpar; TYPE_2__* priv_data; } ;
struct TYPE_10__ {int sample_size; int const* samples_per_frame; int* samples; int fifo_size; int fifo; TYPE_4__ time_base; } ;
struct TYPE_9__ {scalar_t__ codec_type; int channels; int codec_id; } ;
typedef TYPE_2__ AudioInterleaveContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVRational ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*,int ,char*) ;

int FUNC_4(AVFormatContext *VAR_4,
                             const int *VAR_5,
                             AVRational VAR_6)
{
    int VAR_7;

    if (!VAR_5)
        return FUNC_0(VAR_2);

    if (!VAR_6.num) {
        FUNC_3(VAR_4, VAR_1, "timebase not set for audio interleave\n");
        return FUNC_0(VAR_2);
    }
    for (VAR_7 = 0; VAR_7 < VAR_4->nb_streams; VAR_7++) {
        AVStream *VAR_8 = VAR_4->streams[VAR_7];
        AudioInterleaveContext *VAR_9 = VAR_8->priv_data;

        if (VAR_8->codecpar->codec_type == VAR_0) {
            VAR_9->sample_size = (VAR_8->codecpar->channels *
                                FUNC_2(VAR_8->codecpar->codec_id)) / 8;
            if (!VAR_9->sample_size) {
                FUNC_3(VAR_4, VAR_1, "could not compute sample size\n");
                return FUNC_0(VAR_2);
            }
            VAR_9->samples_per_frame = VAR_5;
            VAR_9->samples = VAR_9->samples_per_frame;
            VAR_9->time_base = VAR_6;

            VAR_9->fifo_size = 100* *VAR_9->samples;
            if (!(VAR_9->fifo= FUNC_1(100, *VAR_9->samples)))
                return FUNC_0(VAR_3);
        }
    }

    return 0;
}
