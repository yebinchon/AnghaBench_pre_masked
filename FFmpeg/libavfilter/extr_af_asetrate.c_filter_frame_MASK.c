
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ rescale_pts; } ;
struct TYPE_11__ {TYPE_2__** outputs; TYPE_4__* priv; } ;
struct TYPE_10__ {int sample_rate; TYPE_3__* dst; } ;
struct TYPE_9__ {int pts; int sample_rate; } ;
typedef TYPE_1__ AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;
typedef TYPE_4__ ASetRateContext ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_0->dst;
    ASetRateContext *VAR_3 = VAR_2->priv;
    AVFilterLink *VAR_4 = VAR_2->outputs[0];

    VAR_1->sample_rate = VAR_4->sample_rate;
    if (VAR_3->rescale_pts)
        VAR_1->pts = FUNC_0(VAR_1->pts, VAR_0->sample_rate,
                                           VAR_4->sample_rate);
    return FUNC_1(VAR_4, VAR_1);
}
