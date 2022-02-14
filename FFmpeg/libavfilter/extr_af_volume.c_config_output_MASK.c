
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int channels; int planes; int* var_values; int sample_fmt; } ;
typedef TYPE_1__ VolumeContext ;
struct TYPE_9__ {TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_8__ {int channels; int sample_rate; TYPE_3__* src; int time_base; int format; } ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int,int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_14)
{
    AVFilterContext *VAR_15 = VAR_14->src;
    VolumeContext *VAR_16 = VAR_15->priv;
    AVFilterLink *VAR_17 = VAR_15->inputs[0];

    VAR_16->sample_fmt = VAR_17->format;
    VAR_16->channels = VAR_17->channels;
    VAR_16->planes = FUNC_2(VAR_17->format) ? VAR_16->channels : 1;

    VAR_16->var_values[VAR_2] =
    VAR_16->var_values[VAR_4] =
    VAR_16->var_values[VAR_5] =
    VAR_16->var_values[VAR_6] =
    VAR_16->var_values[VAR_7] =
    VAR_16->var_values[VAR_9] =
    VAR_16->var_values[VAR_10] =
    VAR_16->var_values[VAR_11] =
    VAR_16->var_values[VAR_13] = VAR_1;

    VAR_16->var_values[VAR_3] = VAR_17->channels;
    VAR_16->var_values[VAR_12] = FUNC_1(VAR_17->time_base);
    VAR_16->var_values[VAR_8] = VAR_17->sample_rate;

    FUNC_0(VAR_17->src, VAR_0, "tb:%f sample_rate:%f nb_channels:%f\n",
           VAR_16->var_values[VAR_12],
           VAR_16->var_values[VAR_8],
           VAR_16->var_values[VAR_3]);

    return FUNC_3(VAR_15);
}
