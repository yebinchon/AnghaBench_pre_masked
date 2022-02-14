
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int frame_rate; int format; TYPE_3__* dst; } ;
struct TYPE_5__ {scalar_t__ stop_duration; void* pad_stop; scalar_t__ start_duration; void* pad_start; int rgba_color; int color; int draw; } ;
typedef TYPE_1__ TPadContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->dst;
    TPadContext *VAR_3 = VAR_2->priv;

    FUNC_3(&VAR_3->draw, VAR_1->format, 0);
    FUNC_2(&VAR_3->draw, &VAR_3->color, VAR_3->rgba_color);

    if (VAR_3->start_duration)
        VAR_3->pad_start = FUNC_1(VAR_3->start_duration, VAR_1->frame_rate, FUNC_0(VAR_0));
    if (VAR_3->stop_duration)
        VAR_3->pad_stop = FUNC_1(VAR_3->stop_duration, VAR_1->frame_rate, FUNC_0(VAR_0));

    return 0;
}
