
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {size_t nb_samples; int * extended_data; int format; int channel_layout; } ;
struct TYPE_10__ {int channels; TYPE_1__* avctx; } ;
struct TYPE_9__ {size_t frame_size; int channel_layout; int sample_fmt; } ;
typedef TYPE_2__ OpusEncContext ;
typedef TYPE_3__ AVFrame ;


 TYPE_3__* FUNC_0 () ;
 int FUNC_1 (TYPE_3__**) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,size_t) ;

__attribute__((used)) static AVFrame *FUNC_5(OpusEncContext *VAR_0)
{
    AVFrame *VAR_1 = FUNC_0();
    if (!VAR_1)
        return ((void*)0);
    VAR_1->format = VAR_0->avctx->sample_fmt;
    VAR_1->nb_samples = VAR_0->avctx->frame_size;
    VAR_1->channel_layout = VAR_0->avctx->channel_layout;
    if (FUNC_2(VAR_1, 4)) {
        FUNC_1(&VAR_1);
        return ((void*)0);
    }
    for (int VAR_2 = 0; VAR_2 < VAR_0->channels; VAR_2++) {
        size_t VAR_3 = FUNC_3(VAR_1->format);
        FUNC_4(VAR_1->extended_data[VAR_2], 0, VAR_3*VAR_1->nb_samples);
    }
    return VAR_1;
}
