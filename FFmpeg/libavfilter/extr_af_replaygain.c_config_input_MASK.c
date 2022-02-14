
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int sample_rate; int BButter; int AButter; int BYule; int AYule; } ;
struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {int sample_rate; int partial_buf_size; int min_samples; int max_samples; TYPE_3__* dst; } ;
struct TYPE_7__ {int yule_hist_i; int butter_hist_i; int butter_coeff_b; int butter_coeff_a; int yule_coeff_b; int yule_coeff_a; } ;
typedef TYPE_1__ ReplayGainContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int) ;
 TYPE_4__* VAR_0 ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->dst;
    ReplayGainContext *VAR_3 = VAR_2->priv;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
        if (VAR_0[VAR_4].sample_rate == VAR_1->sample_rate)
            break;
    }
    FUNC_1(VAR_4 < FUNC_0(VAR_0));

    VAR_3->yule_coeff_a = VAR_0[VAR_4].AYule;
    VAR_3->yule_coeff_b = VAR_0[VAR_4].BYule;
    VAR_3->butter_coeff_a = VAR_0[VAR_4].AButter;
    VAR_3->butter_coeff_b = VAR_0[VAR_4].BButter;

    VAR_3->yule_hist_i = 20;
    VAR_3->butter_hist_i = 4;
    VAR_1->partial_buf_size =
    VAR_1->min_samples =
    VAR_1->max_samples = VAR_1->sample_rate / 20;

    return 0;
}
