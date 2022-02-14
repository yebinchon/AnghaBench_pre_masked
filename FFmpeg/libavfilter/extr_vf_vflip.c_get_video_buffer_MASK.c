
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* dst; } ;
struct TYPE_10__ {int* linesize; scalar_t__* data; } ;
struct TYPE_9__ {int vsub; } ;
struct TYPE_8__ {int * outputs; TYPE_2__* priv; } ;
typedef TYPE_2__ FlipContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (int,int) ;
 TYPE_3__* FUNC_1 (int ,int,int) ;

__attribute__((used)) static AVFrame *FUNC_2(AVFilterLink *VAR_0, int VAR_1, int VAR_2)
{
    FlipContext *VAR_3 = VAR_0->dst->priv;
    AVFrame *VAR_4;
    int VAR_5;

    VAR_4 = FUNC_1(VAR_0->dst->outputs[0], VAR_1, VAR_2);
    if (!VAR_4)
        return ((void*)0);

    for (VAR_5 = 0; VAR_5 < 4; VAR_5 ++) {
        int VAR_6 = VAR_5 == 1 || VAR_5 == 2 ? VAR_3->vsub : 0;
        int VAR_7 = FUNC_0(VAR_2, VAR_6);

        if (VAR_4->data[VAR_5]) {
            VAR_4->data[VAR_5] += (VAR_7 - 1) * VAR_4->linesize[VAR_5];
            VAR_4->linesize[VAR_5] = -VAR_4->linesize[VAR_5];
        }
    }

    return VAR_4;
}
