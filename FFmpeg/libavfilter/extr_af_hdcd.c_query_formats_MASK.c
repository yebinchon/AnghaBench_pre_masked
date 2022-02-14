
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_7__ {TYPE_1__** outputs; TYPE_1__** inputs; } ;
struct TYPE_6__ {int in_formats; int out_formats; } ;
typedef TYPE_1__ AVFilterLink ;
typedef int AVFilterFormats ;
typedef TYPE_2__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int **,int ) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_2)
{
    static const int VAR_3[] = {
        44100, 48000,
        88200, 96000,
        176400, 192000,
        -1
    };
    AVFilterFormats *VAR_4;
    AVFilterFormats *VAR_5;
    AVFilterChannelLayouts *VAR_6 = ((void*)0);
    AVFilterLink *VAR_7 = VAR_2->inputs[0];
    AVFilterLink *VAR_8 = VAR_2->outputs[0];

    static const enum AVSampleFormat VAR_9[] = {
        131,
        130,
        129,
        128,
        132
    };
    static const enum AVSampleFormat VAR_10[] = {
        129,
        132
    };
    int VAR_11;

    VAR_11 = FUNC_0(&VAR_6, VAR_0);
    if (VAR_11 < 0)
        return VAR_11;
    VAR_11 = FUNC_0(&VAR_6, VAR_1);
    if (VAR_11 < 0)
        return VAR_11;

    VAR_11 = FUNC_3(VAR_2, VAR_6);
    if (VAR_11 < 0)
        return VAR_11;

    VAR_4 = FUNC_2(VAR_9);
    VAR_11 = FUNC_1(VAR_4, &VAR_7->out_formats);
    if (VAR_11 < 0)
        return VAR_11;

    VAR_5 = FUNC_2(VAR_10);
    VAR_11 = FUNC_1(VAR_5, &VAR_8->in_formats);
    if (VAR_11 < 0)
        return VAR_11;

    return
        FUNC_4(VAR_2, FUNC_2(VAR_3) );
}
