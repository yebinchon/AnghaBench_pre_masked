
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int dolby_surround_mode; int dialogue_level; int audio_production_info; int mixing_level; int room_type; int copyright; int original; int extended_bsi_1; int preferred_stereo_downmix; int extended_bsi_2; int dolby_surround_ex_mode; int dolby_headphone_mode; int ad_converter_type; } ;
struct TYPE_5__ {int sr_code; } ;
struct TYPE_6__ {int frame_size_code; int frame_size; int frame_size_min; int bitstream_id; int bitstream_mode; int channel_mode; int center_mix_level; int surround_mix_level; int lfe_on; int ltrt_center_mix_level; int ltrt_surround_mix_level; int loro_center_mix_level; int loro_surround_mix_level; int pb; TYPE_1__ bit_alloc; TYPE_3__ options; } ;
typedef TYPE_2__ AC3EncodeContext ;
typedef TYPE_3__ AC3EncOptions ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(AC3EncodeContext *VAR_2)
{
    AC3EncOptions *VAR_3 = &VAR_2->options;

    FUNC_0(&VAR_2->pb, 16, 0x0b77);
    FUNC_0(&VAR_2->pb, 16, 0);
    FUNC_0(&VAR_2->pb, 2, VAR_2->bit_alloc.sr_code);
    FUNC_0(&VAR_2->pb, 6, VAR_2->frame_size_code + (VAR_2->frame_size - VAR_2->frame_size_min) / 2);
    FUNC_0(&VAR_2->pb, 5, VAR_2->bitstream_id);
    FUNC_0(&VAR_2->pb, 3, VAR_2->bitstream_mode);
    FUNC_0(&VAR_2->pb, 3, VAR_2->channel_mode);
    if ((VAR_2->channel_mode & 0x01) && VAR_2->channel_mode != VAR_0)
        FUNC_0(&VAR_2->pb, 2, VAR_2->center_mix_level);
    if (VAR_2->channel_mode & 0x04)
        FUNC_0(&VAR_2->pb, 2, VAR_2->surround_mix_level);
    if (VAR_2->channel_mode == VAR_1)
        FUNC_0(&VAR_2->pb, 2, VAR_3->dolby_surround_mode);
    FUNC_0(&VAR_2->pb, 1, VAR_2->lfe_on);
    FUNC_0(&VAR_2->pb, 5, -VAR_3->dialogue_level);
    FUNC_0(&VAR_2->pb, 1, 0);
    FUNC_0(&VAR_2->pb, 1, 0);
    FUNC_0(&VAR_2->pb, 1, VAR_3->audio_production_info);
    if (VAR_3->audio_production_info) {
        FUNC_0(&VAR_2->pb, 5, VAR_3->mixing_level - 80);
        FUNC_0(&VAR_2->pb, 2, VAR_3->room_type);
    }
    FUNC_0(&VAR_2->pb, 1, VAR_3->copyright);
    FUNC_0(&VAR_2->pb, 1, VAR_3->original);
    if (VAR_2->bitstream_id == 6) {

        FUNC_0(&VAR_2->pb, 1, VAR_3->extended_bsi_1);
        if (VAR_3->extended_bsi_1) {
            FUNC_0(&VAR_2->pb, 2, VAR_3->preferred_stereo_downmix);
            FUNC_0(&VAR_2->pb, 3, VAR_2->ltrt_center_mix_level);
            FUNC_0(&VAR_2->pb, 3, VAR_2->ltrt_surround_mix_level);
            FUNC_0(&VAR_2->pb, 3, VAR_2->loro_center_mix_level);
            FUNC_0(&VAR_2->pb, 3, VAR_2->loro_surround_mix_level);
        }
        FUNC_0(&VAR_2->pb, 1, VAR_3->extended_bsi_2);
        if (VAR_3->extended_bsi_2) {
            FUNC_0(&VAR_2->pb, 2, VAR_3->dolby_surround_ex_mode);
            FUNC_0(&VAR_2->pb, 2, VAR_3->dolby_headphone_mode);
            FUNC_0(&VAR_2->pb, 1, VAR_3->ad_converter_type);
            FUNC_0(&VAR_2->pb, 9, 0);
        }
    } else {
    FUNC_0(&VAR_2->pb, 1, 0);
    FUNC_0(&VAR_2->pb, 1, 0);
    }
    FUNC_0(&VAR_2->pb, 1, 0);
}
