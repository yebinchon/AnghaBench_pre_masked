
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct ws_interval {scalar_t__ ts_start; scalar_t__ ts_end; int type; scalar_t__ damp; scalar_t__ amp0; scalar_t__ phi0; scalar_t__ ddphi; scalar_t__ dphi0; void* channels; } ;
struct wavesynth_context {int nb_inter; struct ws_interval* inter; } ;
typedef scalar_t__ int64_t ;
typedef void* int32_t ;
struct TYPE_3__ {int extradata_size; scalar_t__ sample_rate; int * extradata; struct wavesynth_context* priv_data; } ;
typedef TYPE_1__ AVCodecContext ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 struct ws_interval* FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (void*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct ws_interval*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_3)
{
    struct wavesynth_context *VAR_4 = VAR_3->priv_data;
    struct ws_interval *VAR_5;
    uint8_t *VAR_6, *VAR_7;
    int32_t VAR_8, VAR_9, VAR_10, VAR_11;
    uint32_t VAR_12;
    int64_t VAR_13, VAR_14, VAR_15, VAR_16 = -0x8000000000000000;
    int VAR_17;

    if (VAR_3->extradata_size < 4)
        return FUNC_0(VAR_0);
    VAR_6 = VAR_3->extradata;
    VAR_7 = VAR_6 + VAR_3->extradata_size;
    VAR_4->nb_inter = FUNC_1(VAR_6);
    VAR_6 += 4;
    if (VAR_4->nb_inter < 0 || (VAR_7 - VAR_6) / 24 < VAR_4->nb_inter)
        return FUNC_0(VAR_0);
    VAR_4->inter = FUNC_3(VAR_4->nb_inter, sizeof(*VAR_4->inter));
    if (!VAR_4->inter)
        return FUNC_0(VAR_1);
    for (VAR_17 = 0; VAR_17 < VAR_4->nb_inter; VAR_17++) {
        VAR_5 = &VAR_4->inter[VAR_17];
        if (VAR_7 - VAR_6 < 24)
            return FUNC_0(VAR_0);
        VAR_5->ts_start = FUNC_2(VAR_6 + 0);
        VAR_5->ts_end = FUNC_2(VAR_6 + 8);
        VAR_5->type = FUNC_1(VAR_6 + 16);
        VAR_5->channels = FUNC_1(VAR_6 + 20);
        VAR_6 += 24;
        if (VAR_5->ts_start < VAR_16 ||
            VAR_5->ts_end <= VAR_5->ts_start ||
            (uint64_t)VAR_5->ts_end - VAR_5->ts_start > VAR_2
        )
            return FUNC_0(VAR_0);
        VAR_16 = VAR_5->ts_start;
        VAR_15 = VAR_5->ts_end - VAR_5->ts_start;
        switch (VAR_5->type) {
            case 128:
                if (VAR_7 - VAR_6 < 20 || VAR_3->sample_rate <= 0)
                    return FUNC_0(VAR_0);
                VAR_8 = FUNC_1(VAR_6 + 0);
                VAR_9 = FUNC_1(VAR_6 + 4);
                VAR_10 = FUNC_1(VAR_6 + 8);
                VAR_11 = FUNC_1(VAR_6 + 12);
                VAR_12 = FUNC_1(VAR_6 + 16);
                VAR_6 += 20;
                VAR_13 = FUNC_4(VAR_8, (int64_t)VAR_3->sample_rate << 16);
                VAR_14 = FUNC_4(VAR_9, (int64_t)VAR_3->sample_rate << 16);
                VAR_5->dphi0 = VAR_13;
                VAR_5->ddphi = (VAR_14 - VAR_13) / VAR_15;
                if (VAR_12 & 0x80000000) {
                    VAR_12 &= ~0x80000000;
                    if (VAR_12 >= VAR_17)
                        return FUNC_0(VAR_0);
                    VAR_5->phi0 = FUNC_5(&VAR_4->inter[VAR_12], VAR_5->ts_start);
                } else {
                    VAR_5->phi0 = (uint64_t)VAR_12 << 33;
                }
                break;
            case 129:
                if (VAR_7 - VAR_6 < 8)
                    return FUNC_0(VAR_0);
                VAR_10 = FUNC_1(VAR_6 + 0);
                VAR_11 = FUNC_1(VAR_6 + 4);
                VAR_6 += 8;
                break;
            default:
                return FUNC_0(VAR_0);
        }
        VAR_5->amp0 = (uint64_t)VAR_10 << 32;
        VAR_5->damp = (int64_t)(((uint64_t)VAR_11 << 32) - ((uint64_t)VAR_10 << 32)) / VAR_15;
    }
    if (VAR_6 != VAR_7)
        return FUNC_0(VAR_0);
    return 0;
}
