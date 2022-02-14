
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_7__ ;
typedef struct TYPE_39__ TYPE_6__ ;
typedef struct TYPE_38__ TYPE_5__ ;
typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_20__ ;
typedef struct TYPE_33__ TYPE_1__ ;


struct TYPE_40__ {int err_recognition; TYPE_3__* hwaccel; int skip_frame; } ;
struct TYPE_39__ {int type; int raw_size; int raw_data; int temporal_id; int gb; } ;
struct TYPE_34__ {TYPE_2__* sps; } ;
struct TYPE_33__ {int num_entry_point_offsets; int first_slice_in_pic_flag; int slice_type; int dependent_slice_segment_flag; } ;
struct TYPE_38__ {int nal_unit_type; int is_decoded; int const first_nal_type; int threads_number; int seq_decode; TYPE_7__* avctx; void* max_ra; TYPE_20__ ps; TYPE_1__ sh; int ref; int overlap; void* poc; int sei; int apply_defdispwin; int temporal_id; TYPE_4__* HEVClc; } ;
struct TYPE_37__ {int gb; } ;
struct TYPE_36__ {int (* decode_params ) (TYPE_7__*,int,int ,int ) ;int (* start_frame ) (TYPE_7__*,int *,int ) ;int (* decode_slice ) (TYPE_7__*,int ,int ) ;} ;
struct TYPE_35__ {int ctb_width; int ctb_height; } ;
typedef TYPE_4__ HEVCLocalContext ;
typedef TYPE_5__ HEVCContext ;
typedef TYPE_6__ H2645NAL ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_7__*,int ,char*,...) ;
 int FUNC_4 (int *,TYPE_7__*,TYPE_20__*) ;
 int FUNC_5 (int *,TYPE_7__*,int *,TYPE_20__*,int) ;
 int FUNC_6 (int *,TYPE_7__*,TYPE_20__*,int ) ;
 int FUNC_7 (int *,TYPE_7__*,TYPE_20__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*,TYPE_6__ const*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_7__*,int,int ,int ) ;
 int FUNC_14 (TYPE_7__*,int,int ,int ) ;
 int FUNC_15 (TYPE_7__*,int,int ,int ) ;
 int FUNC_16 (TYPE_7__*,int,int ,int ) ;
 int FUNC_17 (TYPE_7__*,int *,int ) ;
 int FUNC_18 (TYPE_7__*,int ,int ) ;

__attribute__((used)) static int FUNC_19(HEVCContext *VAR_12, const H2645NAL *VAR_13)
{
    HEVCLocalContext *VAR_14 = VAR_12->HEVClc;
    GetBitContext *VAR_15 = &VAR_14->gb;
    int VAR_16, VAR_17;

    *VAR_15 = VAR_13->gb;
    VAR_12->nal_unit_type = VAR_13->type;
    VAR_12->temporal_id = VAR_13->temporal_id;

    switch (VAR_12->nal_unit_type) {
    case 128:
        if (VAR_12->avctx->hwaccel && VAR_12->avctx->hwaccel->decode_params) {
            VAR_17 = VAR_12->avctx->hwaccel->decode_params(VAR_12->avctx,
                                                   VAR_13->type,
                                                   VAR_13->raw_data,
                                                   VAR_13->raw_size);
            if (VAR_17 < 0)
                goto fail;
        }
        VAR_17 = FUNC_7(VAR_15, VAR_12->avctx, &VAR_12->ps);
        if (VAR_17 < 0)
            goto fail;
        break;
    case 135:
        if (VAR_12->avctx->hwaccel && VAR_12->avctx->hwaccel->decode_params) {
            VAR_17 = VAR_12->avctx->hwaccel->decode_params(VAR_12->avctx,
                                                   VAR_13->type,
                                                   VAR_13->raw_data,
                                                   VAR_13->raw_size);
            if (VAR_17 < 0)
                goto fail;
        }
        VAR_17 = FUNC_6(VAR_15, VAR_12->avctx, &VAR_12->ps,
                                     VAR_12->apply_defdispwin);
        if (VAR_17 < 0)
            goto fail;
        break;
    case 142:
        if (VAR_12->avctx->hwaccel && VAR_12->avctx->hwaccel->decode_params) {
            VAR_17 = VAR_12->avctx->hwaccel->decode_params(VAR_12->avctx,
                                                   VAR_13->type,
                                                   VAR_13->raw_data,
                                                   VAR_13->raw_size);
            if (VAR_17 < 0)
                goto fail;
        }
        VAR_17 = FUNC_4(VAR_15, VAR_12->avctx, &VAR_12->ps);
        if (VAR_17 < 0)
            goto fail;
        break;
    case 137:
    case 136:
        if (VAR_12->avctx->hwaccel && VAR_12->avctx->hwaccel->decode_params) {
            VAR_17 = VAR_12->avctx->hwaccel->decode_params(VAR_12->avctx,
                                                   VAR_13->type,
                                                   VAR_13->raw_data,
                                                   VAR_13->raw_size);
            if (VAR_17 < 0)
                goto fail;
        }
        VAR_17 = FUNC_5(VAR_15, VAR_12->avctx, &VAR_12->sei, &VAR_12->ps, VAR_12->nal_unit_type);
        if (VAR_17 < 0)
            goto fail;
        break;
    case 131:
    case 132:
    case 130:
    case 129:
    case 134:
    case 133:
    case 150:
    case 149:
    case 151:
    case 143:
    case 144:
    case 148:
    case 141:
    case 140:
    case 139:
    case 138:
        VAR_17 = FUNC_12(VAR_12);
        if (VAR_17 < 0)
            return VAR_17;
        if (VAR_17 == 1) {
            VAR_17 = VAR_3;
            goto fail;
        }


        if (
            (VAR_12->avctx->skip_frame >= VAR_0 && VAR_12->sh.slice_type == VAR_8) ||
            (VAR_12->avctx->skip_frame >= VAR_1 && VAR_12->sh.slice_type != VAR_9) ||
            (VAR_12->avctx->skip_frame >= VAR_2 && !FUNC_2(VAR_12))) {
            break;
        }

        if (VAR_12->sh.first_slice_in_pic_flag) {
            if (VAR_12->max_ra == VAR_10) {
                if (VAR_12->nal_unit_type == 148 || FUNC_0(VAR_12)) {
                    VAR_12->max_ra = VAR_12->poc;
                } else {
                    if (FUNC_1(VAR_12))
                        VAR_12->max_ra = VAR_11;
                }
            }

            if ((VAR_12->nal_unit_type == 138 || VAR_12->nal_unit_type == 139) &&
                VAR_12->poc <= VAR_12->max_ra) {
                VAR_12->is_decoded = 0;
                break;
            } else {
                if (VAR_12->nal_unit_type == 138 && VAR_12->poc > VAR_12->max_ra)
                    VAR_12->max_ra = VAR_11;
            }

            VAR_12->overlap ++;
            VAR_17 = FUNC_9(VAR_12);
            if (VAR_17 < 0)
                return VAR_17;
        } else if (!VAR_12->ref) {
            FUNC_3(VAR_12->avctx, VAR_5, "First slice in a frame missing.\n");
            goto fail;
        }

        if (VAR_12->nal_unit_type != VAR_12->first_nal_type) {
            FUNC_3(VAR_12->avctx, VAR_5,
                   "Non-matching NAL types of the VCL NALUs: %d %d\n",
                   VAR_12->first_nal_type, VAR_12->nal_unit_type);
            return VAR_3;
        }

        if (!VAR_12->sh.dependent_slice_segment_flag &&
            VAR_12->sh.slice_type != VAR_9) {
            VAR_17 = FUNC_8(VAR_12);
            if (VAR_17 < 0) {
                FUNC_3(VAR_12->avctx, VAR_7,
                       "Error constructing the reference lists for the current slice.\n");
                goto fail;
            }
        }

        if (VAR_12->sh.first_slice_in_pic_flag && VAR_12->avctx->hwaccel) {
            VAR_17 = VAR_12->avctx->hwaccel->start_frame(VAR_12->avctx, ((void*)0), 0);
            if (VAR_17 < 0)
                goto fail;
        }

        if (VAR_12->avctx->hwaccel) {
            VAR_17 = VAR_12->avctx->hwaccel->decode_slice(VAR_12->avctx, VAR_13->raw_data, VAR_13->raw_size);
            if (VAR_17 < 0)
                goto fail;
        } else {
            if (VAR_12->threads_number > 1 && VAR_12->sh.num_entry_point_offsets > 0)
                VAR_16 = FUNC_11(VAR_12, VAR_13);
            else
                VAR_16 = FUNC_10(VAR_12);
            if (VAR_16 >= (VAR_12->ps.sps->ctb_width * VAR_12->ps.sps->ctb_height)) {
                VAR_12->is_decoded = 1;
            }

            if (VAR_16 < 0) {
                VAR_17 = VAR_16;
                goto fail;
            }
        }
        break;
    case 146:
    case 147:
        VAR_12->seq_decode = (VAR_12->seq_decode + 1) & 0xff;
        VAR_12->max_ra = VAR_10;
        break;
    case 152:
    case 145:
        break;
    default:
        FUNC_3(VAR_12->avctx, VAR_6,
               "Skipping NAL unit %d\n", VAR_12->nal_unit_type);
    }

    return 0;
fail:
    if (VAR_12->avctx->err_recognition & VAR_4)
        return VAR_17;
    return 0;
}
