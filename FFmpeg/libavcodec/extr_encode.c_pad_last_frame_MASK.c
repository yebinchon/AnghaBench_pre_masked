
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int sample_fmt; int channels; scalar_t__ frame_size; } ;
struct TYPE_11__ {scalar_t__ nb_samples; int extended_data; int channels; int channel_layout; int format; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int ,int ,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_1, AVFrame **VAR_2, const AVFrame *VAR_3)
{
    AVFrame *VAR_4 = ((void*)0);
    int VAR_5;

    if (!(VAR_4 = FUNC_1()))
        return FUNC_0(VAR_0);

    VAR_4->format = VAR_3->format;
    VAR_4->channel_layout = VAR_3->channel_layout;
    VAR_4->channels = VAR_3->channels;
    VAR_4->nb_samples = VAR_1->frame_size;
    VAR_5 = FUNC_4(VAR_4, 32);
    if (VAR_5 < 0)
        goto fail;

    VAR_5 = FUNC_2(VAR_4, VAR_3);
    if (VAR_5 < 0)
        goto fail;

    if ((VAR_5 = FUNC_5(VAR_4->extended_data, VAR_3->extended_data, 0, 0,
                               VAR_3->nb_samples, VAR_1->channels, VAR_1->sample_fmt)) < 0)
        goto fail;
    if ((VAR_5 = FUNC_6(VAR_4->extended_data, VAR_3->nb_samples,
                                      VAR_4->nb_samples - VAR_3->nb_samples,
                                      VAR_1->channels, VAR_1->sample_fmt)) < 0)
        goto fail;

    *VAR_2 = VAR_4;

    return 0;

fail:
    FUNC_3(&VAR_4);
    return VAR_5;
}
