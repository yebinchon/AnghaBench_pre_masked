
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_5__ {TYPE_1__** outputs; TYPE_1__** inputs; } ;
struct TYPE_4__ {int in_formats; int out_samplerates; int out_channel_layouts; int out_formats; } ;
typedef TYPE_1__ AVFilterLink ;
typedef int AVFilterFormats ;
typedef TYPE_2__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;







 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int const*) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_0)
{
    AVFilterFormats *VAR_1 = ((void*)0);
    AVFilterChannelLayouts *VAR_2 = ((void*)0);
    AVFilterLink *VAR_3 = VAR_0->inputs[0];
    AVFilterLink *VAR_4 = VAR_0->outputs[0];
    static const enum AVSampleFormat VAR_5[] = { 129, 128 };
    static const enum AVPixelFormat VAR_6[] = { 131, 130, 132 };
    int VAR_7;


    VAR_1 = FUNC_4(VAR_5);
    if ((VAR_7 = FUNC_3(VAR_1, &VAR_3->out_formats)) < 0)
        return VAR_7;

    VAR_2 = FUNC_0();
    if ((VAR_7 = FUNC_2(VAR_2, &VAR_3->out_channel_layouts)) < 0)
        return VAR_7;

    VAR_1 = FUNC_1();
    if ((VAR_7 = FUNC_3(VAR_1, &VAR_3->out_samplerates)) < 0)
        return VAR_7;


    VAR_1 = FUNC_4(VAR_6);
    if ((VAR_7 = FUNC_3(VAR_1, &VAR_4->in_formats)) < 0)
        return VAR_7;

    return 0;
}
