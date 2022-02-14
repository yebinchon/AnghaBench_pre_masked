
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_14__ ;


struct TYPE_27__ {scalar_t__ is_disabled; TYPE_4__** outputs; } ;
struct TYPE_26__ {int time_base; int h; int w; } ;
struct TYPE_25__ {int pts; } ;
struct TYPE_22__ {int time_base; int pts; } ;
struct TYPE_24__ {TYPE_14__ fs; int (* displace ) (TYPE_2__*,TYPE_3__*,TYPE_3__*,TYPE_3__*,TYPE_3__*) ;} ;
struct TYPE_23__ {TYPE_2__* opaque; TYPE_5__* parent; } ;
typedef TYPE_1__ FFFrameSync ;
typedef TYPE_2__ DisplaceContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_14__*,int,TYPE_3__**,int ) ;
 TYPE_3__* FUNC_6 (TYPE_4__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*,TYPE_3__*,TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_8(FFFrameSync *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->parent;
    DisplaceContext *VAR_3 = VAR_1->opaque;
    AVFilterLink *VAR_4 = VAR_2->outputs[0];
    AVFrame *VAR_5, *VAR_6, *VAR_7, *VAR_8;
    int VAR_9;

    if ((VAR_9 = FUNC_5(&VAR_3->fs, 0, &VAR_6, 0)) < 0 ||
        (VAR_9 = FUNC_5(&VAR_3->fs, 1, &VAR_7, 0)) < 0 ||
        (VAR_9 = FUNC_5(&VAR_3->fs, 2, &VAR_8, 0)) < 0)
        return VAR_9;

    if (VAR_2->is_disabled) {
        VAR_5 = FUNC_1(VAR_6);
        if (!VAR_5)
            return FUNC_0(VAR_0);
    } else {
        VAR_5 = FUNC_6(VAR_4, VAR_4->w, VAR_4->h);
        if (!VAR_5)
            return FUNC_0(VAR_0);
        FUNC_2(VAR_5, VAR_6);

        VAR_3->displace(VAR_3, VAR_6, VAR_7, VAR_8, VAR_5);
    }
    VAR_5->pts = FUNC_3(VAR_3->fs.pts, VAR_3->fs.time_base, VAR_4->time_base);

    return FUNC_4(VAR_4, VAR_5);
}
