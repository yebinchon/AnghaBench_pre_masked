
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ws_interval {scalar_t__ ts_start; scalar_t__ ts_end; int next; scalar_t__ ddphi; scalar_t__ damp; scalar_t__ amp0; scalar_t__ amp; scalar_t__ dphi0; scalar_t__ dphi; int phi; } ;
struct wavesynth_context {int cur_inter; int nb_inter; int next_inter; scalar_t__ next_ts; int cur_ts; int pink_pos; int pink_state; scalar_t__ pink_need; int dither_state; struct ws_interval* inter; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct ws_interval*,scalar_t__) ;
 int FUNC_2 (struct wavesynth_context*) ;

__attribute__((used)) static void FUNC_3(struct wavesynth_context *VAR_2, int64_t VAR_3)
{
    int *VAR_4, VAR_5;
    struct ws_interval *VAR_6;

    VAR_4 = &VAR_2->cur_inter;
    for (VAR_5 = 0; VAR_5 < VAR_2->nb_inter; VAR_5++) {
        VAR_6 = &VAR_2->inter[VAR_5];
        if (VAR_3 < VAR_6->ts_start)
            break;
        if (VAR_3 >= VAR_6->ts_end)
            continue;
        *VAR_4 = VAR_5;
        VAR_4 = &VAR_6->next;
        VAR_6->phi = FUNC_1(VAR_6, VAR_3);
        VAR_6->dphi = VAR_6->dphi0 + (VAR_3 - VAR_6->ts_start) * VAR_6->ddphi;
        VAR_6->amp = VAR_6->amp0 + (VAR_3 - VAR_6->ts_start) * VAR_6->damp;
    }
    VAR_2->next_inter = VAR_5;
    VAR_2->next_ts = VAR_5 < VAR_2->nb_inter ? VAR_2->inter[VAR_5].ts_start : VAR_0;
    *VAR_4 = -1;
    FUNC_0(&VAR_2->dither_state, (uint32_t)VAR_3 - (uint32_t)VAR_2->cur_ts);
    if (VAR_2->pink_need) {
        int64_t VAR_7 = (VAR_2->cur_ts + VAR_1 - 1) & ~(VAR_1 - 1);
        int64_t VAR_8 = VAR_3 & ~(VAR_1 - 1);
        int VAR_9 = VAR_3 & (VAR_1 - 1);
        FUNC_0(&VAR_2->pink_state, (uint32_t)(VAR_8 - VAR_7) * 2);
        if (VAR_9) {
            FUNC_2(VAR_2);
            VAR_2->pink_pos = VAR_9;
        } else {
            VAR_2->pink_pos = VAR_1;
        }
    }
    VAR_2->cur_ts = VAR_3;
}
