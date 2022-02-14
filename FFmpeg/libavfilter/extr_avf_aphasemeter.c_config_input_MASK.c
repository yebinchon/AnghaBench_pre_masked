
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {int partial_buf_size; int min_samples; int max_samples; int sample_rate; TYPE_4__* dst; } ;
struct TYPE_6__ {int num; int den; } ;
struct TYPE_7__ {TYPE_1__ frame_rate; scalar_t__ do_video; } ;
typedef TYPE_2__ AudioPhaseMeterContext ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->dst;
    AudioPhaseMeterContext *VAR_2 = VAR_1->priv;
    int VAR_3;

    if (VAR_2->do_video) {
        VAR_3 = FUNC_0(1, FUNC_1(VAR_0->sample_rate, VAR_2->frame_rate.den, VAR_2->frame_rate.num));
        VAR_0->partial_buf_size =
        VAR_0->min_samples =
        VAR_0->max_samples = VAR_3;
    }

    return 0;
}
