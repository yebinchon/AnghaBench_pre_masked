
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int src; int dst; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {int y; int x; } ;
typedef TYPE_2__ OverlayContext ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (TYPE_3__*,int ,int ,int ,int ,int,int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    OverlayContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    FUNC_0(VAR_0, VAR_5->dst, VAR_5->src, 0, 0, 1, VAR_4->x, VAR_4->y, 1, VAR_2, VAR_3);
    return 0;
}
