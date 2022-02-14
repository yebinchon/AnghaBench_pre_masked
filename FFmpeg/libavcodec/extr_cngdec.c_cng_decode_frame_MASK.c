
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_14__ {int frame_size; TYPE_1__* internal; TYPE_2__* priv_data; } ;
struct TYPE_13__ {int nb_samples; scalar_t__* data; } ;
struct TYPE_12__ {int size; int* data; } ;
struct TYPE_11__ {int target_energy; int* target_refl_coef; int order; int inited; int energy; double* refl_coef; float* excitation; double* filter_out; int lpc_coef; int lfg; } ;
struct TYPE_10__ {int skip_samples; } ;
typedef TYPE_2__ CNGContext ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (double) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (double*,int ,float*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_6 (int ,double*,int) ;
 int FUNC_7 (double*,double*,int) ;
 int FUNC_8 (int*,int ,int) ;
 float FUNC_9 (float) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_1, void *VAR_2,
                            int *VAR_3, AVPacket *VAR_4)
{
    AVFrame *VAR_5 = VAR_2;
    CNGContext *VAR_6 = VAR_1->priv_data;
    int VAR_7 = VAR_4->size;
    int VAR_8, VAR_9;
    int16_t *VAR_10;
    float VAR_11 = 1.0;
    float VAR_12;

    if (VAR_4->size) {
        int VAR_13 = -VAR_4->data[0];
        VAR_6->target_energy = 1081109975 * FUNC_4(VAR_13 / 10.0) * 0.75;
        FUNC_8(VAR_6->target_refl_coef, 0, VAR_6->order * sizeof(*VAR_6->target_refl_coef));
        for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4->size - 1, VAR_6->order); VAR_9++) {
            VAR_6->target_refl_coef[VAR_9] = (VAR_4->data[1 + VAR_9] - 127) / 128.0;
        }
    }

    if (VAR_1->internal->skip_samples > 10 * VAR_1->frame_size) {
        VAR_1->internal->skip_samples = 0;
        return VAR_0;
    }

    if (VAR_6->inited) {
        VAR_6->energy = VAR_6->energy / 2 + VAR_6->target_energy / 2;
        for (VAR_9 = 0; VAR_9 < VAR_6->order; VAR_9++)
            VAR_6->refl_coef[VAR_9] = 0.6 *VAR_6->refl_coef[VAR_9] + 0.4 * VAR_6->target_refl_coef[VAR_9];
    } else {
        VAR_6->energy = VAR_6->target_energy;
        FUNC_7(VAR_6->refl_coef, VAR_6->target_refl_coef, VAR_6->order * sizeof(*VAR_6->refl_coef));
        VAR_6->inited = 1;
    }
    FUNC_6(VAR_6->lpc_coef, VAR_6->refl_coef, VAR_6->order);

    for (VAR_9 = 0; VAR_9 < VAR_6->order; VAR_9++)
        VAR_11 *= 1.0 - VAR_6->refl_coef[VAR_9]*VAR_6->refl_coef[VAR_9];

    VAR_12 = FUNC_9(VAR_11 * VAR_6->energy / 1081109975);
    for (VAR_9 = 0; VAR_9 < VAR_1->frame_size; VAR_9++) {
        int VAR_14 = (FUNC_2(&VAR_6->lfg) & 0xffff) - 0x8000;
        VAR_6->excitation[VAR_9] = VAR_12 * VAR_14;
    }
    FUNC_3(VAR_6->filter_out + VAR_6->order, VAR_6->lpc_coef,
                                 VAR_6->excitation, VAR_1->frame_size, VAR_6->order);

    VAR_5->nb_samples = VAR_1->frame_size;
    if ((VAR_8 = FUNC_5(VAR_1, VAR_5, 0)) < 0)
        return VAR_8;
    VAR_10 = (int16_t *)VAR_5->data[0];
    for (VAR_9 = 0; VAR_9 < VAR_1->frame_size; VAR_9++)
        VAR_10[VAR_9] = FUNC_1(VAR_6->filter_out[VAR_9 + VAR_6->order]);
    FUNC_7(VAR_6->filter_out, VAR_6->filter_out + VAR_1->frame_size,
           VAR_6->order * sizeof(*VAR_6->filter_out));

    *VAR_3 = 1;

    return VAR_7;
}
