
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_13__ {int x; int y; } ;
typedef TYPE_4__ VectorscopeContext ;
struct TYPE_16__ {TYPE_3__** outputs; TYPE_1__** inputs; TYPE_4__* priv; } ;
struct TYPE_15__ {int nb_formats; int * formats; } ;
struct TYPE_14__ {int flags; TYPE_2__* comp; } ;
struct TYPE_12__ {int in_formats; } ;
struct TYPE_11__ {int depth; } ;
struct TYPE_10__ {TYPE_6__* in_formats; int out_formats; } ;
typedef TYPE_5__ AVPixFmtDescriptor ;
typedef TYPE_6__ AVFilterFormats ;
typedef TYPE_7__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int const*) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;
 int* VAR_11 ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_12)
{
    VectorscopeContext *VAR_13 = VAR_12->priv;
    const enum AVPixelFormat *VAR_14;
    const AVPixFmtDescriptor *VAR_15;
    AVFilterFormats *VAR_16;
    int VAR_17, VAR_18, VAR_19, VAR_20;

    if (!VAR_12->inputs[0]->in_formats ||
        !VAR_12->inputs[0]->in_formats->nb_formats) {
        return FUNC_0(VAR_1);
    }

    if (!VAR_12->inputs[0]->out_formats) {
        const enum AVPixelFormat *VAR_21;

        if ((VAR_13->x == 1 && VAR_13->y == 2) || (VAR_13->x == 2 && VAR_13->y == 1))
            VAR_21 = VAR_3;
        else
            VAR_21 = VAR_2;
        if ((VAR_20 = FUNC_2(FUNC_3(VAR_21), &VAR_12->inputs[0]->out_formats)) < 0)
            return VAR_20;
    }

    VAR_16 = VAR_12->inputs[0]->in_formats;
    VAR_15 = FUNC_1(VAR_16->formats[0]);
    VAR_18 = VAR_15->flags & VAR_0;
    VAR_17 = VAR_15->comp[0].depth;
    for (VAR_19 = 1; VAR_19 < VAR_16->nb_formats; VAR_19++) {
        VAR_15 = FUNC_1(VAR_16->formats[VAR_19]);
        if (VAR_18 != (VAR_15->flags & VAR_0) ||
            VAR_17 != VAR_15->comp[0].depth)
            return FUNC_0(VAR_1);
    }

    if (VAR_18 && VAR_17 == 8)
        VAR_14 = VAR_6;
    else if (VAR_18 && VAR_17 == 9)
        VAR_14 = VAR_7;
    else if (VAR_18 && VAR_17 == 10)
        VAR_14 = VAR_4;
    else if (VAR_18 && VAR_17 == 12)
        VAR_14 = VAR_5;
    else if (VAR_17 == 8)
        VAR_14 = VAR_10;
    else if (VAR_17 == 9)
        VAR_14 = VAR_11;
    else if (VAR_17 == 10)
        VAR_14 = VAR_8;
    else if (VAR_17 == 12)
        VAR_14 = VAR_9;
    else
        return FUNC_0(VAR_1);
    if ((VAR_20 = FUNC_2(FUNC_3(VAR_14), &VAR_12->outputs[0]->in_formats)) < 0)
        return VAR_20;

    return 0;
}
