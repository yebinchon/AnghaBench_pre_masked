
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
struct TYPE_16__ {int block_samples; int ch_offset; int flags; int sample_index; int * samples; TYPE_1__* avctx; int * samples_size; } ;
typedef TYPE_2__ WavPackEncodeContext ;
struct TYPE_19__ {int channels; TYPE_2__* priv_data; } ;
struct TYPE_18__ {int nb_samples; int pts; int * extended_data; } ;
struct TYPE_17__ {int size; int duration; int * data; int pts; } ;
struct TYPE_15__ {int sample_fmt; int bits_per_raw_sample; } ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_5__*,TYPE_3__*,int,int ) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int ,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_5, AVPacket *VAR_6,
                                const AVFrame *VAR_7, int *VAR_8)
{
    WavPackEncodeContext *VAR_9 = VAR_5->priv_data;
    int VAR_10, VAR_11;
    uint8_t *VAR_12;

    VAR_9->block_samples = VAR_7->nb_samples;
    FUNC_1(&VAR_9->samples[0], &VAR_9->samples_size[0],
                          sizeof(int32_t) * VAR_9->block_samples);
    if (!VAR_9->samples[0])
        return FUNC_0(VAR_0);
    if (VAR_5->channels > 1) {
        FUNC_1(&VAR_9->samples[1], &VAR_9->samples_size[1],
                              sizeof(int32_t) * VAR_9->block_samples);
        if (!VAR_9->samples[1])
            return FUNC_0(VAR_0);
    }

    VAR_10 = VAR_9->block_samples * VAR_5->channels * 8
             + 200 * VAR_5->channels ;
    if ((VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_10, 0)) < 0)
        return VAR_11;
    VAR_12 = VAR_6->data;

    for (VAR_9->ch_offset = 0; VAR_9->ch_offset < VAR_5->channels;) {
        FUNC_5(VAR_9);

        switch (VAR_9->avctx->sample_fmt) {
        case 129: VAR_9->flags |= 1; break;
        case 128: VAR_9->flags |= 3 - (VAR_9->avctx->bits_per_raw_sample <= 24); break;
        case 130: VAR_9->flags |= 3 | VAR_3;
        }

        FUNC_4(VAR_9, VAR_7->extended_data[VAR_9->ch_offset], VAR_9->samples[0], VAR_9->block_samples);
        if (VAR_5->channels - VAR_9->ch_offset == 1) {
            VAR_9->flags |= VAR_4;
        } else {
            VAR_9->flags |= VAR_2;
            FUNC_4(VAR_9, VAR_7->extended_data[VAR_9->ch_offset + 1], VAR_9->samples[1], VAR_9->block_samples);
        }

        VAR_9->flags += (1 << VAR_1) * ((VAR_9->flags & 3) * 8 + 7);

        if ((VAR_11 = FUNC_6(VAR_9, VAR_9->samples[0], VAR_9->samples[1],
                                        VAR_12, VAR_10)) < 0)
            return VAR_11;

        VAR_12 += VAR_11;
        VAR_10 -= VAR_11;
    }
    VAR_9->sample_index += VAR_7->nb_samples;

    VAR_6->pts = VAR_7->pts;
    VAR_6->size = VAR_12 - VAR_6->data;
    VAR_6->duration = FUNC_3(VAR_5, VAR_7->nb_samples);
    *VAR_8 = 1;
    return 0;
}
