
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_7__ {TYPE_2__** outputs; TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_6__ {int out_formats; int in_samplerates; int in_channel_layouts; int in_formats; } ;
struct TYPE_5__ {int sample_rate; int channels; } ;
typedef TYPE_1__ SpectrumSynthContext ;
typedef TYPE_2__ AVFilterLink ;
typedef int AVFilterFormats ;
typedef TYPE_3__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int const*) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_1)
{
    SpectrumSynthContext *VAR_2 = VAR_1->priv;
    AVFilterFormats *VAR_3 = ((void*)0);
    AVFilterChannelLayouts *VAR_4 = ((void*)0);
    AVFilterLink *VAR_5 = VAR_1->inputs[0];
    AVFilterLink *VAR_6 = VAR_1->inputs[1];
    AVFilterLink *VAR_7 = VAR_1->outputs[0];
    static const enum AVSampleFormat VAR_8[] = { 129, 128 };
    static const enum AVPixelFormat VAR_9[] = { 134, 135,
                                                   132, 130,
                                                   131, 133 };
    int VAR_10, VAR_11[] = { 48000, -1 };

    VAR_3 = FUNC_5(VAR_8);
    if ((VAR_10 = FUNC_4 (VAR_3, &VAR_7->in_formats )) < 0 ||
        (VAR_10 = FUNC_2 (&VAR_4, FUNC_1(VAR_2->channels))) < 0 ||
        (VAR_10 = FUNC_3 (VAR_4 , &VAR_7->in_channel_layouts)) < 0)
        return VAR_10;

    VAR_11[0] = VAR_2->sample_rate;
    VAR_3 = FUNC_5(VAR_11);
    if (!VAR_3)
        return FUNC_0(VAR_0);
    if ((VAR_10 = FUNC_4(VAR_3, &VAR_7->in_samplerates)) < 0)
        return VAR_10;

    VAR_3 = FUNC_5(VAR_9);
    if (!VAR_3)
        return FUNC_0(VAR_0);
    if ((VAR_10 = FUNC_4(VAR_3, &VAR_5->out_formats)) < 0)
        return VAR_10;

    VAR_3 = FUNC_5(VAR_9);
    if (!VAR_3)
        return FUNC_0(VAR_0);
    if ((VAR_10 = FUNC_4(VAR_3, &VAR_6->out_formats)) < 0)
        return VAR_10;

    return 0;
}
