
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ sample_fmt; int channels; } ;
struct TYPE_17__ {int * data; scalar_t__ nb_samples; } ;
struct TYPE_14__ {int (* mlp_pack_output ) (int ,scalar_t__,int **,int ,int ,int ,unsigned int,int) ;int (* mlp_rematrix_channel ) (int *,int ,int *,int ,unsigned int,unsigned int,scalar_t__,unsigned int,int ,int ,int ) ;} ;
struct TYPE_16__ {int ** sample_buffer; TYPE_1__ dsp; int access_unit_size_pow2; int noise_buffer; int ** bypassed_lsbs; TYPE_5__* avctx; TYPE_2__* substream; } ;
struct TYPE_15__ {int max_matrix_channel; unsigned int num_primitive_matrices; unsigned int* matrix_out_ch; int matrix_encoding; int output_shift; int ch_assign; scalar_t__ blockpos; int lossless_check_data; int * quant_step_size; int * matrix_noise_shift; int * matrix_coeff; int noise_type; } ;
typedef TYPE_2__ SubStream ;
typedef TYPE_3__ MLPDecodeContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,int ,char*) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_3__*,unsigned int) ;
 int FUNC_5 (TYPE_3__*,unsigned int) ;
 int FUNC_6 (int *,int ,int *,int ,unsigned int,unsigned int,scalar_t__,unsigned int,int ,int ,int ) ;
 int FUNC_7 (int ,scalar_t__,int **,int ,int ,int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_8(MLPDecodeContext *VAR_3, unsigned int VAR_4,
                       AVFrame *VAR_5, int *VAR_6)
{
    AVCodecContext *VAR_7 = VAR_3->avctx;
    SubStream *VAR_8 = &VAR_3->substream[VAR_4];
    unsigned int VAR_9;
    unsigned int VAR_10;
    int VAR_11;
    int VAR_12 = (VAR_3->avctx->sample_fmt == VAR_2);

    if (VAR_3->avctx->channels != VAR_8->max_matrix_channel + 1) {
        FUNC_1(VAR_3->avctx, VAR_1, "channel count mismatch\n");
        return VAR_0;
    }

    if (!VAR_8->blockpos) {
        FUNC_1(VAR_7, VAR_1, "No samples to output.\n");
        return VAR_0;
    }

    VAR_10 = VAR_8->max_matrix_channel;
    if (!VAR_8->noise_type) {
        FUNC_5(VAR_3, VAR_4);
        VAR_10 += 2;
    } else {
        FUNC_4(VAR_3, VAR_4);
    }



    for (VAR_9 = 0; VAR_9 < VAR_8->num_primitive_matrices; VAR_9++) {
        unsigned int VAR_13 = VAR_8->matrix_out_ch[VAR_9];
        VAR_3->dsp.mlp_rematrix_channel(&VAR_3->sample_buffer[0][0],
                                    VAR_8->matrix_coeff[VAR_9],
                                    &VAR_3->bypassed_lsbs[0][VAR_9],
                                    VAR_3->noise_buffer,
                                    VAR_8->num_primitive_matrices - VAR_9,
                                    VAR_13,
                                    VAR_8->blockpos,
                                    VAR_10,
                                    VAR_8->matrix_noise_shift[VAR_9],
                                    VAR_3->access_unit_size_pow2,
                                    FUNC_0(VAR_8->quant_step_size[VAR_13]));
    }


    VAR_5->nb_samples = VAR_8->blockpos;
    if ((VAR_11 = FUNC_2(VAR_7, VAR_5, 0)) < 0)
        return VAR_11;
    VAR_8->lossless_check_data = VAR_3->dsp.mlp_pack_output(VAR_8->lossless_check_data,
                                                    VAR_8->blockpos,
                                                    VAR_3->sample_buffer,
                                                    VAR_5->data[0],
                                                    VAR_8->ch_assign,
                                                    VAR_8->output_shift,
                                                    VAR_8->max_matrix_channel,
                                                    VAR_12);


    if ((VAR_11 = FUNC_3(VAR_5, VAR_8->matrix_encoding)) < 0)
        return VAR_11;

    *VAR_6 = 1;

    return 0;
}
