
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_17__ {TYPE_5__** outputs; TYPE_4__** inputs; TYPE_6__* priv; } ;
struct TYPE_16__ {int flags; scalar_t__ nb_components; TYPE_2__* comp; } ;
struct TYPE_15__ {int out_fmt; int nb_inputs; TYPE_3__* outdesc; } ;
struct TYPE_14__ {int in_formats; } ;
struct TYPE_13__ {int out_formats; } ;
struct TYPE_12__ {int flags; TYPE_1__* comp; } ;
struct TYPE_11__ {int depth; } ;
struct TYPE_10__ {int depth; } ;
typedef TYPE_6__ MergePlanesContext ;
typedef TYPE_7__ AVPixFmtDescriptor ;
typedef int AVFilterFormats ;
typedef TYPE_8__ AVFilterContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int **,int) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_1)
{
    MergePlanesContext *VAR_2 = VAR_1->priv;
    AVFilterFormats *VAR_3 = ((void*)0);
    int VAR_4, VAR_5;

    VAR_2->outdesc = FUNC_1(VAR_2->out_fmt);
    for (VAR_4 = 0; FUNC_1(VAR_4); VAR_4++) {
        const AVPixFmtDescriptor *VAR_6 = FUNC_1(VAR_4);
        if (VAR_6->comp[0].depth == VAR_2->outdesc->comp[0].depth &&
            (VAR_6->comp[0].depth <= 8 || (VAR_6->flags & VAR_0) == (VAR_2->outdesc->flags & VAR_0)) &&
            FUNC_0(VAR_4) == VAR_6->nb_components &&
            (VAR_5 = FUNC_2(&VAR_3, VAR_4)) < 0)
                return VAR_5;
    }

    for (VAR_4 = 0; VAR_4 < VAR_2->nb_inputs; VAR_4++)
        if ((VAR_5 = FUNC_3(VAR_3, &VAR_1->inputs[VAR_4]->out_formats)) < 0)
            return VAR_5;

    VAR_3 = ((void*)0);
    if ((VAR_5 = FUNC_2(&VAR_3, VAR_2->out_fmt)) < 0 ||
        (VAR_5 = FUNC_3(VAR_3, &VAR_1->outputs[0]->in_formats)) < 0)
        return VAR_5;

    return 0;
}
