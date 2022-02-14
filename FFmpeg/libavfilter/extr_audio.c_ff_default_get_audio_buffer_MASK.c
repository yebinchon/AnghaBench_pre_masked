
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_7__ {int channels; int format; int sample_rate; int channel_layout; void* frame_pool; } ;
struct TYPE_6__ {int nb_samples; int extended_data; int sample_rate; int channel_layout; } ;
typedef int FFFramePool ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVFilterLink ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int,int) ;
 void* FUNC_3 (int ,int,int,int,int) ;
 TYPE_1__* FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*,int*,int*,int*,int*) ;
 int FUNC_6 (int **) ;

AVFrame *FUNC_7(AVFilterLink *VAR_3, int VAR_4)
{
    AVFrame *VAR_5 = ((void*)0);
    int VAR_6 = VAR_3->channels;

    FUNC_0(VAR_6 == FUNC_1(VAR_3->channel_layout) || !FUNC_1(VAR_3->channel_layout));

    if (!VAR_3->frame_pool) {
        VAR_3->frame_pool = FUNC_3(VAR_2, VAR_6,
                                                    VAR_4, VAR_3->format, VAR_1);
        if (!VAR_3->frame_pool)
            return ((void*)0);
    } else {
        int VAR_7 = 0;
        int VAR_8 = 0;
        int VAR_9 = 0;
        enum AVSampleFormat VAR_10 = VAR_0;

        if (FUNC_5(VAR_3->frame_pool,
                                           &VAR_7, &VAR_8,
                                           &VAR_10, &VAR_9) < 0) {
            return ((void*)0);
        }

        if (VAR_7 != VAR_6 || VAR_8 < VAR_4 ||
            VAR_10 != VAR_3->format || VAR_9 != VAR_1) {

            FUNC_6((FFFramePool **)&VAR_3->frame_pool);
            VAR_3->frame_pool = FUNC_3(VAR_2, VAR_6,
                                                        VAR_4, VAR_3->format, VAR_1);
            if (!VAR_3->frame_pool)
                return ((void*)0);
        }
    }

    VAR_5 = FUNC_4(VAR_3->frame_pool);
    if (!VAR_5)
        return ((void*)0);

    VAR_5->nb_samples = VAR_4;
    VAR_5->channel_layout = VAR_3->channel_layout;
    VAR_5->sample_rate = VAR_3->sample_rate;

    FUNC_2(VAR_5->extended_data, 0, VAR_4, VAR_6, VAR_3->format);

    return VAR_5;
}
