
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ws_interval {int next; scalar_t__ ts_end; int amp; int type; size_t phi; size_t dphi; size_t ddphi; int channels; scalar_t__ damp; } ;
struct wavesynth_context {int cur_inter; scalar_t__ pink_pos; int* pink_pool; unsigned int* sin; int dither_state; struct ws_interval* inter; } ;
typedef scalar_t__ int64_t ;
typedef unsigned int int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct wavesynth_context*) ;

__attribute__((used)) static void FUNC_2(struct wavesynth_context *VAR_2, int64_t VAR_3,
                                   int32_t *VAR_4)
{
    int32_t VAR_5, VAR_6, *VAR_7;
    struct ws_interval *VAR_8;
    int VAR_9, *VAR_10, VAR_11;
    uint32_t VAR_12, VAR_13 = 0;

    VAR_9 = VAR_2->cur_inter;
    VAR_10 = &VAR_2->cur_inter;
    if (VAR_2->pink_pos == VAR_0)
        FUNC_1(VAR_2);
    VAR_11 = VAR_2->pink_pool[VAR_2->pink_pos++] >> 16;
    while (VAR_9 >= 0) {
        VAR_8 = &VAR_2->inter[VAR_9];
        VAR_9 = VAR_8->next;
        if (VAR_3 >= VAR_8->ts_end) {
            *VAR_10 = VAR_9;
            continue;
        }
        VAR_10 = &VAR_8->next;
        VAR_5 = VAR_8->amp >> 32;
        VAR_8->amp += VAR_8->damp;
        switch (VAR_8->type) {
            case 128:
                VAR_6 = VAR_5 * VAR_2->sin[VAR_8->phi >> (64 - VAR_1)];
                VAR_8->phi += VAR_8->dphi;
                VAR_8->dphi += VAR_8->ddphi;
                break;
            case 129:
                VAR_6 = VAR_5 * (unsigned)VAR_11;
                break;
            default:
                VAR_6 = 0;
        }
        VAR_13 |= VAR_8->channels;
        for (VAR_12 = VAR_8->channels, VAR_7 = VAR_4; VAR_12; VAR_12 >>= 1, VAR_7++)
            if (VAR_12 & 1)
                *VAR_7 += (unsigned)VAR_6;
    }
    VAR_6 = (int32_t)FUNC_0(&VAR_2->dither_state) >> 16;
    for (VAR_12 = VAR_13, VAR_7 = VAR_4; VAR_12; VAR_12 >>= 1, VAR_7++)
        if (VAR_12 & 1)
            *VAR_7 += VAR_6;
}
