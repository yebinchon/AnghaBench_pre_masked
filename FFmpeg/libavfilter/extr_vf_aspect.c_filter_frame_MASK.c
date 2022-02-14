
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* dst; } ;
struct TYPE_10__ {int sample_aspect_ratio; } ;
struct TYPE_9__ {int sar; } ;
struct TYPE_8__ {int * outputs; TYPE_2__* priv; } ;
typedef TYPE_2__ AspectContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    AspectContext *VAR_2 = VAR_0->dst->priv;

    VAR_1->sample_aspect_ratio = VAR_2->sar;
    return FUNC_0(VAR_0->dst->outputs[0], VAR_1);
}
