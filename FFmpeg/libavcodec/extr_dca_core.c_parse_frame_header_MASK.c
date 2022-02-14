
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int npcmblocks; int es_format; int sumdiff_surround; int sumdiff_front; int source_pcm_res; int filter_perfect; int predictor_history; int lfe_present; int sync_ssf; int ext_audio_present; int ext_audio_type; int aux_present; int ts_present; int drc_present; int bit_rate; int sample_rate; int audio_mode; int frame_size; int crc_present; int avctx; int gb; } ;
struct TYPE_5__ {int npcmblocks; size_t sr_code; size_t br_code; size_t pcmr_code; int sumdiff_surround; int sumdiff_front; int filter_perfect; int predictor_history; int lfe_present; int sync_ssf; int ext_audio_present; int ext_audio_type; int aux_present; int ts_present; int drc_present; int audio_mode; int frame_size; int crc_present; int normal_frame; int member_0; } ;
typedef TYPE_1__ DCACoreFrameHeader ;
typedef TYPE_2__ DCACoreDecoder ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_2(DCACoreDecoder *VAR_6)
{
    DCACoreFrameHeader VAR_7 = { 0 };
    int VAR_8 = FUNC_1(&VAR_7, &VAR_6->gb);

    if (VAR_8 < 0) {
        switch (VAR_8) {
        case 134:
            FUNC_0(VAR_6->avctx, VAR_2, "Deficit samples are not supported\n");
            return VAR_7.normal_frame ? VAR_0 : VAR_1;

        case 131:
            FUNC_0(VAR_6->avctx, VAR_2, "Unsupported number of PCM sample blocks (%d)\n", VAR_7.npcmblocks);
            return (VAR_7.npcmblocks < 6 || VAR_7.normal_frame) ? VAR_0 : VAR_1;

        case 133:
            FUNC_0(VAR_6->avctx, VAR_2, "Invalid core frame size (%d bytes)\n", VAR_7.frame_size);
            return VAR_0;

        case 135:
            FUNC_0(VAR_6->avctx, VAR_2, "Unsupported audio channel arrangement (%d)\n", VAR_7.audio_mode);
            return VAR_1;

        case 128:
            FUNC_0(VAR_6->avctx, VAR_2, "Invalid core audio sampling frequency\n");
            return VAR_0;

        case 129:
            FUNC_0(VAR_6->avctx, VAR_2, "Reserved bit set\n");
            return VAR_0;

        case 132:
            FUNC_0(VAR_6->avctx, VAR_2, "Invalid low frequency effects flag\n");
            return VAR_0;

        case 130:
            FUNC_0(VAR_6->avctx, VAR_2, "Invalid source PCM resolution\n");
            return VAR_0;

        default:
            FUNC_0(VAR_6->avctx, VAR_2, "Unknown core frame header error\n");
            return VAR_0;
        }
    }

    VAR_6->crc_present = VAR_7.crc_present;
    VAR_6->npcmblocks = VAR_7.npcmblocks;
    VAR_6->frame_size = VAR_7.frame_size;
    VAR_6->audio_mode = VAR_7.audio_mode;
    VAR_6->sample_rate = VAR_3[VAR_7.sr_code];
    VAR_6->bit_rate = VAR_4[VAR_7.br_code];
    VAR_6->drc_present = VAR_7.drc_present;
    VAR_6->ts_present = VAR_7.ts_present;
    VAR_6->aux_present = VAR_7.aux_present;
    VAR_6->ext_audio_type = VAR_7.ext_audio_type;
    VAR_6->ext_audio_present = VAR_7.ext_audio_present;
    VAR_6->sync_ssf = VAR_7.sync_ssf;
    VAR_6->lfe_present = VAR_7.lfe_present;
    VAR_6->predictor_history = VAR_7.predictor_history;
    VAR_6->filter_perfect = VAR_7.filter_perfect;
    VAR_6->source_pcm_res = VAR_5[VAR_7.pcmr_code];
    VAR_6->es_format = VAR_7.pcmr_code & 1;
    VAR_6->sumdiff_front = VAR_7.sumdiff_front;
    VAR_6->sumdiff_surround = VAR_7.sumdiff_surround;

    return 0;
}
