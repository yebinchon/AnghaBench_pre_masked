
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__** inputs; } ;
struct TYPE_11__ {TYPE_2__* in; } ;
struct TYPE_10__ {int sync; void* after; int before; int time_base; } ;
struct TYPE_9__ {int time_base; } ;
typedef TYPE_3__ FFFrameSync ;
typedef TYPE_4__ AVFilterContext ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*,int) ;

int FUNC_1(FFFrameSync *VAR_3, AVFilterContext *VAR_4)
{
    int VAR_5;

    VAR_5 = FUNC_0(VAR_3, VAR_4, 2);
    if (VAR_5 < 0)
        return VAR_5;
    VAR_3->in[0].time_base = VAR_4->inputs[0]->time_base;
    VAR_3->in[1].time_base = VAR_4->inputs[1]->time_base;
    VAR_3->in[0].sync = 2;
    VAR_3->in[0].before = VAR_2;
    VAR_3->in[0].after = VAR_0;
    VAR_3->in[1].sync = 1;
    VAR_3->in[1].before = VAR_1;
    VAR_3->in[1].after = VAR_0;
    return 0;
}
