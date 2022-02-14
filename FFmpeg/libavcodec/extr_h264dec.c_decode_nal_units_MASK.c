
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_52__ TYPE_9__ ;
typedef struct TYPE_51__ TYPE_8__ ;
typedef struct TYPE_50__ TYPE_7__ ;
typedef struct TYPE_49__ TYPE_6__ ;
typedef struct TYPE_48__ TYPE_5__ ;
typedef struct TYPE_47__ TYPE_4__ ;
typedef struct TYPE_46__ TYPE_3__ ;
typedef struct TYPE_45__ TYPE_32__ ;
typedef struct TYPE_44__ TYPE_30__ ;
typedef struct TYPE_43__ TYPE_2__ ;
typedef struct TYPE_42__ TYPE_21__ ;
typedef struct TYPE_41__ TYPE_1__ ;
typedef struct TYPE_40__ TYPE_19__ ;
typedef struct TYPE_39__ TYPE_18__ ;
typedef struct TYPE_38__ TYPE_14__ ;


typedef int uint8_t ;
struct TYPE_52__ {int flags2; int active_thread_type; scalar_t__ skip_frame; int err_recognition; int debug; TYPE_2__* hwaccel; int codec_id; } ;
struct TYPE_51__ {scalar_t__ ref_idc; int type; int* data; int size_bits; int gb; int raw_size; int raw_data; } ;
struct TYPE_39__ {int tf; int reference; TYPE_5__* f; } ;
struct TYPE_42__ {TYPE_4__* pps; TYPE_3__** sps_list; int const* sps; } ;
struct TYPE_41__ {int recovery_frame_cnt; } ;
struct TYPE_40__ {int green_metadata; TYPE_1__ recovery_point; } ;
struct TYPE_44__ {int nb_nals; TYPE_8__* nals; } ;
struct TYPE_50__ {int has_slice; int nal_unit_type; int current_slice; int nal_length_size; int is_avc; scalar_t__ nal_ref_idc; int has_recovery_point; int nb_slice_ctx_queued; int setup_finished; int nb_slice_ctx; scalar_t__ picture_structure; TYPE_18__* cur_pic_ptr; int droppable; TYPE_18__ last_pic_for_ec; TYPE_6__* slice_ctx; scalar_t__ enable_er; TYPE_21__ ps; TYPE_9__* avctx; TYPE_19__ sei; int next_outputed_poc; TYPE_30__ pkt; int first_field; } ;
struct TYPE_45__ {scalar_t__ ref_count; int next_pic; int last_pic; int cur_pic; scalar_t__ error_occurred; } ;
struct TYPE_49__ {TYPE_14__** ref_list; TYPE_32__ er; scalar_t__* ref_count; } ;
struct TYPE_48__ {int linesize; int data; scalar_t__* buf; int decode_error_flags; } ;
struct TYPE_47__ {size_t sps_id; } ;
struct TYPE_46__ {scalar_t__ data; } ;
struct TYPE_43__ {int (* start_frame ) (TYPE_9__*,int const*,int) ;int (* decode_slice ) (TYPE_9__* const,int ,int ) ;int (* decode_params ) (TYPE_9__* const,int,int ,int ) ;} ;
struct TYPE_38__ {TYPE_18__* parent; int reference; int linesize; int data; } ;
typedef int SPS ;
typedef TYPE_6__ H264SliceContext ;
typedef TYPE_7__ H264Context ;
typedef TYPE_8__ H2645NAL ;
typedef int GetBitContext ;
typedef TYPE_9__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (int const*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_7__*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (TYPE_9__* const,int ,char*,...) ;
 int FUNC_3 (TYPE_9__* const,char*) ;
 int FUNC_4 (int *,TYPE_9__*) ;
 int FUNC_5 (TYPE_32__*) ;
 int FUNC_6 (TYPE_30__*,int const*,int,TYPE_9__* const,int,int,int ,int,int ) ;
 int FUNC_7 (int *,TYPE_9__* const,TYPE_21__*,int ) ;
 int FUNC_8 (int *,TYPE_9__* const,TYPE_21__*,int) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_7__*,TYPE_8__*) ;
 int FUNC_11 (TYPE_19__*,int *,TYPE_21__*,TYPE_9__* const) ;
 int FUNC_12 (TYPE_19__*) ;
 int FUNC_13 (int *,TYPE_18__*) ;
 int FUNC_14 (TYPE_9__* const) ;
 int FUNC_15 (int *,int ,int) ;
 int FUNC_16 (TYPE_7__*) ;
 int FUNC_17 (TYPE_7__*) ;
 int FUNC_18 (int *,int ,int ) ;
 int FUNC_19 (int ,int ,int) ;
 int FUNC_20 (TYPE_14__*,int ,int) ;
 int FUNC_21 (TYPE_9__*,int const*,int) ;
 int FUNC_22 (TYPE_9__* const,int ,int ) ;
 int FUNC_23 (TYPE_9__* const,int,int ,int ) ;
 int FUNC_24 (TYPE_9__* const,int,int ,int ) ;

__attribute__((used)) static int FUNC_25(H264Context *VAR_12, const uint8_t *VAR_13, int VAR_14)
{
    AVCodecContext *const VAR_15 = VAR_12->avctx;
    int VAR_16 = 0;
    int VAR_17=0;
    int VAR_18, VAR_19 = 0;

    VAR_12->has_slice = 0;
    VAR_12->nal_unit_type= 0;

    if (!(VAR_15->flags2 & VAR_1)) {
        VAR_12->current_slice = 0;
        if (!VAR_12->first_field) {
            VAR_12->cur_pic_ptr = ((void*)0);
            FUNC_12(&VAR_12->sei);
        }
    }

    if (VAR_12->nal_length_size == 4) {
        if (VAR_14 > 8 && FUNC_0(VAR_13) == 1 && FUNC_0(VAR_13+5) > (unsigned)VAR_14) {
            VAR_12->is_avc = 0;
        }else if(VAR_14 > 3 && FUNC_0(VAR_13) > 1 && FUNC_0(VAR_13) <= (unsigned)VAR_14)
            VAR_12->is_avc = 1;
    }

    VAR_19 = FUNC_6(&VAR_12->pkt, VAR_13, VAR_14, VAR_15, VAR_12->is_avc, VAR_12->nal_length_size,
                                VAR_15->codec_id, VAR_15->flags2 & VAR_2, 0);
    if (VAR_19 < 0) {
        FUNC_2(VAR_15, VAR_5,
               "Error splitting the input into NAL units.\n");
        return VAR_19;
    }

    if (VAR_15->active_thread_type & VAR_8)
        VAR_16 = FUNC_16(VAR_12);
    if (VAR_16 < 0)
        return VAR_16;

    for (VAR_18 = 0; VAR_18 < VAR_12->pkt.nb_nals; VAR_18++) {
        H2645NAL *VAR_20 = &VAR_12->pkt.nals[VAR_18];
        int VAR_21, VAR_22;

        if (VAR_15->skip_frame >= VAR_0 &&
            VAR_20->ref_idc == 0 && VAR_20->type != 131)
            continue;


        VAR_12->nal_ref_idc = VAR_20->ref_idc;
        VAR_12->nal_unit_type = VAR_20->type;

        VAR_22 = 0;
        switch (VAR_20->type) {
        case 133:
            if ((VAR_20->data[1] & 0xFC) == 0x98) {
                FUNC_2(VAR_12->avctx, VAR_5, "Invalid inter IDR frame\n");
                VAR_12->next_outputed_poc = VAR_10;
                VAR_19 = -1;
                goto end;
            }
            if(!VAR_17) {
                FUNC_17(VAR_12);
            }
            VAR_17 = 1;
            VAR_12->has_recovery_point = 1;
        case 130:
            VAR_12->has_slice = 1;

            if ((VAR_22 = FUNC_10(VAR_12, VAR_20))) {
                H264SliceContext *VAR_23 = VAR_12->slice_ctx + VAR_12->nb_slice_ctx_queued;
                VAR_23->ref_count[0] = VAR_23->ref_count[1] = 0;
                break;
            }

            if (VAR_12->current_slice == 1) {
                if (VAR_15->active_thread_type & VAR_8 &&
                    VAR_18 >= VAR_16 && !VAR_12->setup_finished && VAR_12->cur_pic_ptr) {
                    FUNC_14(VAR_15);
                    VAR_12->setup_finished = 1;
                }

                if (VAR_12->avctx->hwaccel &&
                    (VAR_19 = VAR_12->avctx->hwaccel->start_frame(VAR_12->avctx, VAR_13, VAR_14)) < 0)
                    goto end;
            }

            VAR_21 = VAR_15->hwaccel ? 1 : VAR_12->nb_slice_ctx;
            if (VAR_12->nb_slice_ctx_queued == VAR_21) {
                if (VAR_12->avctx->hwaccel) {
                    VAR_19 = VAR_15->hwaccel->decode_slice(VAR_15, VAR_20->raw_data, VAR_20->raw_size);
                    VAR_12->nb_slice_ctx_queued = 0;
                } else
                    VAR_19 = FUNC_9(VAR_12);
                if (VAR_19 < 0 && (VAR_12->avctx->err_recognition & VAR_3))
                    goto end;
            }
            break;
        case 139:
        case 138:
        case 137:
            FUNC_3(VAR_15, "data partitioning");
            break;
        case 131:
            VAR_19 = FUNC_11(&VAR_12->sei, &VAR_20->gb, &VAR_12->ps, VAR_15);
            VAR_12->has_recovery_point = VAR_12->has_recovery_point || VAR_12->sei.recovery_point.recovery_frame_cnt != -1;
            if (VAR_15->debug & VAR_6)
                FUNC_4(&VAR_12->sei.green_metadata, VAR_12->avctx);
            if (VAR_19 < 0 && (VAR_12->avctx->err_recognition & VAR_3))
                goto end;
            break;
        case 129: {
            GetBitContext VAR_24 = VAR_20->gb;
            if (VAR_15->hwaccel && VAR_15->hwaccel->decode_params) {
                VAR_19 = VAR_15->hwaccel->decode_params(VAR_15,
                                                    VAR_20->type,
                                                    VAR_20->raw_data,
                                                    VAR_20->raw_size);
                if (VAR_19 < 0)
                    goto end;
            }
            if (FUNC_8(&VAR_24, VAR_15, &VAR_12->ps, 0) >= 0)
                break;
            FUNC_2(VAR_12->avctx, VAR_4,
                   "SPS decoding failure, trying again with the complete NAL\n");
            FUNC_18(&VAR_24, VAR_20->raw_data + 1, VAR_20->raw_size - 1);
            if (FUNC_8(&VAR_24, VAR_15, &VAR_12->ps, 0) >= 0)
                break;
            FUNC_8(&VAR_20->gb, VAR_15, &VAR_12->ps, 1);
            break;
        }
        case 132:
            if (VAR_15->hwaccel && VAR_15->hwaccel->decode_params) {
                VAR_19 = VAR_15->hwaccel->decode_params(VAR_15,
                                                    VAR_20->type,
                                                    VAR_20->raw_data,
                                                    VAR_20->raw_size);
                if (VAR_19 < 0)
                    goto end;
            }
            VAR_19 = FUNC_7(&VAR_20->gb, VAR_15, &VAR_12->ps,
                                                       VAR_20->size_bits);
            if (VAR_19 < 0 && (VAR_12->avctx->err_recognition & VAR_3))
                goto end;
            break;
        case 141:
        case 136:
        case 135:
        case 134:
        case 128:
        case 140:
            break;
        default:
            FUNC_2(VAR_15, VAR_4, "Unknown NAL code: %d (%d bits)\n",
                   VAR_20->type, VAR_20->size_bits);
        }

        if (VAR_22 < 0) {
            FUNC_2(VAR_12->avctx, VAR_5, "decode_slice_header error\n");
        }
    }

    VAR_19 = FUNC_9(VAR_12);
    if (VAR_19 < 0 && (VAR_12->avctx->err_recognition & VAR_3))
        goto end;


    if ((VAR_19 < 0 || VAR_12->slice_ctx->er.error_occurred) && VAR_12->cur_pic_ptr) {
        VAR_12->cur_pic_ptr->f->decode_error_flags |= VAR_7;
    }

    VAR_19 = 0;
end:
    if (VAR_12->cur_pic_ptr && !VAR_12->droppable && VAR_12->has_slice) {
        FUNC_15(&VAR_12->cur_pic_ptr->tf, VAR_9,
                                  VAR_12->picture_structure == VAR_11);
    }

    return (VAR_19 < 0) ? VAR_19 : VAR_14;
}
