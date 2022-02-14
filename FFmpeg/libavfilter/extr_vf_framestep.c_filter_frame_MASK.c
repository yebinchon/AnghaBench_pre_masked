
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int frame_count_out; TYPE_1__* dst; } ;
struct TYPE_6__ {int frame_step; } ;
struct TYPE_5__ {int * outputs; TYPE_2__* priv; } ;
typedef TYPE_2__ FrameStepContext ;
typedef int AVFrame ;
typedef TYPE_3__ AVFilterLink ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0, AVFrame *VAR_1)
{
    FrameStepContext *VAR_2 = VAR_0->dst->priv;

    if (!(VAR_0->frame_count_out % VAR_2->frame_step)) {
        return FUNC_1(VAR_0->dst->outputs[0], VAR_1);
    } else {
        FUNC_0(&VAR_1);
        return 0;
    }
}
