
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* src; } ;
struct TYPE_9__ {scalar_t__ single_pic; scalar_t__ outpicref; } ;
struct TYPE_8__ {TYPE_3__** inputs; TYPE_2__* priv; } ;
typedef TYPE_2__ ShowWavesContext ;
typedef TYPE_3__ AVFilterLink ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_1)
{
    ShowWavesContext *VAR_2 = VAR_1->src->priv;
    AVFilterLink *VAR_3 = VAR_1->src->inputs[0];
    int VAR_4;

    VAR_4 = FUNC_0(VAR_3);
    if (VAR_4 == VAR_0 && VAR_2->outpicref) {
        if (VAR_2->single_pic)
            FUNC_2(VAR_1);
        else
            FUNC_1(VAR_1);
    }

    return VAR_4;
}
