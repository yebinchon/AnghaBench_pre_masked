
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_5__ {TYPE_1__** outputs; TYPE_1__** inputs; } ;
struct TYPE_4__ {int in_formats; int out_samplerates; int out_channel_layouts; int out_formats; } ;
typedef TYPE_1__ AVFilterLink ;
typedef int AVFilterFormats ;
typedef TYPE_2__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_0 (int*) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int*) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_9)
{
    AVFilterFormats *VAR_10 = ((void*)0);
    AVFilterChannelLayouts *VAR_11 = ((void*)0);
    AVFilterLink *VAR_12 = VAR_9->inputs[0];
    AVFilterLink *VAR_13 = VAR_9->outputs[0];
    enum AVSampleFormat VAR_14[] = { VAR_7, VAR_8 };
    enum AVPixelFormat VAR_15[] = {
        VAR_4, VAR_5,
        VAR_6, VAR_3, VAR_2
    };
    int64_t VAR_16[] = { VAR_0, VAR_1, -1 };
    int VAR_17;


    VAR_10 = FUNC_4(VAR_14);
    if ((VAR_17 = FUNC_3(VAR_10, &VAR_12->out_formats)) < 0)
        return VAR_17;

    VAR_11 = FUNC_0(VAR_16);
    if ((VAR_17 = FUNC_2(VAR_11, &VAR_12->out_channel_layouts)) < 0)
        return VAR_17;

    VAR_10 = FUNC_1();
    if ((VAR_17 = FUNC_3(VAR_10, &VAR_12->out_samplerates)) < 0)
        return VAR_17;


    VAR_10 = FUNC_4(VAR_15);
    if ((VAR_17 = FUNC_3(VAR_10, &VAR_13->in_formats)) < 0)
        return VAR_17;

    return 0;
}
