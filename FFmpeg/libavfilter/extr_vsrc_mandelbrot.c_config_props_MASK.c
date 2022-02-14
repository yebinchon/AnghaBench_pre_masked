
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int time_base; int h; int w; TYPE_3__* src; } ;
struct TYPE_6__ {int frame_rate; int h; int w; } ;
typedef TYPE_1__ MBContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int ,TYPE_3__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->src;
    MBContext *VAR_3 = VAR_2->priv;

    if (FUNC_1(VAR_3->w, VAR_3->h, 0, VAR_2) < 0)
        return FUNC_0(VAR_0);

    VAR_1->w = VAR_3->w;
    VAR_1->h = VAR_3->h;
    VAR_1->time_base = FUNC_2(VAR_3->frame_rate);

    return 0;
}
