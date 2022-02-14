
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ sample_fmt; } ;
struct TYPE_14__ {scalar_t__ codebook; scalar_t__ huff_lsbs; int sign_huff_offset; } ;
struct TYPE_11__ {int (* mlp_select_pack_output ) (int ,scalar_t__*,unsigned int,int) ;int mlp_pack_output; } ;
struct TYPE_13__ {int access_unit_size; unsigned int max_decoded_substream; TYPE_9__* avctx; TYPE_1__ dsp; TYPE_2__* substream; } ;
struct TYPE_12__ {int param_presence_flags; int blocksize; unsigned int max_matrix_channel; scalar_t__* output_shift; unsigned int max_channel; scalar_t__* quant_step_size; unsigned int min_channel; TYPE_4__* channel_params; int ch_assign; } ;
typedef TYPE_2__ SubStream ;
typedef TYPE_3__ MLPDecodeContext ;
typedef int GetBitContext ;
typedef TYPE_4__ ChannelParams ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_9__*,int ,char*) ;
 int FUNC_1 (TYPE_9__*,char*) ;
 int FUNC_2 (TYPE_3__*,unsigned int,unsigned int) ;
 void* FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_3__*,unsigned int,int *,unsigned int) ;
 int FUNC_7 (TYPE_3__*,unsigned int,int *) ;
 int FUNC_8 (int ,scalar_t__*,unsigned int,int) ;

__attribute__((used)) static int FUNC_9(MLPDecodeContext *VAR_8, GetBitContext *VAR_9,
                                unsigned int VAR_10)
{
    SubStream *VAR_11 = &VAR_8->substream[VAR_10];
    unsigned int VAR_12;
    int VAR_13 = 0;
    unsigned VAR_14 = 0;

    if (VAR_11->param_presence_flags & VAR_6)
        if (FUNC_4(VAR_9))
            VAR_11->param_presence_flags = FUNC_3(VAR_9, 8);

    if (VAR_11->param_presence_flags & VAR_3)
        if (FUNC_4(VAR_9)) {
            VAR_11->blocksize = FUNC_3(VAR_9, 9);
            if (VAR_11->blocksize < 8 || VAR_11->blocksize > VAR_8->access_unit_size) {
                FUNC_0(VAR_8->avctx, VAR_1, "Invalid blocksize.\n");
                VAR_11->blocksize = 0;
                return VAR_0;
            }
        }

    if (VAR_11->param_presence_flags & VAR_4)
        if (FUNC_4(VAR_9))
            if ((VAR_13 = FUNC_7(VAR_8, VAR_10, VAR_9)) < 0)
                return VAR_13;

    if (VAR_11->param_presence_flags & VAR_5)
        if (FUNC_4(VAR_9)) {
            for (VAR_12 = 0; VAR_12 <= VAR_11->max_matrix_channel; VAR_12++) {
                VAR_11->output_shift[VAR_12] = FUNC_5(VAR_9, 4);
                if (VAR_11->output_shift[VAR_12] < 0) {
                    FUNC_1(VAR_8->avctx, "Negative output_shift");
                    VAR_11->output_shift[VAR_12] = 0;
                }
            }
            if (VAR_10 == VAR_8->max_decoded_substream)
                VAR_8->dsp.mlp_pack_output = VAR_8->dsp.mlp_select_pack_output(VAR_11->ch_assign,
                                                                       VAR_11->output_shift,
                                                                       VAR_11->max_matrix_channel,
                                                                       VAR_8->avctx->sample_fmt == VAR_2);
        }

    if (VAR_11->param_presence_flags & VAR_7)
        if (FUNC_4(VAR_9))
            for (VAR_12 = 0; VAR_12 <= VAR_11->max_channel; VAR_12++) {
                VAR_11->quant_step_size[VAR_12] = FUNC_3(VAR_9, 4);

                VAR_14 |= 1<<VAR_12;
            }

    for (VAR_12 = VAR_11->min_channel; VAR_12 <= VAR_11->max_channel; VAR_12++)
        if (FUNC_4(VAR_9)) {
            VAR_14 |= 1<<VAR_12;
            if ((VAR_13 = FUNC_6(VAR_8, VAR_10, VAR_9, VAR_12)) < 0)
                goto fail;
        }


fail:
    for (VAR_12 = 0; VAR_12 <= VAR_11->max_channel; VAR_12++) {
        if (VAR_14 & (1<<VAR_12)) {
            ChannelParams *VAR_15 = &VAR_11->channel_params[VAR_12];

            if (VAR_15->codebook > 0 && VAR_15->huff_lsbs < VAR_11->quant_step_size[VAR_12]) {
                if (VAR_13 >= 0) {
                    FUNC_0(VAR_8->avctx, VAR_1, "quant_step_size larger than huff_lsbs\n");
                    VAR_13 = VAR_0;
                }
                VAR_11->quant_step_size[VAR_12] = 0;
            }

            VAR_15->sign_huff_offset = FUNC_2(VAR_8, VAR_10, VAR_12);
        }
    }
    return VAR_13;
}
