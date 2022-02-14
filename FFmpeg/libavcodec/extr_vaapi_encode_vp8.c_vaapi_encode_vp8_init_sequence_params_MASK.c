
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int intra_period; int bits_per_second; scalar_t__ kf_auto; scalar_t__ error_resilient; scalar_t__ frame_height_scale; scalar_t__ frame_width_scale; int frame_height; int frame_width; } ;
typedef TYPE_1__ VAEncSequenceParameterBufferVP8 ;
struct TYPE_6__ {int va_rc_mode; int gop_size; int va_bit_rate; TYPE_1__* codec_sequence_params; } ;
typedef TYPE_2__ VAAPIEncodeContext ;
struct TYPE_7__ {int height; int width; TYPE_2__* priv_data; } ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(AVCodecContext *VAR_1)
{
    VAAPIEncodeContext *VAR_2 = VAR_1->priv_data;
    VAEncSequenceParameterBufferVP8 *VAR_3 = VAR_2->codec_sequence_params;

    VAR_3->frame_width = VAR_1->width;
    VAR_3->frame_height = VAR_1->height;

    VAR_3->frame_width_scale = 0;
    VAR_3->frame_height_scale = 0;

    VAR_3->error_resilient = 0;
    VAR_3->kf_auto = 0;

    if (!(VAR_2->va_rc_mode & VAR_0)) {
        VAR_3->bits_per_second = VAR_2->va_bit_rate;
        VAR_3->intra_period = VAR_2->gop_size;
    }

    return 0;
}
