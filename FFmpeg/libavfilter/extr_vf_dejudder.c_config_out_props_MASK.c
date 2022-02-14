
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_7__ {void* frame_rate; void* time_base; TYPE_3__* src; } ;
struct TYPE_6__ {int cycle; } ;
typedef TYPE_1__ DejudderContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int) ;
 int FUNC_1 (int,int) ;
 void* FUNC_2 (void*,int ) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->src;
    DejudderContext *VAR_3 = VAR_2->priv;
    AVFilterLink *VAR_4 = VAR_1->src->inputs[0];

    VAR_1->time_base = FUNC_2(VAR_4->time_base, FUNC_1(1, 2 * VAR_3->cycle));
    VAR_1->frame_rate = FUNC_2(VAR_4->frame_rate, FUNC_1(2 * VAR_3->cycle, 1));

    FUNC_0(VAR_2, VAR_0, "cycle:%d\n", VAR_3->cycle);

    return 0;
}
