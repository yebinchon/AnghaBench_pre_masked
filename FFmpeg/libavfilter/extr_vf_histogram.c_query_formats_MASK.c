
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_14__ {TYPE_3__** outputs; TYPE_1__** inputs; } ;
struct TYPE_13__ {int nb_formats; int * formats; } ;
struct TYPE_12__ {int flags; TYPE_2__* comp; } ;
struct TYPE_11__ {int in_formats; } ;
struct TYPE_10__ {int depth; } ;
struct TYPE_9__ {TYPE_5__* in_formats; int out_formats; } ;
typedef TYPE_4__ AVPixFmtDescriptor ;
typedef TYPE_5__ AVFilterFormats ;
typedef TYPE_6__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int const*) ;
 int const* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_11)
{
    AVFilterFormats *VAR_12;
    const AVPixFmtDescriptor *VAR_13;
    const enum AVPixelFormat *VAR_14;
    int VAR_15, VAR_16, VAR_17;
    int VAR_18;

    if (!VAR_11->inputs[0]->in_formats ||
        !VAR_11->inputs[0]->in_formats->nb_formats) {
        return FUNC_0(VAR_1);
    }

    if (!VAR_11->inputs[0]->out_formats)
        if ((VAR_18 = FUNC_2(FUNC_3(VAR_2), &VAR_11->inputs[0]->out_formats)) < 0)
            return VAR_18;
    VAR_12 = VAR_11->inputs[0]->in_formats;
    VAR_13 = FUNC_1(VAR_12->formats[0]);
    VAR_15 = VAR_13->flags & VAR_0;
    VAR_17 = VAR_13->comp[0].depth;
    for (VAR_16 = 1; VAR_16 < VAR_12->nb_formats; VAR_16++) {
        VAR_13 = FUNC_1(VAR_12->formats[VAR_16]);
        if ((VAR_15 != (VAR_13->flags & VAR_0)) ||
            (VAR_17 != VAR_13->comp[0].depth))
            return FUNC_0(VAR_1);
    }

    if (VAR_15 && VAR_17 == 8)
        VAR_14 = VAR_5;
    else if (VAR_15 && VAR_17 == 9)
        VAR_14 = VAR_6;
    else if (VAR_15 && VAR_17 == 10)
        VAR_14 = VAR_3;
    else if (VAR_15 && VAR_17 == 12)
        VAR_14 = VAR_4;
    else if (VAR_17 == 8)
        VAR_14 = VAR_9;
    else if (VAR_17 == 9)
        VAR_14 = VAR_10;
    else if (VAR_17 == 10)
        VAR_14 = VAR_7;
    else if (VAR_17 == 12)
        VAR_14 = VAR_8;
    else
        return FUNC_0(VAR_1);
    if ((VAR_18 = FUNC_2(FUNC_3(VAR_14), &VAR_11->outputs[0]->in_formats)) < 0)
        return VAR_18;

    return 0;
}
