
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int int64_t ;
struct TYPE_26__ {int level_idc; int name; } ;
struct TYPE_25__ {int level_guess; } ;
struct TYPE_24__ {int bit_rate_scale; TYPE_3__* vcl_sub_layer_hrd_parameters; scalar_t__ vcl_hrd_parameters_present_flag; TYPE_2__* nal_sub_layer_hrd_parameters; scalar_t__ nal_hrd_parameters_present_flag; } ;
struct TYPE_20__ {TYPE_7__ hrd_parameters; scalar_t__ vui_hrd_parameters_present_flag; } ;
struct TYPE_23__ {int* vps_max_dec_pic_buffering_minus1; scalar_t__ vps_num_hrd_parameters; int* sps_max_dec_pic_buffering_minus1; int pic_width_in_luma_samples; int pic_height_in_luma_samples; int num_tile_columns_minus1; int num_tile_rows_minus1; scalar_t__ tiles_enabled_flag; TYPE_1__ vui; int profile_tier_level; TYPE_7__* hrd_parameters; } ;
struct TYPE_22__ {int* bit_rate_value_minus1; } ;
struct TYPE_21__ {int* bit_rate_value_minus1; } ;
struct TYPE_19__ {TYPE_8__* priv_data; } ;
struct TYPE_18__ {int nb_units; TYPE_10__* units; } ;
struct TYPE_17__ {scalar_t__ type; TYPE_4__* content; } ;
typedef TYPE_4__ H265RawVPS ;
typedef TYPE_4__ H265RawSPS ;
typedef int H265RawProfileTierLevel ;
typedef TYPE_4__ H265RawPPS ;
typedef TYPE_7__ H265RawHRDParameters ;
typedef TYPE_8__ H265MetadataContext ;
typedef TYPE_9__ H265LevelDescriptor ;
typedef TYPE_10__ CodedBitstreamUnit ;
typedef TYPE_11__ CodedBitstreamFragment ;
typedef TYPE_12__ AVBSFContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_12__*,int ,char*,int ) ;
 TYPE_9__* FUNC_2 (int const*,int,int,int,int ,int,int,int) ;

__attribute__((used)) static void FUNC_3(AVBSFContext *VAR_4,
                                      const CodedBitstreamFragment *VAR_5)
{
    H265MetadataContext *VAR_6 = VAR_4->priv_data;
    const H265LevelDescriptor *VAR_7;
    const H265RawProfileTierLevel *VAR_8 = ((void*)0);
    const H265RawHRDParameters *VAR_9 = ((void*)0);
    int64_t VAR_10 = 0;
    int VAR_11 = 0, VAR_12 = 0;
    int VAR_13 = 0, VAR_14 = 0;
    int VAR_15 = 0;
    int VAR_16;

    for (VAR_16 = 0; VAR_16 < VAR_5->nb_units; VAR_16++) {
        const CodedBitstreamUnit *VAR_17 = &VAR_5->units[VAR_16];

        if (VAR_17->type == VAR_3) {
            const H265RawVPS *VAR_18 = VAR_17->content;

            VAR_8 = &VAR_18->profile_tier_level;
            VAR_15 = VAR_18->vps_max_dec_pic_buffering_minus1[0] + 1;

            if (VAR_18->vps_num_hrd_parameters > 0)
                VAR_9 = &VAR_18->hrd_parameters[0];

        } else if (VAR_17->type == VAR_2) {
            const H265RawSPS *VAR_19 = VAR_17->content;

            VAR_8 = &VAR_19->profile_tier_level;
            VAR_15 = VAR_19->sps_max_dec_pic_buffering_minus1[0] + 1;

            VAR_11 = VAR_19->pic_width_in_luma_samples;
            VAR_12 = VAR_19->pic_height_in_luma_samples;

            if (VAR_19->vui.vui_hrd_parameters_present_flag)
                VAR_9 = &VAR_19->vui.hrd_parameters;

        } else if (VAR_17->type == VAR_1) {
            const H265RawPPS *VAR_20 = VAR_17->content;

            if (VAR_20->tiles_enabled_flag) {
                VAR_13 = VAR_20->num_tile_columns_minus1 + 1;
                VAR_14 = VAR_20->num_tile_rows_minus1 + 1;
            }
        }
    }

    if (VAR_9) {
        if (VAR_9->nal_hrd_parameters_present_flag) {
            VAR_10 = (VAR_9->nal_sub_layer_hrd_parameters[0].bit_rate_value_minus1[0] + 1) *
                       (FUNC_0(1) << (VAR_9->bit_rate_scale + 6));
        } else if (VAR_9->vcl_hrd_parameters_present_flag) {
            VAR_10 = (VAR_9->vcl_sub_layer_hrd_parameters[0].bit_rate_value_minus1[0] + 1) *
                       (FUNC_0(1) << (VAR_9->bit_rate_scale + 6));

            VAR_10 = VAR_10 * 11 / 10;
        }
    }

    VAR_7 = FUNC_2(VAR_8, VAR_10, VAR_11, VAR_12,
                               0, VAR_13, VAR_14,
                               VAR_15);
    if (VAR_7) {
        FUNC_1(VAR_4, VAR_0, "Stream appears to conform to "
               "level %s.\n", VAR_7->name);
        VAR_6->level_guess = VAR_7->level_idc;
    }
}
