
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_9__ {TYPE_2__** outputs; TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_8__ {int in_samplerates; int out_samplerates; } ;
struct TYPE_7__ {scalar_t__ frame_type; } ;
typedef TYPE_1__ LoudNormContext ;
typedef TYPE_2__ AVFilterLink ;
typedef int AVFilterFormats ;
typedef TYPE_3__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int const*) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_2)
{
    LoudNormContext *VAR_3 = VAR_2->priv;
    AVFilterFormats *VAR_4;
    AVFilterChannelLayouts *VAR_5;
    AVFilterLink *VAR_6 = VAR_2->inputs[0];
    AVFilterLink *VAR_7 = VAR_2->outputs[0];
    static const int VAR_8[] = {192000, -1};
    static const enum AVSampleFormat VAR_9[] = {
        129,
        128
    };
    int VAR_10;

    VAR_5 = FUNC_1();
    if (!VAR_5)
        return FUNC_0(VAR_0);
    VAR_10 = FUNC_4(VAR_2, VAR_5);
    if (VAR_10 < 0)
        return VAR_10;

    VAR_4 = FUNC_3(VAR_9);
    if (!VAR_4)
        return FUNC_0(VAR_0);
    VAR_10 = FUNC_5(VAR_2, VAR_4);
    if (VAR_10 < 0)
        return VAR_10;

    if (VAR_3->frame_type != VAR_1) {
        VAR_4 = FUNC_3(VAR_8);
        if (!VAR_4)
            return FUNC_0(VAR_0);
        VAR_10 = FUNC_2(VAR_4, &VAR_6->out_samplerates);
        if (VAR_10 < 0)
            return VAR_10;
        VAR_10 = FUNC_2(VAR_4, &VAR_7->in_samplerates);
        if (VAR_10 < 0)
            return VAR_10;
    }

    return 0;
}
