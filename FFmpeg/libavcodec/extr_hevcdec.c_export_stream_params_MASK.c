
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_31__ {scalar_t__ bottom_offset; scalar_t__ top_offset; scalar_t__ right_offset; scalar_t__ left_offset; } ;
struct TYPE_29__ {scalar_t__ preferred_transfer_characteristics; scalar_t__ present; } ;
struct TYPE_30__ {TYPE_7__ alternative_transfer; } ;
struct TYPE_28__ {int num; int den; } ;
struct TYPE_27__ {scalar_t__ transfer_characteristic; unsigned int vui_num_units_in_tick; unsigned int vui_time_scale; scalar_t__ vui_timing_info_present_flag; int matrix_coeffs; int colour_primaries; scalar_t__ colour_description_present_flag; scalar_t__ video_full_range_flag; scalar_t__ video_signal_type_present_flag; int sar; } ;
struct TYPE_25__ {int level_idc; int profile_idc; } ;
struct TYPE_26__ {TYPE_3__ general_ptl; } ;
struct TYPE_24__ {int num_reorder_pics; } ;
struct TYPE_23__ {scalar_t__ data; } ;
struct TYPE_22__ {scalar_t__ color_trc; TYPE_6__ framerate; int colorspace; int color_primaries; void* color_range; int level; int profile; int has_b_frames; scalar_t__ height; scalar_t__ width; scalar_t__ coded_height; scalar_t__ coded_width; int pix_fmt; } ;
struct TYPE_20__ {TYPE_1__** vps_list; } ;
struct TYPE_21__ {TYPE_8__ sei; TYPE_12__ ps; TYPE_14__* avctx; } ;
struct TYPE_19__ {size_t vps_id; int max_sub_layers; TYPE_5__ vui; TYPE_4__ ptl; TYPE_2__* temporal_layer; scalar_t__ height; scalar_t__ width; int pix_fmt; TYPE_9__ output_window; } ;
struct TYPE_18__ {unsigned int vps_num_units_in_tick; unsigned int vps_time_scale; scalar_t__ vps_timing_info_present_flag; } ;
typedef TYPE_9__ HEVCWindow ;
typedef TYPE_10__ HEVCVPS ;
typedef TYPE_11__ HEVCSPS ;
typedef TYPE_12__ HEVCParamSets ;
typedef TYPE_13__ HEVCContext ;
typedef TYPE_14__ AVCodecContext ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *,unsigned int,unsigned int,int) ;
 int FUNC_2 (TYPE_14__*,int ) ;

__attribute__((used)) static void FUNC_3(HEVCContext *VAR_5, const HEVCSPS *VAR_6)
{
    AVCodecContext *VAR_7 = VAR_5->avctx;
    const HEVCParamSets *VAR_8 = &VAR_5->ps;
    const HEVCVPS *VAR_9 = (const HEVCVPS*)VAR_8->vps_list[VAR_6->vps_id]->data;
    const HEVCWindow *VAR_10 = &VAR_6->output_window;
    unsigned int VAR_11 = 0, VAR_12 = 0;

    VAR_7->pix_fmt = VAR_6->pix_fmt;
    VAR_7->coded_width = VAR_6->width;
    VAR_7->coded_height = VAR_6->height;
    VAR_7->width = VAR_6->width - VAR_10->left_offset - VAR_10->right_offset;
    VAR_7->height = VAR_6->height - VAR_10->top_offset - VAR_10->bottom_offset;
    VAR_7->has_b_frames = VAR_6->temporal_layer[VAR_6->max_sub_layers - 1].num_reorder_pics;
    VAR_7->profile = VAR_6->ptl.general_ptl.profile_idc;
    VAR_7->level = VAR_6->ptl.general_ptl.level_idc;

    FUNC_2(VAR_7, VAR_6->vui.sar);

    if (VAR_6->vui.video_signal_type_present_flag)
        VAR_7->color_range = VAR_6->vui.video_full_range_flag ? VAR_1
                                                            : VAR_2;
    else
        VAR_7->color_range = VAR_2;

    if (VAR_6->vui.colour_description_present_flag) {
        VAR_7->color_primaries = VAR_6->vui.colour_primaries;
        VAR_7->color_trc = VAR_6->vui.transfer_characteristic;
        VAR_7->colorspace = VAR_6->vui.matrix_coeffs;
    } else {
        VAR_7->color_primaries = VAR_0;
        VAR_7->color_trc = VAR_4;
        VAR_7->colorspace = VAR_3;
    }

    if (VAR_9->vps_timing_info_present_flag) {
        VAR_11 = VAR_9->vps_num_units_in_tick;
        VAR_12 = VAR_9->vps_time_scale;
    } else if (VAR_6->vui.vui_timing_info_present_flag) {
        VAR_11 = VAR_6->vui.vui_num_units_in_tick;
        VAR_12 = VAR_6->vui.vui_time_scale;
    }

    if (VAR_11 != 0 && VAR_12 != 0)
        FUNC_1(&VAR_7->framerate.den, &VAR_7->framerate.num,
                  VAR_11, VAR_12, 1 << 30);

    if (VAR_5->sei.alternative_transfer.present &&
        FUNC_0(VAR_5->sei.alternative_transfer.preferred_transfer_characteristics) &&
        VAR_5->sei.alternative_transfer.preferred_transfer_characteristics != VAR_4) {
        VAR_7->color_trc = VAR_5->sei.alternative_transfer.preferred_transfer_characteristics;
    }
}
