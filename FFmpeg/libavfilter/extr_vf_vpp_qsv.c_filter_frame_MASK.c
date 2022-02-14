
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ qsv; } ;
typedef TYPE_1__ VPPContext ;
struct TYPE_15__ {TYPE_3__** outputs; TYPE_1__* priv; } ;
struct TYPE_14__ {int time_base; TYPE_4__* dst; } ;
struct TYPE_13__ {int pts; } ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (scalar_t__,TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_1, AVFrame *VAR_2)
{
    int VAR_3 = 0;
    AVFilterContext *VAR_4 = VAR_1->dst;
    VPPContext *VAR_5 = VAR_1->dst->priv;
    AVFilterLink *VAR_6 = VAR_4->outputs[0];

    if (VAR_5->qsv) {
        VAR_3 = FUNC_3(VAR_5->qsv, VAR_1, VAR_2);
        FUNC_0(&VAR_2);
    } else {
        if (VAR_2->pts != VAR_0)
            VAR_2->pts = FUNC_1(VAR_2->pts, VAR_1->time_base, VAR_6->time_base);
        VAR_3 = FUNC_2(VAR_6, VAR_2);
    }

    return VAR_3;
}
