
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int table; } ;
struct TYPE_8__ {int codebook; int huff_lsbs; scalar_t__ sign_huff_offset; } ;
struct TYPE_7__ {int** sample_buffer; int ** bypassed_lsbs; TYPE_1__* substream; } ;
struct TYPE_6__ {unsigned int num_primitive_matrices; unsigned int blockpos; unsigned int min_channel; unsigned int max_channel; int* quant_step_size; TYPE_3__* channel_params; scalar_t__* lsb_bypass; } ;
typedef TYPE_1__ SubStream ;
typedef TYPE_2__ MLPDecodeContext ;
typedef int GetBitContext ;
typedef TYPE_3__ ChannelParams ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int,int) ;
 TYPE_5__* VAR_2 ;

__attribute__((used)) static inline int FUNC_3(MLPDecodeContext *VAR_3, GetBitContext *VAR_4,
                                     unsigned int VAR_5, unsigned int VAR_6)
{
    SubStream *VAR_7 = &VAR_3->substream[VAR_5];
    unsigned int VAR_8, VAR_9;

    for (VAR_8 = 0; VAR_8 < VAR_7->num_primitive_matrices; VAR_8++)
        if (VAR_7->lsb_bypass[VAR_8])
            VAR_3->bypassed_lsbs[VAR_6 + VAR_7->blockpos][VAR_8] = FUNC_1(VAR_4);

    for (VAR_9 = VAR_7->min_channel; VAR_9 <= VAR_7->max_channel; VAR_9++) {
        ChannelParams *VAR_10 = &VAR_7->channel_params[VAR_9];
        int VAR_11 = VAR_10->codebook;
        int VAR_12 = VAR_7->quant_step_size[VAR_9];
        int VAR_13 = VAR_10->huff_lsbs - VAR_12;
        int VAR_14 = 0;

        if (VAR_11 > 0)
            VAR_14 = FUNC_2(VAR_4, VAR_2[VAR_11-1].table,
                            VAR_1, (9 + VAR_1 - 1) / VAR_1);

        if (VAR_14 < 0)
            return VAR_0;

        if (VAR_13 > 0)
            VAR_14 = (VAR_14 << VAR_13) + FUNC_0(VAR_4, VAR_13);

        VAR_14 += VAR_10->sign_huff_offset;
        VAR_14 *= 1 << VAR_12;

        VAR_3->sample_buffer[VAR_6 + VAR_7->blockpos][VAR_9] = VAR_14;
    }

    return 0;
}
