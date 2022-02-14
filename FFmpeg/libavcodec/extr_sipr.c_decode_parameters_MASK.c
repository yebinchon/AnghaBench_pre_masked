
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int subframe_count; int number_of_fc_indexes; scalar_t__ gc_index_bits; scalar_t__* fc_index_bits; scalar_t__ gp_index_bits; scalar_t__* pitch_delay_bits; scalar_t__* vq_indexes_bits; scalar_t__ ma_predictor_bits; } ;
struct TYPE_5__ {void** gc_index; void*** fc_indexes; void** gp_index; void** pitch_delay; void** vq_indexes; void* ma_pred_switch; } ;
typedef TYPE_1__ SiprParameters ;
typedef TYPE_2__ SiprModeParam ;
typedef int GetBitContext ;


 void* FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(SiprParameters* VAR_0, GetBitContext *VAR_1,
                              const SiprModeParam *VAR_2)
{
    int VAR_3, VAR_4;

    if (VAR_2->ma_predictor_bits)
        VAR_0->ma_pred_switch = FUNC_0(VAR_1, VAR_2->ma_predictor_bits);

    for (VAR_3 = 0; VAR_3 < 5; VAR_3++)
        VAR_0->vq_indexes[VAR_3] = FUNC_0(VAR_1, VAR_2->vq_indexes_bits[VAR_3]);

    for (VAR_3 = 0; VAR_3 < VAR_2->subframe_count; VAR_3++) {
        VAR_0->pitch_delay[VAR_3] = FUNC_0(VAR_1, VAR_2->pitch_delay_bits[VAR_3]);
        if (VAR_2->gp_index_bits)
            VAR_0->gp_index[VAR_3] = FUNC_0(VAR_1, VAR_2->gp_index_bits);

        for (VAR_4 = 0; VAR_4 < VAR_2->number_of_fc_indexes; VAR_4++)
            VAR_0->fc_indexes[VAR_3][VAR_4] = FUNC_0(VAR_1, VAR_2->fc_index_bits[VAR_4]);

        VAR_0->gc_index[VAR_3] = FUNC_0(VAR_1, VAR_2->gc_index_bits);
    }
}
