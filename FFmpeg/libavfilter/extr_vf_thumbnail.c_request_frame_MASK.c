
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ n; } ;
typedef TYPE_1__ ThumbContext ;
struct TYPE_9__ {int * inputs; TYPE_1__* priv; } ;
struct TYPE_8__ {TYPE_3__* src; } ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->src;
    ThumbContext *VAR_3 = VAR_2->priv;
    int VAR_4 = FUNC_1(VAR_2->inputs[0]);

    if (VAR_4 == VAR_0 && VAR_3->n) {
        VAR_4 = FUNC_0(VAR_1, FUNC_2(VAR_2));
        if (VAR_4 < 0)
            return VAR_4;
        VAR_4 = VAR_0;
    }
    if (VAR_4 < 0)
        return VAR_4;
    return 0;
}
