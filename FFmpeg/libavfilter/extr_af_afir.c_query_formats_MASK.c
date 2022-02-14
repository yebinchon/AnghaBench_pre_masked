
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_12__ {TYPE_1__** inputs; TYPE_3__** outputs; TYPE_2__* priv; } ;
struct TYPE_11__ {int in_channel_layouts; int in_formats; } ;
struct TYPE_10__ {scalar_t__ ir_format; scalar_t__ response; } ;
struct TYPE_9__ {int out_channel_layouts; } ;
typedef TYPE_2__ AudioFIRContext ;
typedef TYPE_3__ AVFilterLink ;
typedef int AVFilterFormats ;
typedef TYPE_4__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int FUNC_0 (int ) ;
 int VAR_0 ;




 int VAR_1 ;
 int FUNC_1 (int **,int ) ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int const*) ;
 int FUNC_7 (TYPE_4__*,int *) ;
 int FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_10(AVFilterContext *VAR_2)
{
    AudioFIRContext *VAR_3 = VAR_2->priv;
    AVFilterFormats *VAR_4;
    AVFilterChannelLayouts *VAR_5;
    static const enum AVSampleFormat VAR_6[] = {
        129,
        128
    };
    static const enum AVPixelFormat VAR_7[] = {
        130,
        131
    };
    int VAR_8;

    if (VAR_3->response) {
        AVFilterLink *VAR_9 = VAR_2->outputs[1];
        VAR_4 = FUNC_6(VAR_7);
        if ((VAR_8 = FUNC_5(VAR_4, &VAR_9->in_formats)) < 0)
            return VAR_8;
    }

    VAR_5 = FUNC_2();
    if (!VAR_5)
        return FUNC_0(VAR_1);

    if (VAR_3->ir_format) {
        VAR_8 = FUNC_7(VAR_2, VAR_5);
        if (VAR_8 < 0)
            return VAR_8;
    } else {
        AVFilterChannelLayouts *VAR_10 = ((void*)0);

        VAR_8 = FUNC_1(&VAR_10, VAR_0);
        if (VAR_8)
            return VAR_8;

        if ((VAR_8 = FUNC_4(VAR_5, &VAR_2->inputs[0]->out_channel_layouts)) < 0)
            return VAR_8;
        if ((VAR_8 = FUNC_4(VAR_5, &VAR_2->outputs[0]->in_channel_layouts)) < 0)
            return VAR_8;
        if ((VAR_8 = FUNC_4(VAR_10, &VAR_2->inputs[1]->out_channel_layouts)) < 0)
            return VAR_8;
    }

    VAR_4 = FUNC_6(VAR_6);
    if ((VAR_8 = FUNC_8(VAR_2, VAR_4)) < 0)
        return VAR_8;

    VAR_4 = FUNC_3();
    return FUNC_9(VAR_2, VAR_4);
}
