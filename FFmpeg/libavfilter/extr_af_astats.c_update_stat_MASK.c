
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {double mult; scalar_t__ tc_samples; } ;
struct TYPE_5__ {double min; double nmin; int min_run; int min_count; double last; scalar_t__ min_non_zero; double max; double nmax; int max_run; int max_count; int zero_runs; double last_non_zero; double sigma_x; double sigma_x2; double avg_sigma_x2; double diff1_sum_x2; scalar_t__ nb_samples; void* min_sigma_x2; void* max_sigma_x2; int imask; int mask; int diff1_sum; void* max_diff; void* min_diff; scalar_t__ max_runs; scalar_t__ min_runs; } ;
typedef TYPE_1__ ChannelStats ;
typedef TYPE_2__ AudioStatsContext ;


 scalar_t__ FUNC_0 (double) ;
 void* FUNC_1 (void*,double) ;
 void* FUNC_2 (void*,double) ;
 scalar_t__ FUNC_3 (double) ;
 double FUNC_4 (double) ;
 int FUNC_5 (double) ;

__attribute__((used)) static inline void FUNC_6(AudioStatsContext *VAR_0, ChannelStats *VAR_1, double VAR_2, double VAR_3, int64_t VAR_4)
{
    if (VAR_2 < VAR_1->min) {
        VAR_1->min = VAR_2;
        VAR_1->nmin = VAR_3;
        VAR_1->min_run = 1;
        VAR_1->min_runs = 0;
        VAR_1->min_count = 1;
    } else if (VAR_2 == VAR_1->min) {
        VAR_1->min_count++;
        VAR_1->min_run = VAR_2 == VAR_1->last ? VAR_1->min_run + 1 : 1;
    } else if (VAR_1->last == VAR_1->min) {
        VAR_1->min_runs += VAR_1->min_run * VAR_1->min_run;
    }

    if (VAR_2 != 0 && FUNC_0(VAR_2) < VAR_1->min_non_zero)
        VAR_1->min_non_zero = FUNC_0(VAR_2);

    if (VAR_2 > VAR_1->max) {
        VAR_1->max = VAR_2;
        VAR_1->nmax = VAR_3;
        VAR_1->max_run = 1;
        VAR_1->max_runs = 0;
        VAR_1->max_count = 1;
    } else if (VAR_2 == VAR_1->max) {
        VAR_1->max_count++;
        VAR_1->max_run = VAR_2 == VAR_1->last ? VAR_1->max_run + 1 : 1;
    } else if (VAR_1->last == VAR_1->max) {
        VAR_1->max_runs += VAR_1->max_run * VAR_1->max_run;
    }

    if (VAR_2 != 0) {
        VAR_1->zero_runs += FUNC_3(VAR_2) != FUNC_3(VAR_1->last_non_zero);
        VAR_1->last_non_zero = VAR_2;
    }

    VAR_1->sigma_x += VAR_3;
    VAR_1->sigma_x2 += VAR_3 * VAR_3;
    VAR_1->avg_sigma_x2 = VAR_1->avg_sigma_x2 * VAR_0->mult + (1.0 - VAR_0->mult) * VAR_3 * VAR_3;
    if (!FUNC_5(VAR_1->last)) {
        VAR_1->min_diff = FUNC_2(VAR_1->min_diff, FUNC_4(VAR_2 - VAR_1->last));
        VAR_1->max_diff = FUNC_1(VAR_1->max_diff, FUNC_4(VAR_2 - VAR_1->last));
        VAR_1->diff1_sum += FUNC_4(VAR_2 - VAR_1->last);
        VAR_1->diff1_sum_x2 += (VAR_2 - VAR_1->last) * (VAR_2 - VAR_1->last);
    }
    VAR_1->last = VAR_2;
    VAR_1->mask |= VAR_4;
    VAR_1->imask &= VAR_4;

    if (VAR_1->nb_samples >= VAR_0->tc_samples) {
        VAR_1->max_sigma_x2 = FUNC_1(VAR_1->max_sigma_x2, VAR_1->avg_sigma_x2);
        VAR_1->min_sigma_x2 = FUNC_2(VAR_1->min_sigma_x2, VAR_1->avg_sigma_x2);
    }
    VAR_1->nb_samples++;
}
