
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int finished; int y_expr_str; int y_expr; int x_expr_str; int x_expr; int zoom_expr_str; int zoom_expr; int desc; int framerate; int h; int w; } ;
typedef TYPE_1__ ZPContext ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int format; int frame_rate; int time_base; int h; int w; TYPE_3__* src; } ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int *,int ,int ,int *,int *,int *,int *,int ,TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->src;
    ZPContext *VAR_3 = VAR_2->priv;
    int VAR_4;

    VAR_1->w = VAR_3->w;
    VAR_1->h = VAR_3->h;
    VAR_1->time_base = FUNC_1(VAR_3->framerate);
    VAR_1->frame_rate = VAR_3->framerate;
    VAR_3->desc = FUNC_2(VAR_1->format);
    VAR_3->finished = 1;

    VAR_4 = FUNC_0(&VAR_3->zoom_expr, VAR_3->zoom_expr_str, VAR_0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, VAR_2);
    if (VAR_4 < 0)
        return VAR_4;

    VAR_4 = FUNC_0(&VAR_3->x_expr, VAR_3->x_expr_str, VAR_0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, VAR_2);
    if (VAR_4 < 0)
        return VAR_4;

    VAR_4 = FUNC_0(&VAR_3->y_expr, VAR_3->y_expr_str, VAR_0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, VAR_2);
    if (VAR_4 < 0)
        return VAR_4;

    return 0;
}
