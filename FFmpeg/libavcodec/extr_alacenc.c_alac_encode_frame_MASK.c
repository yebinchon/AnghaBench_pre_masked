
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int bits_per_raw_sample; int channels; TYPE_1__* priv_data; } ;
struct TYPE_14__ {scalar_t__ nb_samples; int extended_data; } ;
struct TYPE_13__ {int size; } ;
struct TYPE_12__ {scalar_t__ frame_size; int max_coded_frame_size; int verbatim; scalar_t__ extra_bits; scalar_t__ compression_level; } ;
typedef TYPE_1__ AlacEncodeContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_2__*,int,int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_1, AVPacket *VAR_2,
                             const AVFrame *VAR_3, int *VAR_4)
{
    AlacEncodeContext *VAR_5 = VAR_1->priv_data;
    int VAR_6, VAR_7, VAR_8;

    VAR_5->frame_size = VAR_3->nb_samples;

    if (VAR_3->nb_samples < VAR_0)
        VAR_7 = FUNC_1(VAR_5->frame_size, VAR_1->channels,
                                            VAR_1->bits_per_raw_sample);
    else
        VAR_7 = VAR_5->max_coded_frame_size;

    if ((VAR_8 = FUNC_0(VAR_1, VAR_2, 4 * VAR_7, 0)) < 0)
        return VAR_8;


    if (VAR_5->compression_level) {
        VAR_5->verbatim = 0;
        VAR_5->extra_bits = VAR_1->bits_per_raw_sample - 16;
    } else {
        VAR_5->verbatim = 1;
        VAR_5->extra_bits = 0;
    }

    VAR_6 = FUNC_2(VAR_5, VAR_2, VAR_3->extended_data);

    if (VAR_6 > VAR_7) {

        VAR_5->verbatim = 1;
        VAR_5->extra_bits = 0;
        VAR_6 = FUNC_2(VAR_5, VAR_2, VAR_3->extended_data);
    }

    VAR_2->size = VAR_6;
    *VAR_4 = 1;
    return 0;
}
