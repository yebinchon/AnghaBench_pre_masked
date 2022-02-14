
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* priv; } ;
struct TYPE_12__ {scalar_t__ h; scalar_t__ w; int format; TYPE_5__* dst; } ;
struct TYPE_11__ {TYPE_1__* comp; } ;
struct TYPE_10__ {double limit; scalar_t__ y2; scalar_t__ x2; scalar_t__ y1; scalar_t__ x1; int max_pixsteps; } ;
struct TYPE_9__ {int depth; } ;
typedef TYPE_2__ CropDetectContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ,int *,TYPE_3__ const*) ;
 TYPE_3__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->dst;
    CropDetectContext *VAR_2 = VAR_1->priv;
    const AVPixFmtDescriptor *VAR_3 = FUNC_1(VAR_0->format);

    FUNC_0(VAR_2->max_pixsteps, ((void*)0), VAR_3);

    if (VAR_2->limit < 1.0)
        VAR_2->limit *= (1 << VAR_3->comp[0].depth) - 1;

    VAR_2->x1 = VAR_0->w - 1;
    VAR_2->y1 = VAR_0->h - 1;
    VAR_2->x2 = 0;
    VAR_2->y2 = 0;

    return 0;
}
