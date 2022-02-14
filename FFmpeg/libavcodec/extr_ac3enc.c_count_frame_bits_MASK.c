
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int cpl_in_use; int* new_cpl_coords; int new_cpl_leak; scalar_t__ new_snr_offsets; scalar_t__* channel_in_cpl; scalar_t__ num_rematrixing_bands; scalar_t__ new_rematrixing_strategy; scalar_t__ new_cpl_strategy; } ;
struct TYPE_6__ {scalar_t__ extended_bsi_2; scalar_t__ extended_bsi_1; scalar_t__ audio_production_info; scalar_t__ eac3_info_metadata; scalar_t__ eac3_mixing_metadata; } ;
struct TYPE_5__ {scalar_t__ channel_mode; int num_blocks; int cpl_on; int bitstream_id; int fbw_channels; int num_cpl_subbands; int num_cpl_bands; scalar_t__** exp_strategy; int channels; int frame_bits; int frame_bits_fixed; scalar_t__ eac3; TYPE_3__* blocks; scalar_t__ use_frame_exp_strategy; scalar_t__ lfe_on; scalar_t__ has_surround; scalar_t__ has_center; TYPE_2__ options; } ;
typedef TYPE_1__ AC3EncodeContext ;
typedef TYPE_2__ AC3EncOptions ;
typedef TYPE_3__ AC3Block ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(AC3EncodeContext *VAR_4)
{
    AC3EncOptions *VAR_5 = &VAR_4->options;
    int VAR_6, VAR_7;
    int VAR_8 = 0;


    if (VAR_4->eac3) {
        if (VAR_5->eac3_mixing_metadata) {
            if (VAR_4->channel_mode > VAR_2)
                VAR_8 += 2;
            if (VAR_4->has_center)
                VAR_8 += 6;
            if (VAR_4->has_surround)
                VAR_8 += 6;
            VAR_8 += VAR_4->lfe_on;
            VAR_8 += 1 + 1 + 2;
            if (VAR_4->channel_mode < VAR_2)
                VAR_8++;
            VAR_8++;
        }
        if (VAR_5->eac3_info_metadata) {
            VAR_8 += 3 + 1 + 1;
            if (VAR_4->channel_mode == VAR_2)
                VAR_8 += 2 + 2;
            if (VAR_4->channel_mode >= VAR_0)
                VAR_8 += 2;
            VAR_8++;
            if (VAR_5->audio_production_info)
                VAR_8 += 5 + 2 + 1;
            VAR_8++;
        }

        if (VAR_4->channel_mode > VAR_1) {
            VAR_8++;
            for (VAR_6 = 1; VAR_6 < VAR_4->num_blocks; VAR_6++) {
                AC3Block *VAR_9 = &VAR_4->blocks[VAR_6];
                VAR_8++;
                if (VAR_9->new_cpl_strategy)
                    VAR_8++;
            }
        }

        if (VAR_4->cpl_on) {
            if (VAR_4->use_frame_exp_strategy) {
                VAR_8 += 5 * VAR_4->cpl_on;
            } else {
                for (VAR_6 = 0; VAR_6 < VAR_4->num_blocks; VAR_6++)
                    VAR_8 += 2 * VAR_4->blocks[VAR_6].cpl_in_use;
            }
        }
    } else {
        if (VAR_5->audio_production_info)
            VAR_8 += 7;
        if (VAR_4->bitstream_id == 6) {
            if (VAR_5->extended_bsi_1)
                VAR_8 += 14;
            if (VAR_5->extended_bsi_2)
                VAR_8 += 14;
        }
    }


    for (VAR_6 = 0; VAR_6 < VAR_4->num_blocks; VAR_6++) {
        AC3Block *VAR_10 = &VAR_4->blocks[VAR_6];


        if (!VAR_4->eac3)
            VAR_8++;
        if (VAR_10->new_cpl_strategy) {
            if (!VAR_4->eac3)
                VAR_8++;
            if (VAR_10->cpl_in_use) {
                if (VAR_4->eac3)
                    VAR_8++;
                if (!VAR_4->eac3 || VAR_4->channel_mode != VAR_2)
                    VAR_8 += VAR_4->fbw_channels;
                if (VAR_4->channel_mode == VAR_2)
                    VAR_8++;
                VAR_8 += 4 + 4;
                if (VAR_4->eac3)
                    VAR_8++;
                else
                    VAR_8 += VAR_4->num_cpl_subbands - 1;
            }
        }


        if (VAR_10->cpl_in_use) {
            for (VAR_7 = 1; VAR_7 <= VAR_4->fbw_channels; VAR_7++) {
                if (VAR_10->channel_in_cpl[VAR_7]) {
                    if (!VAR_4->eac3 || VAR_10->new_cpl_coords[VAR_7] != 2)
                        VAR_8++;
                    if (VAR_10->new_cpl_coords[VAR_7]) {
                        VAR_8 += 2;
                        VAR_8 += (4 + 4) * VAR_4->num_cpl_bands;
                    }
                }
            }
        }


        if (VAR_4->channel_mode == VAR_2) {
            if (!VAR_4->eac3 || VAR_6 > 0)
                VAR_8++;
            if (VAR_4->blocks[VAR_6].new_rematrixing_strategy)
                VAR_8 += VAR_10->num_rematrixing_bands;
        }


        for (VAR_7 = 1; VAR_7 <= VAR_4->fbw_channels; VAR_7++) {
            if (VAR_4->exp_strategy[VAR_7][VAR_6] != VAR_3) {
                if (!VAR_10->channel_in_cpl[VAR_7])
                    VAR_8 += 6;
                VAR_8 += 2;
            }
        }


        if (!VAR_4->eac3 && VAR_10->cpl_in_use)
            VAR_8 += 2;


        if (!VAR_4->eac3) {
            VAR_8++;
            if (VAR_10->new_snr_offsets)
                VAR_8 += 6 + (VAR_4->channels + VAR_10->cpl_in_use) * (4 + 3);
        }


        if (VAR_10->cpl_in_use) {
            if (!VAR_4->eac3 || VAR_10->new_cpl_leak != 2)
                VAR_8++;
            if (VAR_10->new_cpl_leak)
                VAR_8 += 3 + 3;
        }
    }

    VAR_4->frame_bits = VAR_4->frame_bits_fixed + VAR_8;
}
