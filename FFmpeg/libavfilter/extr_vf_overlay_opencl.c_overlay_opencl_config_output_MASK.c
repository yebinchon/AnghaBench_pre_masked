
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {TYPE_3__* src; } ;
struct TYPE_7__ {int fs; } ;
typedef TYPE_1__ OverlayOpenCLContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->src;
    OverlayOpenCLContext *VAR_2 = VAR_1->priv;
    int VAR_3;

    VAR_3 = FUNC_2(VAR_0);
    if (VAR_3 < 0)
        return VAR_3;

    VAR_3 = FUNC_1(&VAR_2->fs, VAR_1);
    if (VAR_3 < 0)
        return VAR_3;

    return FUNC_0(&VAR_2->fs);
}
