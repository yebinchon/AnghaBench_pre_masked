
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tb; } ;
typedef TYPE_1__ ThumbContext ;
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int time_base; TYPE_3__* dst; } ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;



__attribute__((used)) static int FUNC_0(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->dst;
    ThumbContext *VAR_2 = VAR_1->priv;

    VAR_2->tb = VAR_0->time_base;
    return 0;
}
