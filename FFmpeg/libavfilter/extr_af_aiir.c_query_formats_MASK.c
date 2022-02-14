
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_10__ {TYPE_2__** outputs; TYPE_1__* priv; } ;
struct TYPE_9__ {int in_formats; } ;
struct TYPE_8__ {int sample_format; scalar_t__ response; } ;
typedef TYPE_1__ AudioIIRContext ;
typedef TYPE_2__ AVFilterLink ;
typedef int AVFilterFormats ;
typedef TYPE_3__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int const*) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_8(AVFilterContext *VAR_3)
{
    AudioIIRContext *VAR_4 = VAR_3->priv;
    AVFilterFormats *VAR_5;
    AVFilterChannelLayouts *VAR_6;
    enum AVSampleFormat VAR_7[] = {
        VAR_0,
        VAR_1
    };
    static const enum AVPixelFormat VAR_8[] = {
        128,
        129
    };
    int VAR_9;

    if (VAR_4->response) {
        AVFilterLink *VAR_10 = VAR_3->outputs[1];

        VAR_5 = FUNC_4(VAR_8);
        if ((VAR_9 = FUNC_3(VAR_5, &VAR_10->in_formats)) < 0)
            return VAR_9;
    }

    VAR_6 = FUNC_1();
    if (!VAR_6)
        return FUNC_0(VAR_2);
    VAR_9 = FUNC_5(VAR_3, VAR_6);
    if (VAR_9 < 0)
        return VAR_9;

    VAR_7[0] = VAR_4->sample_format;
    VAR_5 = FUNC_4(VAR_7);
    if (!VAR_5)
        return FUNC_0(VAR_2);
    VAR_9 = FUNC_6(VAR_3, VAR_5);
    if (VAR_9 < 0)
        return VAR_9;

    VAR_5 = FUNC_2();
    if (!VAR_5)
        return FUNC_0(VAR_2);
    return FUNC_7(VAR_3, VAR_5);
}
