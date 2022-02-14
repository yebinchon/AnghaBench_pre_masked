
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int i_vbv_buffer_size; int i_vbv_max_bitrate; scalar_t__ i_rc_method; int i_bitrate; scalar_t__ f_rf_constant; scalar_t__ i_qp_constant; scalar_t__ f_rf_constant_max; } ;
struct TYPE_15__ {int i_sar_height; int i_sar_width; } ;
struct TYPE_23__ {scalar_t__ b_tff; int i_frame_packing; TYPE_3__ rc; TYPE_1__ vui; scalar_t__ b_interlaced; } ;
struct TYPE_18__ {scalar_t__ avcintra_class; scalar_t__ crf; scalar_t__ cqp; scalar_t__ crf_max; TYPE_9__ params; int enc; } ;
typedef TYPE_4__ X264Context ;
struct TYPE_16__ {int num; int den; } ;
struct TYPE_22__ {int rc_buffer_size; int rc_max_rate; int bit_rate; TYPE_2__ sample_aspect_ratio; TYPE_4__* priv_data; } ;
struct TYPE_21__ {scalar_t__ top_field_first; } ;
struct TYPE_20__ {scalar_t__ data; } ;
struct TYPE_19__ {int type; int flags; } ;
typedef TYPE_5__ AVStereo3D ;
typedef TYPE_6__ AVFrameSideData ;
typedef TYPE_7__ AVFrame ;
typedef TYPE_8__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;




 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_6__* FUNC_0 (TYPE_7__ const*,int ) ;
 int FUNC_1 (TYPE_8__*,int ,char*,int) ;
 int FUNC_2 (int ,TYPE_9__*) ;

__attribute__((used)) static void FUNC_3(AVCodecContext *VAR_6, const AVFrame *VAR_7)
{
    X264Context *VAR_8 = VAR_6->priv_data;
    AVFrameSideData *VAR_9;


  if (VAR_8->avcintra_class < 0) {
    if (VAR_8->params.b_interlaced && VAR_8->params.b_tff != VAR_7->top_field_first) {

        VAR_8->params.b_tff = VAR_7->top_field_first;
        FUNC_2(VAR_8->enc, &VAR_8->params);
    }
    if (VAR_8->params.vui.i_sar_height*VAR_6->sample_aspect_ratio.num != VAR_6->sample_aspect_ratio.den * VAR_8->params.vui.i_sar_width) {
        VAR_8->params.vui.i_sar_height = VAR_6->sample_aspect_ratio.den;
        VAR_8->params.vui.i_sar_width = VAR_6->sample_aspect_ratio.num;
        FUNC_2(VAR_8->enc, &VAR_8->params);
    }

    if (VAR_8->params.rc.i_vbv_buffer_size != VAR_6->rc_buffer_size / 1000 ||
        VAR_8->params.rc.i_vbv_max_bitrate != VAR_6->rc_max_rate / 1000) {
        VAR_8->params.rc.i_vbv_buffer_size = VAR_6->rc_buffer_size / 1000;
        VAR_8->params.rc.i_vbv_max_bitrate = VAR_6->rc_max_rate / 1000;
        FUNC_2(VAR_8->enc, &VAR_8->params);
    }

    if (VAR_8->params.rc.i_rc_method == VAR_3 &&
        VAR_8->params.rc.i_bitrate != VAR_6->bit_rate / 1000) {
        VAR_8->params.rc.i_bitrate = VAR_6->bit_rate / 1000;
        FUNC_2(VAR_8->enc, &VAR_8->params);
    }

    if (VAR_8->crf >= 0 &&
        VAR_8->params.rc.i_rc_method == VAR_5 &&
        VAR_8->params.rc.f_rf_constant != VAR_8->crf) {
        VAR_8->params.rc.f_rf_constant = VAR_8->crf;
        FUNC_2(VAR_8->enc, &VAR_8->params);
    }

    if (VAR_8->params.rc.i_rc_method == VAR_4 &&
        VAR_8->cqp >= 0 &&
        VAR_8->params.rc.i_qp_constant != VAR_8->cqp) {
        VAR_8->params.rc.i_qp_constant = VAR_8->cqp;
        FUNC_2(VAR_8->enc, &VAR_8->params);
    }

    if (VAR_8->crf_max >= 0 &&
        VAR_8->params.rc.f_rf_constant_max != VAR_8->crf_max) {
        VAR_8->params.rc.f_rf_constant_max = VAR_8->crf_max;
        FUNC_2(VAR_8->enc, &VAR_8->params);
    }
  }

    VAR_9 = FUNC_0(VAR_7, VAR_0);
    if (VAR_9) {
        AVStereo3D *VAR_10 = (AVStereo3D *)VAR_9->data;
        int VAR_11;

        switch (VAR_10->type) {
        case 133:
            VAR_11 = 0;
            break;
        case 132:
            VAR_11 = 1;
            break;
        case 130:
            VAR_11 = 2;
            break;
        case 129:
            VAR_11 = 3;
            break;
        case 128:
            VAR_11 = 4;
            break;
        case 131:
            VAR_11 = 5;
            break;





        default:
            VAR_11 = -1;
            break;
        }


        if (VAR_10->flags & VAR_2) {
            FUNC_1(VAR_6, VAR_1,
                   "Ignoring unsupported inverted stereo value %d\n", VAR_11);
            VAR_11 = -1;
        }

        if (VAR_11 != VAR_8->params.i_frame_packing) {
            VAR_8->params.i_frame_packing = VAR_11;
            FUNC_2(VAR_8->enc, &VAR_8->params);
        }
    }
}
