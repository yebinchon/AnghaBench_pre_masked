
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* dst; int h; } ;
struct TYPE_10__ {int* linesize; scalar_t__* data; } ;
struct TYPE_9__ {int vsub; } ;
struct TYPE_8__ {int * outputs; TYPE_2__* priv; } ;
typedef TYPE_2__ FlipContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    FlipContext *VAR_2 = VAR_0->dst->priv;
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 4; VAR_3 ++) {
        int VAR_4 = VAR_3 == 1 || VAR_3 == 2 ? VAR_2->vsub : 0;
        int VAR_5 = FUNC_0(VAR_0->h, VAR_4);

        if (VAR_1->data[VAR_3]) {
            VAR_1->data[VAR_3] += (VAR_5 - 1) * VAR_1->linesize[VAR_3];
            VAR_1->linesize[VAR_3] = -VAR_1->linesize[VAR_3];
        }
    }

    return FUNC_1(VAR_0->dst->outputs[0], VAR_1);
}
