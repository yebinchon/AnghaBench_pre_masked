
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
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_21__ {int vop_coding_type; int* trd; int* trb; int resync_marker_disable; int interlaced; int short_video_header; int * non_intra_quantizer_matrix; int * intra_quantizer_matrix; int top_field_first; int alternate_vertical_scan_flag; int rounding_control; int quarter_sample; int quant_type; int vop_fcode_backward; int vop_fcode_forward; int vop_time_increment_resolution; void* forward_reference; void* backward_reference; } ;
struct TYPE_15__ {TYPE_7__ mpeg4; } ;
struct vdpau_picture_context {TYPE_1__ info; } ;
typedef void* VdpVideoSurface ;
typedef TYPE_7__ VdpPictureInfoMPEG4Part2 ;
struct TYPE_17__ {int f; } ;
struct TYPE_16__ {int f; } ;
struct TYPE_23__ {int pict_type; int pp_time; int pb_time; int pp_field_time; int pb_field_time; int * inter_matrix; int * intra_matrix; int top_field_first; int alternate_scan; int no_rounding; int quarter_sample; int mpeg_quant; int progressive_sequence; int b_code; int f_code; TYPE_5__* avctx; TYPE_3__ last_picture; TYPE_2__ next_picture; TYPE_8__* current_picture_ptr; } ;
struct TYPE_22__ {struct vdpau_picture_context* hwaccel_picture_private; } ;
struct TYPE_20__ {scalar_t__ id; } ;
struct TYPE_18__ {int num; } ;
struct TYPE_19__ {TYPE_4__ framerate; } ;
struct TYPE_14__ {TYPE_6__* codec; TYPE_10__* priv_data; } ;
struct TYPE_13__ {int resync_marker; TYPE_9__ m; } ;
typedef TYPE_8__ Picture ;
typedef TYPE_9__ MpegEncContext ;
typedef TYPE_10__ Mpeg4DecContext ;
typedef TYPE_11__ AVCodecContext ;


 scalar_t__ VAR_0 ;


 void* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vdpau_picture_context*,int const*,int ) ;
 int FUNC_2 (struct vdpau_picture_context*,int const*,int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_2,
                                   const uint8_t *VAR_3, uint32_t VAR_4)
{
    Mpeg4DecContext *VAR_5 = VAR_2->priv_data;
    MpegEncContext * const VAR_6 = &VAR_5->m;
    Picture *VAR_7 = VAR_6->current_picture_ptr;
    struct vdpau_picture_context *VAR_8 = VAR_7->hwaccel_picture_private;
    VdpPictureInfoMPEG4Part2 *VAR_9 = &VAR_8->info.mpeg4;
    VdpVideoSurface VAR_10;
    int VAR_11;


    VAR_9->forward_reference = VAR_1;
    VAR_9->backward_reference = VAR_1;
    VAR_9->vop_coding_type = 0;

    switch (VAR_6->pict_type) {
    case 129:
        VAR_10 = FUNC_3(VAR_6->next_picture.f);
        FUNC_0(VAR_10 != VAR_1);
        VAR_9->backward_reference = VAR_10;
        VAR_9->vop_coding_type = 2;

    case 128:
        VAR_10 = FUNC_3(VAR_6->last_picture.f);
        FUNC_0(VAR_10 != VAR_1);
        VAR_9->forward_reference = VAR_10;
    }

    VAR_9->trd[0] = VAR_6->pp_time;
    VAR_9->trb[0] = VAR_6->pb_time;
    VAR_9->trd[1] = VAR_6->pp_field_time >> 1;
    VAR_9->trb[1] = VAR_6->pb_field_time >> 1;
    VAR_9->vop_time_increment_resolution = VAR_6->avctx->framerate.num;
    VAR_9->vop_fcode_forward = VAR_6->f_code;
    VAR_9->vop_fcode_backward = VAR_6->b_code;
    VAR_9->resync_marker_disable = !VAR_5->resync_marker;
    VAR_9->interlaced = !VAR_6->progressive_sequence;
    VAR_9->quant_type = VAR_6->mpeg_quant;
    VAR_9->quarter_sample = VAR_6->quarter_sample;
    VAR_9->short_video_header = VAR_2->codec->id == VAR_0;
    VAR_9->rounding_control = VAR_6->no_rounding;
    VAR_9->alternate_vertical_scan_flag = VAR_6->alternate_scan;
    VAR_9->top_field_first = VAR_6->top_field_first;
    for (VAR_11 = 0; VAR_11 < 64; ++VAR_11) {
        VAR_9->intra_quantizer_matrix[VAR_11] = VAR_6->intra_matrix[VAR_11];
        VAR_9->non_intra_quantizer_matrix[VAR_11] = VAR_6->inter_matrix[VAR_11];
    }

    FUNC_2(VAR_8, VAR_3, VAR_4);
    return FUNC_1(VAR_8, VAR_3, VAR_4);
}
