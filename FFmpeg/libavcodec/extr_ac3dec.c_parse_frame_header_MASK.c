
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sr_shift; int sr_code; } ;
struct TYPE_10__ {int bitstream_id; size_t lfe_on; size_t channels; size_t fbw_channels; size_t lfe_ch; int center_mix_level_ltrt; int surround_mix_level_ltrt; int* end_freq; int* num_exp_groups; int eac3; int snr_offset_strategy; int block_switch_syntax; int dither_flag_syntax; int bit_allocation_syntax; int dba_syntax; int skip_syntax; int avctx; int channel_uses_aht; scalar_t__ first_cpl_leak; scalar_t__ fast_gain_syntax; scalar_t__* channel_in_cpl; scalar_t__* start_freq; int dolby_headphone_mode; int dolby_surround_ex_mode; int dolby_surround_mode; int substreamid; int frame_type; int num_blocks; scalar_t__ lfe_mix_level_exists; int surround_mix_level; int center_mix_level; int preferred_downmix; int superframe_size; scalar_t__ frame_size; int bit_rate; int sample_rate; TYPE_1__ bit_alloc_params; int channel_mode; int bitstream_mode; int gbc; } ;
struct TYPE_9__ {int bitstream_id; size_t lfe_on; size_t channels; int dolby_surround_mode; int substreamid; int frame_type; int num_blocks; int surround_mix_level; int center_mix_level; scalar_t__ frame_size; int bit_rate; int sample_rate; int sr_shift; int channel_mode; int bitstream_mode; int sr_code; } ;
typedef TYPE_2__ AC3HeaderInfo ;
typedef TYPE_3__ AC3DecodeContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(AC3DecodeContext *VAR_6)
{
    AC3HeaderInfo VAR_7;
    int VAR_8;

    VAR_8 = FUNC_3(&VAR_6->gbc, &VAR_7);
    if (VAR_8)
        return VAR_8;


    VAR_6->bit_alloc_params.sr_code = VAR_7.sr_code;
    VAR_6->bitstream_id = VAR_7.bitstream_id;
    VAR_6->bitstream_mode = VAR_7.bitstream_mode;
    VAR_6->channel_mode = VAR_7.channel_mode;
    VAR_6->lfe_on = VAR_7.lfe_on;
    VAR_6->bit_alloc_params.sr_shift = VAR_7.sr_shift;
    VAR_6->sample_rate = VAR_7.sample_rate;
    VAR_6->bit_rate = VAR_7.bit_rate;
    VAR_6->channels = VAR_7.channels;
    VAR_6->fbw_channels = VAR_6->channels - VAR_6->lfe_on;
    VAR_6->lfe_ch = VAR_6->fbw_channels + 1;
    VAR_6->frame_size = VAR_7.frame_size;
    VAR_6->superframe_size += VAR_7.frame_size;
    VAR_6->preferred_downmix = VAR_1;
    VAR_6->center_mix_level = VAR_7.center_mix_level;
    VAR_6->center_mix_level_ltrt = 4;
    VAR_6->surround_mix_level = VAR_7.surround_mix_level;
    VAR_6->surround_mix_level_ltrt = 4;
    VAR_6->lfe_mix_level_exists = 0;
    VAR_6->num_blocks = VAR_7.num_blocks;
    VAR_6->frame_type = VAR_7.frame_type;
    VAR_6->substreamid = VAR_7.substreamid;
    VAR_6->dolby_surround_mode = VAR_7.dolby_surround_mode;
    VAR_6->dolby_surround_ex_mode = VAR_2;
    VAR_6->dolby_headphone_mode = VAR_0;

    if (VAR_6->lfe_on) {
        VAR_6->start_freq[VAR_6->lfe_ch] = 0;
        VAR_6->end_freq[VAR_6->lfe_ch] = 7;
        VAR_6->num_exp_groups[VAR_6->lfe_ch] = 2;
        VAR_6->channel_in_cpl[VAR_6->lfe_ch] = 0;
    }

    if (VAR_6->bitstream_id <= 10) {
        VAR_6->eac3 = 0;
        VAR_6->snr_offset_strategy = 2;
        VAR_6->block_switch_syntax = 1;
        VAR_6->dither_flag_syntax = 1;
        VAR_6->bit_allocation_syntax = 1;
        VAR_6->fast_gain_syntax = 0;
        VAR_6->first_cpl_leak = 0;
        VAR_6->dba_syntax = 1;
        VAR_6->skip_syntax = 1;
        FUNC_5(VAR_6->channel_uses_aht, 0, sizeof(VAR_6->channel_uses_aht));
        return FUNC_1(VAR_6);
    } else if (VAR_4) {
        VAR_6->eac3 = 1;
        return FUNC_4(VAR_6);
    } else {
        FUNC_2(VAR_6->avctx, VAR_3, "E-AC-3 support not compiled in\n");
        return FUNC_0(VAR_5);
    }
}
