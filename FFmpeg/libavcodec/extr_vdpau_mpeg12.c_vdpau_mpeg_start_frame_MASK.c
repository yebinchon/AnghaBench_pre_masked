
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_12__ {int picture_coding_type; int * non_intra_quantizer_matrix; int * intra_quantizer_matrix; int ** f_code; int full_pel_backward_vector; int full_pel_forward_vector; int top_field_first; int q_scale_type; int alternate_scan; int intra_vlc_format; int concealment_motion_vectors; int frame_pred_frame_dct; int intra_dc_precision; int picture_structure; scalar_t__ slice_count; void* forward_reference; void* backward_reference; } ;
struct TYPE_9__ {TYPE_4__ mpeg; } ;
struct vdpau_picture_context {TYPE_1__ info; } ;
typedef void* VdpVideoSurface ;
typedef TYPE_4__ VdpPictureInfoMPEG1Or2 ;
struct TYPE_15__ {TYPE_6__* priv_data; } ;
struct TYPE_11__ {int f; } ;
struct TYPE_10__ {int f; } ;
struct TYPE_14__ {int pict_type; int * inter_matrix; int * intra_matrix; int ** mpeg_f_code; int * full_pel; int top_field_first; int q_scale_type; int alternate_scan; int intra_vlc_format; int concealment_motion_vectors; int frame_pred_frame_dct; int intra_dc_precision; int picture_structure; TYPE_3__ last_picture; TYPE_2__ next_picture; TYPE_5__* current_picture_ptr; } ;
struct TYPE_13__ {struct vdpau_picture_context* hwaccel_picture_private; } ;
typedef TYPE_5__ Picture ;
typedef TYPE_6__ MpegEncContext ;
typedef TYPE_7__ AVCodecContext ;




 void* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vdpau_picture_context*,int const*,int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_1,
                                  const uint8_t *VAR_2, uint32_t VAR_3)
{
    MpegEncContext * const VAR_4 = VAR_1->priv_data;
    Picture *VAR_5 = VAR_4->current_picture_ptr;
    struct vdpau_picture_context *VAR_6 = VAR_5->hwaccel_picture_private;
    VdpPictureInfoMPEG1Or2 *VAR_7 = &VAR_6->info.mpeg;
    VdpVideoSurface VAR_8;
    int VAR_9;


    VAR_7->forward_reference = VAR_0;
    VAR_7->backward_reference = VAR_0;

    switch (VAR_4->pict_type) {
    case 129:
        VAR_8 = FUNC_2(VAR_4->next_picture.f);
        FUNC_0(VAR_8 != VAR_0);
        VAR_7->backward_reference = VAR_8;

    case 128:
        VAR_8 = FUNC_2(VAR_4->last_picture.f);
        VAR_7->forward_reference = VAR_8;
    }

    VAR_7->slice_count = 0;
    VAR_7->picture_structure = VAR_4->picture_structure;
    VAR_7->picture_coding_type = VAR_4->pict_type;
    VAR_7->intra_dc_precision = VAR_4->intra_dc_precision;
    VAR_7->frame_pred_frame_dct = VAR_4->frame_pred_frame_dct;
    VAR_7->concealment_motion_vectors = VAR_4->concealment_motion_vectors;
    VAR_7->intra_vlc_format = VAR_4->intra_vlc_format;
    VAR_7->alternate_scan = VAR_4->alternate_scan;
    VAR_7->q_scale_type = VAR_4->q_scale_type;
    VAR_7->top_field_first = VAR_4->top_field_first;

    VAR_7->full_pel_forward_vector = VAR_4->full_pel[0];
    VAR_7->full_pel_backward_vector = VAR_4->full_pel[1];

    VAR_7->f_code[0][0] = VAR_4->mpeg_f_code[0][0];
    VAR_7->f_code[0][1] = VAR_4->mpeg_f_code[0][1];
    VAR_7->f_code[1][0] = VAR_4->mpeg_f_code[1][0];
    VAR_7->f_code[1][1] = VAR_4->mpeg_f_code[1][1];
    for (VAR_9 = 0; VAR_9 < 64; ++VAR_9) {
        VAR_7->intra_quantizer_matrix[VAR_9] = VAR_4->intra_matrix[VAR_9];
        VAR_7->non_intra_quantizer_matrix[VAR_9] = VAR_4->inter_matrix[VAR_9];
    }

    return FUNC_1(VAR_6, VAR_2, VAR_3);
}
