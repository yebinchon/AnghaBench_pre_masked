
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int int16_t ;
struct TYPE_17__ {TYPE_2__* priv_data; } ;
struct TYPE_16__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_15__ {int size; int data; } ;
struct TYPE_13__ {int (* apply_qmf ) (int*,int*) ;} ;
struct TYPE_14__ {int bits_per_codeword; int* prev_samples; int prev_samples_pos; TYPE_1__ dsp; TYPE_10__* band; } ;
struct TYPE_12__ {int const scale_factor; scalar_t__ s_predictor; } ;
typedef int GetBitContext ;
typedef TYPE_2__ G722Context ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int) ;
 int* VAR_1 ;
 int FUNC_2 (TYPE_10__*,int,int) ;
 int FUNC_3 (TYPE_10__*,int) ;
 int FUNC_4 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ,int) ;
 int** VAR_2 ;
 int FUNC_7 (int*,int*,int) ;
 int FUNC_8 (int *,int const) ;
 int FUNC_9 (int*,int*) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_3, void *VAR_4,
                             int *VAR_5, AVPacket *VAR_6)
{
    G722Context *VAR_7 = VAR_3->priv_data;
    AVFrame *VAR_8 = VAR_4;
    int16_t *VAR_9;
    int VAR_10, VAR_11;
    const int VAR_12 = 8 - VAR_7->bits_per_codeword;
    const int16_t *VAR_13 = VAR_2[VAR_12];
    GetBitContext VAR_14;


    VAR_8->nb_samples = VAR_6->size * 2;
    if ((VAR_11 = FUNC_4(VAR_3, VAR_8, 0)) < 0)
        return VAR_11;
    VAR_9 = (int16_t *)VAR_8->data[0];

    VAR_11 = FUNC_6(&VAR_14, VAR_6->data, VAR_6->size);
    if (VAR_11 < 0)
        return VAR_11;

    for (VAR_10 = 0; VAR_10 < VAR_6->size; VAR_10++) {
        int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
        int VAR_20[2];

        VAR_16 = FUNC_5(&VAR_14, 2);
        VAR_15 = FUNC_5(&VAR_14, 6 - VAR_12);
        FUNC_8(&VAR_14, VAR_12);

        VAR_17 = FUNC_1((VAR_7->band[0].scale_factor * VAR_13[VAR_15] >> 10)
                      + VAR_7->band[0].s_predictor, 14);

        FUNC_3(&VAR_7->band[0], VAR_15 >> (2 - VAR_12));

        VAR_19 = VAR_7->band[1].scale_factor * VAR_1[VAR_16] >> 10;
        VAR_18 = FUNC_1(VAR_19 + VAR_7->band[1].s_predictor, 14);

        FUNC_2(&VAR_7->band[1], VAR_19, VAR_16);

        VAR_7->prev_samples[VAR_7->prev_samples_pos++] = VAR_17 + VAR_18;
        VAR_7->prev_samples[VAR_7->prev_samples_pos++] = VAR_17 - VAR_18;
        VAR_7->dsp.apply_qmf(VAR_7->prev_samples + VAR_7->prev_samples_pos - 24, VAR_20);
        *VAR_9++ = FUNC_0(VAR_20[0] >> 11);
        *VAR_9++ = FUNC_0(VAR_20[1] >> 11);
        if (VAR_7->prev_samples_pos >= VAR_0) {
            FUNC_7(VAR_7->prev_samples, VAR_7->prev_samples + VAR_7->prev_samples_pos - 22,
                    22 * sizeof(VAR_7->prev_samples[0]));
            VAR_7->prev_samples_pos = 22;
        }
    }

    *VAR_5 = 1;

    return VAR_6->size;
}
