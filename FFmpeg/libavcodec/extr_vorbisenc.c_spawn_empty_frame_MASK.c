
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t frame_size; int channel_layout; int sample_fmt; } ;
struct TYPE_8__ {size_t nb_samples; int * extended_data; int format; int channel_layout; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__**) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,size_t) ;

__attribute__((used)) static AVFrame *FUNC_5(AVCodecContext *VAR_0, int VAR_1)
{
    AVFrame *VAR_2 = FUNC_0();
    int VAR_3;

    if (!VAR_2)
        return ((void*)0);

    VAR_2->format = VAR_0->sample_fmt;
    VAR_2->nb_samples = VAR_0->frame_size;
    VAR_2->channel_layout = VAR_0->channel_layout;

    if (FUNC_2(VAR_2, 4)) {
        FUNC_1(&VAR_2);
        return ((void*)0);
    }

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        size_t VAR_4 = FUNC_3(VAR_2->format);
        FUNC_4(VAR_2->extended_data[VAR_3], 0, VAR_4 * VAR_2->nb_samples);
    }
    return VAR_2;
}
