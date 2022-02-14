
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int time_base; int h; int w; TYPE_1__* src; } ;
struct TYPE_6__ {int frame_rate; int h; int w; } ;
struct TYPE_5__ {TYPE_2__* priv; } ;
typedef TYPE_2__ LifeContext ;
typedef TYPE_3__ AVFilterLink ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_0)
{
    LifeContext *VAR_1 = VAR_0->src->priv;

    VAR_0->w = VAR_1->w;
    VAR_0->h = VAR_1->h;
    VAR_0->time_base = FUNC_0(VAR_1->frame_rate);

    return 0;
}
