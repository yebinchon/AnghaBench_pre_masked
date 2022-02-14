
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* dst; } ;
struct TYPE_7__ {int (* fillborders ) (TYPE_2__*,int *) ;} ;
struct TYPE_6__ {int * outputs; TYPE_2__* priv; } ;
typedef TYPE_2__ FillBordersContext ;
typedef int AVFrame ;
typedef TYPE_3__ AVFilterLink ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    FillBordersContext *VAR_2 = VAR_0->dst->priv;

    VAR_2->fillborders(VAR_2, VAR_1);

    return FUNC_0(VAR_0->dst->outputs[0], VAR_1);
}
