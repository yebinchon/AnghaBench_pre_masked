
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int min_samples; int max_samples; int partial_buf_size; int sample_rate; TYPE_3__* dst; } ;
struct TYPE_5__ {int peak_mode; scalar_t__ metadata; } ;
typedef TYPE_1__ EBUR128Context ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->dst;
    EBUR128Context *VAR_3 = VAR_2->priv;







    if (VAR_3->metadata || (VAR_3->peak_mode & VAR_0))
        VAR_1->min_samples =
        VAR_1->max_samples =
        VAR_1->partial_buf_size = VAR_1->sample_rate / 10;
    return 0;
}
