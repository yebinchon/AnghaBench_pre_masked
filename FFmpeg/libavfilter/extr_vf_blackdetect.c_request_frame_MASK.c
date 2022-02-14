
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_8__ {TYPE_3__* src; } ;
struct TYPE_7__ {int last_picref_pts; int black_end; scalar_t__ black_started; } ;
typedef TYPE_1__ BlackDetectContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->src;
    BlackDetectContext *VAR_3 = VAR_2->priv;
    AVFilterLink *VAR_4 = VAR_2->inputs[0];
    int VAR_5 = FUNC_1(VAR_4);

    if (VAR_5 == VAR_0 && VAR_3->black_started) {

        VAR_3->black_end = VAR_3->last_picref_pts;
        FUNC_0(VAR_2);
    }
    return VAR_5;
}
