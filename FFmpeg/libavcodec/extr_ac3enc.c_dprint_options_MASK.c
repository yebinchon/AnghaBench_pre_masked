
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int room_type; int dolby_surround_mode; int preferred_stereo_downmix; int dolby_surround_ex_mode; int dolby_headphone_mode; int ad_converter_type; scalar_t__ extended_bsi_2; int loro_surround_mix_level; int loro_center_mix_level; int ltrt_surround_mix_level; int ltrt_center_mix_level; scalar_t__ extended_bsi_1; scalar_t__ original; int dialogue_level; scalar_t__ copyright; int mixing_level; scalar_t__ audio_production_info; int surround_mix_level; int center_mix_level; scalar_t__ allow_per_frame_metadata; } ;
struct TYPE_7__ {int bitstream_id; scalar_t__ channel_mode; int loro_surround_mix_level; int loro_center_mix_level; int ltrt_surround_mix_level; int ltrt_center_mix_level; int surround_mix_level; scalar_t__ has_surround; int center_mix_level; scalar_t__ has_center; int cutoff; int num_blks_code; int num_blocks; int bit_rate; int sample_rate; int channels; TYPE_3__ options; TYPE_1__* avctx; } ;
struct TYPE_6__ {int channel_layout; int sample_fmt; } ;
typedef TYPE_1__ AVCodecContext ;
typedef TYPE_2__ AC3EncodeContext ;
typedef TYPE_3__ AC3EncOptions ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_5(AC3EncodeContext *VAR_1)
{
}
