
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int intra_period; int bits_per_second; scalar_t__ kf_auto; int max_frame_height; int max_frame_width; } ;
typedef TYPE_1__ VAEncSequenceParameterBufferVP9 ;
struct TYPE_7__ {int frame_height_dst; int frame_width_dst; int frame_height_src; int frame_width_src; } ;
typedef TYPE_2__ VAEncPictureParameterBufferVP9 ;
struct TYPE_8__ {int va_rc_mode; int gop_size; int va_bit_rate; TYPE_2__* codec_picture_params; TYPE_1__* codec_sequence_params; } ;
typedef TYPE_3__ VAAPIEncodeContext ;
struct TYPE_9__ {int height; int width; TYPE_3__* priv_data; } ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(AVCodecContext *VAR_1)
{
    VAAPIEncodeContext *VAR_2 = VAR_1->priv_data;
    VAEncSequenceParameterBufferVP9 *VAR_3 = VAR_2->codec_sequence_params;
    VAEncPictureParameterBufferVP9 *VAR_4 = VAR_2->codec_picture_params;

    VAR_3->max_frame_width = VAR_1->width;
    VAR_3->max_frame_height = VAR_1->height;

    VAR_3->kf_auto = 0;

    if (!(VAR_2->va_rc_mode & VAR_0)) {
        VAR_3->bits_per_second = VAR_2->va_bit_rate;
        VAR_3->intra_period = VAR_2->gop_size;
    }

    VAR_4->frame_width_src = VAR_1->width;
    VAR_4->frame_height_src = VAR_1->height;
    VAR_4->frame_width_dst = VAR_1->width;
    VAR_4->frame_height_dst = VAR_1->height;

    return 0;
}
