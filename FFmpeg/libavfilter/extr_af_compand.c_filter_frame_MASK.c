
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {TYPE_3__* dst; } ;
struct TYPE_6__ {int (* compand ) (TYPE_3__*,int *) ;} ;
typedef TYPE_1__ CompandContext ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_0->dst;
    CompandContext *VAR_3 = VAR_2->priv;

    return VAR_3->compand(VAR_2, VAR_1);
}
