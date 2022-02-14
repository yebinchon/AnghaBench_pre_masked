
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_7__ {int swr; } ;
struct TYPE_6__ {TYPE_1__** outputs; TYPE_1__** inputs; TYPE_3__* priv; } ;
struct TYPE_5__ {int in_channel_layouts; int in_formats; int in_samplerates; int out_channel_layouts; int out_samplerates; int out_formats; } ;
typedef TYPE_1__ AVFilterLink ;
typedef int AVFilterFormats ;
typedef TYPE_2__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;
typedef TYPE_3__ AResampleContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,scalar_t__*) ;
 int FUNC_1 (int ,char*,int ,int*) ;
 int * FUNC_2 (scalar_t__*) ;
 int * FUNC_3 () ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int*) ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_2)
{
    AResampleContext *VAR_3 = VAR_2->priv;
    enum AVSampleFormat VAR_4;
    int64_t VAR_5, VAR_6;

    AVFilterLink *VAR_7 = VAR_2->inputs[0];
    AVFilterLink *VAR_8 = VAR_2->outputs[0];

    AVFilterFormats *VAR_9, *VAR_10;
    AVFilterFormats *VAR_11, *VAR_12;
    AVFilterChannelLayouts *VAR_13, *VAR_14;
    int VAR_15;

    FUNC_1(VAR_3->swr, "osf", 0, &VAR_4);
    FUNC_0(VAR_3->swr, "osr", 0, &VAR_5);
    FUNC_0(VAR_3->swr, "ocl", 0, &VAR_6);

    VAR_9 = FUNC_4(VAR_0);
    if ((VAR_15 = FUNC_7(VAR_9, &VAR_7->out_formats)) < 0)
        return VAR_15;

    VAR_11 = FUNC_5();
    if ((VAR_15 = FUNC_7(VAR_11, &VAR_7->out_samplerates)) < 0)
        return VAR_15;

    VAR_13 = FUNC_3();
    if ((VAR_15 = FUNC_6(VAR_13, &VAR_7->out_channel_layouts)) < 0)
        return VAR_15;

    if(VAR_5 > 0) {
        int VAR_16[] = { VAR_5, -1 };
        VAR_12 = FUNC_8(VAR_16);
    } else {
        VAR_12 = FUNC_5();
    }

    if ((VAR_15 = FUNC_7(VAR_12, &VAR_8->in_samplerates)) < 0)
        return VAR_15;

    if(VAR_4 != VAR_1) {
        int VAR_17[] = { VAR_4, -1 };
        VAR_10 = FUNC_8(VAR_17);
    } else
        VAR_10 = FUNC_4(VAR_0);
    if ((VAR_15 = FUNC_7(VAR_10, &VAR_8->in_formats)) < 0)
        return VAR_15;

    if(VAR_6) {
        int64_t VAR_18[] = { VAR_6, -1 };
        VAR_14 = FUNC_2(VAR_18);
    } else
        VAR_14 = FUNC_3();

    return FUNC_6(VAR_14, &VAR_8->in_channel_layouts);
}
