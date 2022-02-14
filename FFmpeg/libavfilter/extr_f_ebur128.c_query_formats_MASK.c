
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
struct TYPE_6__ {int in_samplerates; int out_samplerates; int in_channel_layouts; int out_channel_layouts; int in_formats; int out_formats; } ;
struct TYPE_5__ {scalar_t__ do_video; } ;
typedef TYPE_1__ EBUR128Context ;
typedef TYPE_2__ AVFilterLink ;
typedef int AVFilterFormats ;
typedef TYPE_3__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;






 int * FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int const*) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_0)
{
    EBUR128Context *VAR_1 = VAR_0->priv;
    AVFilterFormats *VAR_2;
    AVFilterChannelLayouts *VAR_3;
    AVFilterLink *VAR_4 = VAR_0->inputs[0];
    AVFilterLink *VAR_5 = VAR_0->outputs[0];
    int VAR_6;

    static const enum AVSampleFormat VAR_7[] = { 129, 128 };
    static const int VAR_8[] = {48000, -1};
    static const enum AVPixelFormat VAR_9[] = { 130, 131 };


    if (VAR_1->do_video) {
        VAR_2 = FUNC_3(VAR_9);
        if ((VAR_6 = FUNC_2(VAR_2, &VAR_5->in_formats)) < 0)
            return VAR_6;
        VAR_5 = VAR_0->outputs[1];
    }




    VAR_2 = FUNC_3(VAR_7);
    if ((VAR_6 = FUNC_2(VAR_2, &VAR_4->out_formats)) < 0 ||
        (VAR_6 = FUNC_2(VAR_2, &VAR_5->in_formats)) < 0)
        return VAR_6;

    VAR_3 = FUNC_0();
    if ((VAR_6 = FUNC_1(VAR_3, &VAR_4->out_channel_layouts)) < 0 ||
        (VAR_6 = FUNC_1(VAR_3, &VAR_5->in_channel_layouts)) < 0)
        return VAR_6;

    VAR_2 = FUNC_3(VAR_8);
    if ((VAR_6 = FUNC_2(VAR_2, &VAR_4->out_samplerates)) < 0 ||
        (VAR_6 = FUNC_2(VAR_2, &VAR_5->in_samplerates)) < 0)
        return VAR_6;

    return 0;
}
