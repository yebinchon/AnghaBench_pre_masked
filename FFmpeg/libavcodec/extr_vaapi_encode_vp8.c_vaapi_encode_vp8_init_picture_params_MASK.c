
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int frame_type; int show_frame; int refresh_last; int refresh_golden_frame; int refresh_alternate_frame; scalar_t__ loop_filter_type; scalar_t__ version; } ;
struct TYPE_16__ {TYPE_4__ bits; } ;
struct TYPE_12__ {int force_kf; int no_ref_gf; int no_ref_arf; int no_ref_last; } ;
struct TYPE_13__ {TYPE_1__ bits; } ;
struct TYPE_17__ {int clamp_qindex_high; scalar_t__ clamp_qindex_low; int sharpness_level; int * loop_filter_level; TYPE_5__ pic_flags; int ref_arf_frame; int ref_gf_frame; int ref_last_frame; TYPE_2__ ref_flags; int coded_buf; int reconstructed_frame; } ;
typedef TYPE_6__ VAEncPictureParameterBufferVP8 ;
struct TYPE_18__ {int loop_filter_sharpness; int loop_filter_level; } ;
typedef TYPE_7__ VAAPIEncodeVP8Context ;
struct TYPE_19__ {int type; int nb_refs; TYPE_3__** refs; int output_buffer; int recon_surface; TYPE_6__* codec_picture_params; } ;
typedef TYPE_8__ VAAPIEncodePicture ;
struct TYPE_20__ {TYPE_7__* priv_data; } ;
struct TYPE_14__ {int recon_surface; } ;
typedef TYPE_9__ AVCodecContext ;





 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_1,
                                                VAAPIEncodePicture *VAR_2)
{
    VAAPIEncodeVP8Context *VAR_3 = VAR_1->priv_data;
    VAEncPictureParameterBufferVP8 *VAR_4 = VAR_2->codec_picture_params;
    int VAR_5;

    VAR_4->reconstructed_frame = VAR_2->recon_surface;

    VAR_4->coded_buf = VAR_2->output_buffer;

    switch (VAR_2->type) {
    case 129:
    case 130:
        FUNC_0(VAR_2->nb_refs == 0);
        VAR_4->ref_flags.bits.force_kf = 1;
        VAR_4->ref_last_frame =
        VAR_4->ref_gf_frame =
        VAR_4->ref_arf_frame =
            VAR_0;
        break;
    case 128:
        FUNC_0(VAR_2->nb_refs == 1);
        VAR_4->ref_flags.bits.no_ref_last = 0;
        VAR_4->ref_flags.bits.no_ref_gf = 1;
        VAR_4->ref_flags.bits.no_ref_arf = 1;
        VAR_4->ref_last_frame =
        VAR_4->ref_gf_frame =
        VAR_4->ref_arf_frame =
            VAR_2->refs[0]->recon_surface;
        break;
    default:
        FUNC_0(0 && "invalid picture type");
    }

    VAR_4->pic_flags.bits.frame_type = (VAR_2->type != 129);
    VAR_4->pic_flags.bits.show_frame = 1;

    VAR_4->pic_flags.bits.refresh_last = 1;
    VAR_4->pic_flags.bits.refresh_golden_frame = 1;
    VAR_4->pic_flags.bits.refresh_alternate_frame = 1;

    VAR_4->pic_flags.bits.version = 0;
    VAR_4->pic_flags.bits.loop_filter_type = 0;
    for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
        VAR_4->loop_filter_level[VAR_5] = VAR_3->loop_filter_level;
    VAR_4->sharpness_level = VAR_3->loop_filter_sharpness;

    VAR_4->clamp_qindex_low = 0;
    VAR_4->clamp_qindex_high = 127;

    return 0;
}
