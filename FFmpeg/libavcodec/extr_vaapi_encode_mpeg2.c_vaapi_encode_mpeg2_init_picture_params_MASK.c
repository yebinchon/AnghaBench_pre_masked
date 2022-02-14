
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


struct TYPE_15__ {int** f_code; scalar_t__ temporal_reference; int backward_reference_picture; int forward_reference_picture; int picture_type; int coded_buf; int reconstructed_picture; } ;
typedef TYPE_4__ VAEncPictureParameterBufferMPEG2 ;
struct TYPE_16__ {int type; TYPE_3__** refs; int output_buffer; int recon_surface; scalar_t__ display_order; TYPE_4__* codec_picture_params; } ;
typedef TYPE_5__ VAAPIEncodePicture ;
struct TYPE_19__ {int** f_code; } ;
struct TYPE_12__ {TYPE_8__ picture_coding; } ;
struct TYPE_13__ {TYPE_1__ data; } ;
struct TYPE_18__ {int picture_coding_type; scalar_t__ temporal_reference; } ;
struct TYPE_17__ {int f_code_horizontal; int f_code_vertical; scalar_t__ last_i_frame; TYPE_2__ picture_coding_extension; TYPE_7__ picture_header; } ;
typedef TYPE_6__ VAAPIEncodeMPEG2Context ;
struct TYPE_20__ {TYPE_6__* priv_data; } ;
struct TYPE_14__ {int recon_surface; } ;
typedef TYPE_7__ MPEG2RawPictureHeader ;
typedef TYPE_8__ MPEG2RawPictureCodingExtension ;
typedef TYPE_9__ AVCodecContext ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_3,
                                                 VAAPIEncodePicture *VAR_4)
{
    VAAPIEncodeMPEG2Context *VAR_5 = VAR_3->priv_data;
    MPEG2RawPictureHeader *VAR_6 = &VAR_5->picture_header;
    MPEG2RawPictureCodingExtension *VAR_7 = &VAR_5->picture_coding_extension.data.picture_coding;
    VAEncPictureParameterBufferMPEG2 *VAR_8 = VAR_4->codec_picture_params;

    if (VAR_4->type == 129 || VAR_4->type == 130) {
        VAR_6->temporal_reference = 0;
        VAR_6->picture_coding_type = 1;
        VAR_5->last_i_frame = VAR_4->display_order;
    } else {
        VAR_6->temporal_reference = VAR_4->display_order - VAR_5->last_i_frame;
        VAR_6->picture_coding_type = VAR_4->type == 131 ? 3 : 2;
    }

    if (VAR_4->type == 128 || VAR_4->type == 131) {
        VAR_7->f_code[0][0] = VAR_5->f_code_horizontal;
        VAR_7->f_code[0][1] = VAR_5->f_code_vertical;
    } else {
        VAR_7->f_code[0][0] = 15;
        VAR_7->f_code[0][1] = 15;
    }
    if (VAR_4->type == 131) {
        VAR_7->f_code[1][0] = VAR_5->f_code_horizontal;
        VAR_7->f_code[1][1] = VAR_5->f_code_vertical;
    } else {
        VAR_7->f_code[1][0] = 15;
        VAR_7->f_code[1][1] = 15;
    }

    VAR_8->reconstructed_picture = VAR_4->recon_surface;
    VAR_8->coded_buf = VAR_4->output_buffer;

    switch (VAR_4->type) {
    case 129:
    case 130:
        VAR_8->picture_type = VAR_1;
        break;
    case 128:
        VAR_8->picture_type = VAR_2;
        VAR_8->forward_reference_picture = VAR_4->refs[0]->recon_surface;
        break;
    case 131:
        VAR_8->picture_type = VAR_0;
        VAR_8->forward_reference_picture = VAR_4->refs[0]->recon_surface;
        VAR_8->backward_reference_picture = VAR_4->refs[1]->recon_surface;
        break;
    default:
        FUNC_0(0 && "invalid picture type");
    }

    VAR_8->temporal_reference = VAR_6->temporal_reference;
    VAR_8->f_code[0][0] = VAR_7->f_code[0][0];
    VAR_8->f_code[0][1] = VAR_7->f_code[0][1];
    VAR_8->f_code[1][0] = VAR_7->f_code[1][0];
    VAR_8->f_code[1][1] = VAR_7->f_code[1][1];

    return 0;
}
