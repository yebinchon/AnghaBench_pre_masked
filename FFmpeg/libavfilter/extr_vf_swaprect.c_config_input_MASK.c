
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int w; int format; TYPE_3__* dst; } ;
struct TYPE_5__ {int temp; int * pixsteps; int nb_planes; int desc; int y2; int x2; int y1; int x1; int h; int w; } ;
typedef TYPE_1__ SwapRectContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->dst;
    SwapRectContext *VAR_4 = VAR_3->priv;

    if (!VAR_4->w || !VAR_4->h ||
        !VAR_4->x1 || !VAR_4->y1 ||
        !VAR_4->x2 || !VAR_4->y2)
        return FUNC_0(VAR_0);

    VAR_4->desc = FUNC_4(VAR_2->format);
    FUNC_1(VAR_4->pixsteps, ((void*)0), VAR_4->desc);
    VAR_4->nb_planes = FUNC_3(VAR_2->format);

    VAR_4->temp = FUNC_2(VAR_2->w, VAR_4->pixsteps[0]);
    if (!VAR_4->temp)
        return FUNC_0(VAR_1);

    return 0;
}
