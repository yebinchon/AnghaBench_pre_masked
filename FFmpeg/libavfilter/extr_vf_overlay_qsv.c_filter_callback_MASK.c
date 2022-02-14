
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int time_base; TYPE_1__* src; } ;
struct TYPE_13__ {int pts; } ;
struct TYPE_11__ {int time_base; int pts; } ;
struct TYPE_12__ {TYPE_2__ fs; } ;
struct TYPE_10__ {TYPE_3__* priv; } ;
typedef TYPE_3__ QSVOverlayContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterLink ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    QSVOverlayContext *VAR_2 = VAR_0->src->priv;
    VAR_1->pts = FUNC_0(VAR_2->fs.pts,
                              VAR_2->fs.time_base, VAR_0->time_base);
    return FUNC_1(VAR_0, VAR_1);
}
