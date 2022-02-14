
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ deficit_samples; int npcmblocks; int frame_size; scalar_t__ audio_mode; size_t sr_code; scalar_t__ lfe_present; size_t pcmr_code; void* dn_code; void* sumdiff_surround; void* sumdiff_front; void* copy_hist; void* encoder_rev; void* filter_perfect; void* crc_present; void* predictor_history; void* sync_ssf; void* ext_audio_present; void* ext_audio_type; void* hdcd_master; void* aux_present; void* ts_present; void* drc_present; void* br_code; void* normal_frame; } ;
typedef int GetBitContext ;
typedef TYPE_1__ DCACoreFrameHeader ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 void* FUNC_0 (int *,int) ;
 void* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

int FUNC_4(DCACoreFrameHeader *VAR_16, GetBitContext *VAR_17)
{
    if (FUNC_2(VAR_17, 32) != VAR_13)
        return VAR_10;

    VAR_16->normal_frame = FUNC_1(VAR_17);
    VAR_16->deficit_samples = FUNC_0(VAR_17, 5) + 1;
    if (VAR_16->deficit_samples != VAR_11)
        return VAR_3;

    VAR_16->crc_present = FUNC_1(VAR_17);
    VAR_16->npcmblocks = FUNC_0(VAR_17, 7) + 1;
    if (VAR_16->npcmblocks & (VAR_12 - 1))
        return VAR_6;

    VAR_16->frame_size = FUNC_0(VAR_17, 14) + 1;
    if (VAR_16->frame_size < 96)
        return VAR_4;

    VAR_16->audio_mode = FUNC_0(VAR_17, 6);
    if (VAR_16->audio_mode >= VAR_0)
        return VAR_2;

    VAR_16->sr_code = FUNC_0(VAR_17, 4);
    if (!VAR_14[VAR_16->sr_code])
        return VAR_9;

    VAR_16->br_code = FUNC_0(VAR_17, 5);
    if (FUNC_1(VAR_17))
        return VAR_8;

    VAR_16->drc_present = FUNC_1(VAR_17);
    VAR_16->ts_present = FUNC_1(VAR_17);
    VAR_16->aux_present = FUNC_1(VAR_17);
    VAR_16->hdcd_master = FUNC_1(VAR_17);
    VAR_16->ext_audio_type = FUNC_0(VAR_17, 3);
    VAR_16->ext_audio_present = FUNC_1(VAR_17);
    VAR_16->sync_ssf = FUNC_1(VAR_17);
    VAR_16->lfe_present = FUNC_0(VAR_17, 2);
    if (VAR_16->lfe_present == VAR_1)
        return VAR_5;

    VAR_16->predictor_history = FUNC_1(VAR_17);
    if (VAR_16->crc_present)
        FUNC_3(VAR_17, 16);
    VAR_16->filter_perfect = FUNC_1(VAR_17);
    VAR_16->encoder_rev = FUNC_0(VAR_17, 4);
    VAR_16->copy_hist = FUNC_0(VAR_17, 2);
    VAR_16->pcmr_code = FUNC_0(VAR_17, 3);
    if (!VAR_15[VAR_16->pcmr_code])
        return VAR_7;

    VAR_16->sumdiff_front = FUNC_1(VAR_17);
    VAR_16->sumdiff_surround = FUNC_1(VAR_17);
    VAR_16->dn_code = FUNC_0(VAR_17, 4);
    return 0;
}
