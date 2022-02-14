
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int is_disabled; int * inputs; TYPE_1__* priv; } ;
struct TYPE_7__ {TYPE_3__* src; } ;
struct TYPE_6__ {scalar_t__ delay_count; } ;
typedef TYPE_1__ CompandContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->src;
    CompandContext *VAR_3 = VAR_2->priv;
    int VAR_4 = 0;

    VAR_4 = FUNC_1(VAR_2->inputs[0]);

    if (VAR_4 == VAR_0 && !VAR_2->is_disabled && VAR_3->delay_count)
        VAR_4 = FUNC_0(VAR_1);

    return VAR_4;
}
