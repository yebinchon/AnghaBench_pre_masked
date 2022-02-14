
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_14__ {int filter; } ;
typedef TYPE_4__ WaveformContext ;
struct TYPE_17__ {TYPE_3__** outputs; TYPE_1__** inputs; TYPE_4__* priv; } ;
struct TYPE_16__ {int nb_formats; int * formats; } ;
struct TYPE_15__ {int nb_components; int flags; TYPE_2__* comp; } ;
struct TYPE_13__ {TYPE_6__* in_formats; } ;
struct TYPE_12__ {int depth; } ;
struct TYPE_11__ {TYPE_6__* out_formats; TYPE_6__* in_formats; } ;
typedef TYPE_5__ AVPixFmtDescriptor ;
typedef TYPE_6__ AVFilterFormats ;
typedef TYPE_7__ AVFilterContext ;




 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;




 TYPE_5__* FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_6__**) ;
 int FUNC_3 (int const*) ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 int* VAR_14 ;
 int* VAR_15 ;
 int* VAR_16 ;
 int* VAR_17 ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_18)
{
    WaveformContext *VAR_19 = VAR_18->priv;
    const enum AVPixelFormat *VAR_20;
    const enum AVPixelFormat *VAR_21;
    const AVPixFmtDescriptor *VAR_22, *VAR_23;
    AVFilterFormats *VAR_24, *VAR_25;
    int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;

    if (!VAR_18->inputs[0]->in_formats ||
        !VAR_18->inputs[0]->in_formats->nb_formats) {
        return FUNC_0(VAR_2);
    }

    switch (VAR_19->filter) {
    case 130: VAR_21 = VAR_5; break;
    case 133:
    case 129:
    case 128:
    case 134:
    case 131: VAR_21 = VAR_4; break;
    case 135:
    case 132: VAR_21 = VAR_3; break;
    default: return VAR_0;
    }

    if (!VAR_18->inputs[0]->out_formats) {
        if ((VAR_30 = FUNC_2(FUNC_3(VAR_21), &VAR_18->inputs[0]->out_formats)) < 0)
            return VAR_30;
    }

    VAR_24 = VAR_18->inputs[0]->in_formats;
    VAR_25 = VAR_18->inputs[0]->out_formats;
    VAR_22 = FUNC_1(VAR_24->formats[0]);
    VAR_23 = FUNC_1(VAR_25->formats[0]);
    VAR_31 = VAR_22->nb_components;
    VAR_32 = VAR_23->nb_components;
    VAR_28 = VAR_22->flags & VAR_1;
    VAR_26 = VAR_22->comp[0].depth;
    VAR_27 = VAR_23->comp[0].depth;
    if (VAR_31 != VAR_32 || VAR_26 != VAR_27)
        return FUNC_0(VAR_2);
    for (VAR_29 = 1; VAR_29 < VAR_24->nb_formats; VAR_29++) {
        VAR_22 = FUNC_1(VAR_24->formats[VAR_29]);
        if (VAR_28 != (VAR_22->flags & VAR_1) ||
            VAR_26 != VAR_22->comp[0].depth)
            return FUNC_0(VAR_2);
    }

    if (VAR_19->filter == 130 && VAR_31 == 1 && VAR_26 == 8)
        VAR_20 = VAR_8;
    else if (VAR_19->filter == 130 && VAR_31 == 1 && VAR_26 == 9)
        VAR_20 = VAR_9;
    else if (VAR_19->filter == 130 && VAR_31 == 1 && VAR_26 == 10)
        VAR_20 = VAR_6;
    else if (VAR_19->filter == 130 && VAR_31 == 1 && VAR_26 == 12)
        VAR_20 = VAR_7;
    else if (VAR_28 && VAR_26 == 8 && VAR_31 > 2)
        VAR_20 = VAR_12;
    else if (VAR_28 && VAR_26 == 9 && VAR_31 > 2)
        VAR_20 = VAR_13;
    else if (VAR_28 && VAR_26 == 10 && VAR_31 > 2)
        VAR_20 = VAR_10;
    else if (VAR_28 && VAR_26 == 12 && VAR_31 > 2)
        VAR_20 = VAR_11;
    else if (VAR_26 == 8 && VAR_31 > 2)
        VAR_20 = VAR_16;
    else if (VAR_26 == 9 && VAR_31 > 2)
        VAR_20 = VAR_17;
    else if (VAR_26 == 10 && VAR_31 > 2)
        VAR_20 = VAR_14;
    else if (VAR_26 == 12 && VAR_31 > 2)
        VAR_20 = VAR_15;
    else
        return FUNC_0(VAR_2);
    if ((VAR_30 = FUNC_2(FUNC_3(VAR_20), &VAR_18->outputs[0]->in_formats)) < 0)
        return VAR_30;

    return 0;
}
