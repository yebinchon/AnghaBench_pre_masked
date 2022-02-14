
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_13__ ;


struct TYPE_24__ {int step; int nb_components; int nb_planes; TYPE_5__* out; TYPE_5__* yin; TYPE_5__* xin; TYPE_5__* in; } ;
typedef TYPE_2__ ThreadData ;
struct TYPE_29__ {TYPE_1__* internal; scalar_t__ is_disabled; TYPE_6__** outputs; } ;
struct TYPE_28__ {int time_base; int h; int w; } ;
struct TYPE_27__ {int pts; } ;
struct TYPE_26__ {TYPE_3__* opaque; TYPE_7__* parent; } ;
struct TYPE_22__ {int time_base; int pts; } ;
struct TYPE_25__ {TYPE_13__ fs; int remap_slice; int step; int nb_components; int nb_planes; } ;
struct TYPE_23__ {int (* execute ) (TYPE_7__*,int ,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_3__ RemapContext ;
typedef TYPE_4__ FFFrameSync ;
typedef TYPE_5__ AVFrame ;
typedef TYPE_6__ AVFilterLink ;
typedef TYPE_7__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 TYPE_5__* FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_13__*,int,TYPE_5__**,int ) ;
 TYPE_5__* FUNC_8 (TYPE_6__*,int ,int ) ;
 int FUNC_9 (TYPE_7__*,int ,TYPE_2__*,int *,int ) ;

__attribute__((used)) static int FUNC_10(FFFrameSync *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->parent;
    RemapContext *VAR_3 = VAR_1->opaque;
    AVFilterLink *VAR_4 = VAR_2->outputs[0];
    AVFrame *VAR_5, *VAR_6, *VAR_7, *VAR_8;
    int VAR_9;

    if ((VAR_9 = FUNC_7(&VAR_3->fs, 0, &VAR_6, 0)) < 0 ||
        (VAR_9 = FUNC_7(&VAR_3->fs, 1, &VAR_7, 0)) < 0 ||
        (VAR_9 = FUNC_7(&VAR_3->fs, 2, &VAR_8, 0)) < 0)
        return VAR_9;

    if (VAR_2->is_disabled) {
        VAR_5 = FUNC_2(VAR_6);
        if (!VAR_5)
            return FUNC_0(VAR_0);
    } else {
        ThreadData VAR_10;

        VAR_5 = FUNC_8(VAR_4, VAR_4->w, VAR_4->h);
        if (!VAR_5)
            return FUNC_0(VAR_0);
        FUNC_3(VAR_5, VAR_6);

        VAR_10.in = VAR_6;
        VAR_10.xin = VAR_7;
        VAR_10.yin = VAR_8;
        VAR_10.out = VAR_5;
        VAR_10.nb_planes = VAR_3->nb_planes;
        VAR_10.nb_components = VAR_3->nb_components;
        VAR_10.step = VAR_3->step;
        VAR_2->internal->execute(VAR_2, VAR_3->remap_slice, &VAR_10, ((void*)0), FUNC_1(VAR_4->h, FUNC_6(VAR_2)));
    }
    VAR_5->pts = FUNC_4(VAR_3->fs.pts, VAR_3->fs.time_base, VAR_4->time_base);

    return FUNC_5(VAR_4, VAR_5);
}
