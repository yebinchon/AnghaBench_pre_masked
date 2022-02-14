
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ws_interval {int next; scalar_t__ ts_start; scalar_t__ ts_end; int amp0; int amp; int dphi0; int dphi; int phi0; int phi; } ;
struct wavesynth_context {int cur_inter; int next_inter; int nb_inter; scalar_t__ next_ts; struct ws_interval* inter; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct wavesynth_context *VAR_1, int64_t VAR_2)
{
    int *VAR_3, VAR_4;
    struct ws_interval *VAR_5;

    VAR_3 = &VAR_1->cur_inter;
    for (VAR_4 = VAR_1->cur_inter; VAR_4 >= 0; VAR_4 = VAR_1->inter[VAR_4].next)
        VAR_3 = &VAR_1->inter[VAR_4].next;
    for (VAR_4 = VAR_1->next_inter; VAR_4 < VAR_1->nb_inter; VAR_4++) {
        VAR_5 = &VAR_1->inter[VAR_4];
        if (VAR_2 < VAR_5->ts_start)
            break;
        if (VAR_2 >= VAR_5->ts_end)
            continue;
        *VAR_3 = VAR_4;
        VAR_3 = &VAR_5->next;
        VAR_5->phi = VAR_5->phi0;
        VAR_5->dphi = VAR_5->dphi0;
        VAR_5->amp = VAR_5->amp0;
    }
    VAR_1->next_inter = VAR_4;
    VAR_1->next_ts = VAR_4 < VAR_1->nb_inter ? VAR_1->inter[VAR_4].ts_start : VAR_0;
    *VAR_3 = -1;
}
