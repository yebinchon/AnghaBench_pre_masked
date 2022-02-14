
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
struct TYPE_6__ {int in_formats; int in_samplerates; int out_samplerates; int in_channel_layouts; int out_channel_layouts; int out_formats; } ;
struct TYPE_5__ {scalar_t__ do_video; } ;
typedef TYPE_1__ AudioPhaseMeterContext ;
typedef TYPE_2__ AVFilterLink ;
typedef int AVFilterFormats ;
typedef TYPE_3__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int VAR_0 ;




 int FUNC_0 (int **,int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int const*) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_1)
{
    AudioPhaseMeterContext *VAR_2 = VAR_1->priv;
    AVFilterFormats *VAR_3 = ((void*)0);
    AVFilterChannelLayouts *VAR_4 = ((void*)0);
    AVFilterLink *VAR_5 = VAR_1->inputs[0];
    AVFilterLink *VAR_6 = VAR_1->outputs[0];
    static const enum AVSampleFormat VAR_7[] = { 129, 128 };
    static const enum AVPixelFormat VAR_8[] = { 130, 131 };
    int VAR_9;

    VAR_3 = FUNC_4(VAR_7);
    if ((VAR_9 = FUNC_3 (VAR_3, &VAR_5->out_formats )) < 0 ||
        (VAR_9 = FUNC_3 (VAR_3, &VAR_6->in_formats )) < 0 ||
        (VAR_9 = FUNC_0 (&VAR_4, VAR_0 )) < 0 ||
        (VAR_9 = FUNC_2 (VAR_4 , &VAR_5->out_channel_layouts)) < 0 ||
        (VAR_9 = FUNC_2 (VAR_4 , &VAR_6->in_channel_layouts)) < 0)
        return VAR_9;

    VAR_3 = FUNC_1();
    if ((VAR_9 = FUNC_3(VAR_3, &VAR_5->out_samplerates)) < 0 ||
        (VAR_9 = FUNC_3(VAR_3, &VAR_6->in_samplerates)) < 0)
        return VAR_9;

    if (VAR_2->do_video) {
        AVFilterLink *VAR_10 = VAR_1->outputs[1];

        VAR_3 = FUNC_4(VAR_8);
        if ((VAR_9 = FUNC_3(VAR_3, &VAR_10->in_formats)) < 0)
            return VAR_9;
    }

    return 0;
}
