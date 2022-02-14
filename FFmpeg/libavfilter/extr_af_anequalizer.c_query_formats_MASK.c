
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_7__ {TYPE_2__** outputs; TYPE_1__* priv; TYPE_2__** inputs; } ;
struct TYPE_6__ {int in_samplerates; int out_samplerates; int in_channel_layouts; int out_channel_layouts; int in_formats; int out_formats; } ;
struct TYPE_5__ {scalar_t__ draw_curves; } ;
typedef TYPE_1__ AudioNEqualizerContext ;
typedef TYPE_2__ AVFilterLink ;
typedef int AVFilterFormats ;
typedef TYPE_3__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;






 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int const*) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_0)
{
    AVFilterLink *VAR_1 = VAR_0->inputs[0];
    AVFilterLink *VAR_2 = VAR_0->outputs[0];
    AudioNEqualizerContext *VAR_3 = VAR_0->priv;
    AVFilterFormats *VAR_4;
    AVFilterChannelLayouts *VAR_5;
    static const enum AVPixelFormat VAR_6[] = { 130, 131 };
    static const enum AVSampleFormat VAR_7[] = {
        129,
        128
    };
    int VAR_8;

    if (VAR_3->draw_curves) {
        AVFilterLink *VAR_9 = VAR_0->outputs[1];
        VAR_4 = FUNC_4(VAR_6);
        if ((VAR_8 = FUNC_3(VAR_4, &VAR_9->in_formats)) < 0)
            return VAR_8;
    }

    VAR_4 = FUNC_4(VAR_7);
    if ((VAR_8 = FUNC_3(VAR_4, &VAR_1->out_formats)) < 0 ||
        (VAR_8 = FUNC_3(VAR_4, &VAR_2->in_formats)) < 0)
        return VAR_8;

    VAR_5 = FUNC_0();
    if ((VAR_8 = FUNC_2(VAR_5, &VAR_1->out_channel_layouts)) < 0 ||
        (VAR_8 = FUNC_2(VAR_5, &VAR_2->in_channel_layouts)) < 0)
        return VAR_8;

    VAR_4 = FUNC_1();
    if ((VAR_8 = FUNC_3(VAR_4, &VAR_1->out_samplerates)) < 0 ||
        (VAR_8 = FUNC_3(VAR_4, &VAR_2->in_samplerates)) < 0)
        return VAR_8;

    return 0;
}
