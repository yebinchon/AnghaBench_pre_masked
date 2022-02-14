
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; TYPE_2__** inputs; } ;
struct TYPE_7__ {int channels; TYPE_3__* src; } ;
struct TYPE_6__ {scalar_t__* buf_idy; scalar_t__ buf_idx; int * outpicref; } ;
typedef TYPE_1__ ShowWavesContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) inline static int FUNC_1(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->src;
    AVFilterLink *VAR_2 = VAR_1->inputs[0];
    ShowWavesContext *VAR_3 = VAR_0->src->priv;
    int VAR_4 = VAR_2->channels;
    int VAR_5, VAR_6;

    VAR_5 = FUNC_0(VAR_0, VAR_3->outpicref);
    VAR_3->outpicref = ((void*)0);
    VAR_3->buf_idx = 0;
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
        VAR_3->buf_idy[VAR_6] = 0;
    return VAR_5;
}
