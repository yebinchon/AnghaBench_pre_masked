
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_9__ {int huff_lsbs; int codebook; int huff_offset; } ;
struct TYPE_8__ {int* quant_step_size; unsigned int blocksize; } ;
struct TYPE_7__ {int* write_buffer; TYPE_4__* cur_channel_params; TYPE_1__* cur_restart_header; TYPE_3__* cur_decoding_params; } ;
struct TYPE_6__ {unsigned int min_channel; unsigned int max_channel; } ;
typedef TYPE_1__ RestartHeader ;
typedef int PutBitContext ;
typedef TYPE_2__ MLPEncodeContext ;
typedef TYPE_3__ DecodingParams ;
typedef TYPE_4__ ChannelParams ;


 int VAR_0 ;
 int *** VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static void FUNC_2(MLPEncodeContext *VAR_2, PutBitContext *VAR_3)
{
    DecodingParams *VAR_4 = VAR_2->cur_decoding_params;
    RestartHeader *VAR_5 = VAR_2->cur_restart_header;
    int32_t *VAR_6 = VAR_2->write_buffer;
    int32_t VAR_7[VAR_0];
    int VAR_8 [VAR_0];
    int VAR_9 [VAR_0];
    unsigned int VAR_10, VAR_11;

    for (VAR_11 = VAR_5->min_channel; VAR_11 <= VAR_5->max_channel; VAR_11++) {
        ChannelParams *VAR_12 = &VAR_2->cur_channel_params[VAR_11];
        int VAR_13;

        VAR_9 [VAR_11] = VAR_12->huff_lsbs - VAR_4->quant_step_size[VAR_11];
        VAR_8 [VAR_11] = VAR_12->codebook - 1;
        VAR_7[VAR_11] = VAR_12->huff_offset;

        VAR_13 = VAR_9[VAR_11] - 1;

        if (VAR_12->codebook > 0) {
            VAR_7[VAR_11] -= 7 << VAR_9[VAR_11];
            VAR_13 += 3 - VAR_12->codebook;
        }


        if (VAR_13 >= 0)
            VAR_7[VAR_11] -= 1 << VAR_13;
    }

    for (VAR_10 = 0; VAR_10 < VAR_4->blocksize; VAR_10++) {
        for (VAR_11 = VAR_5->min_channel; VAR_11 <= VAR_5->max_channel; VAR_11++) {
            int32_t VAR_14 = *VAR_6++ >> VAR_4->quant_step_size[VAR_11];

            VAR_14 -= VAR_7[VAR_11];

            if (VAR_8[VAR_11] >= 0) {
                int VAR_15 = VAR_14 >> VAR_9[VAR_11];
                FUNC_0(VAR_3, VAR_1[VAR_8[VAR_11]][VAR_15][1],
                             VAR_1[VAR_8[VAR_11]][VAR_15][0]);
            }

            FUNC_1(VAR_3, VAR_9[VAR_11], VAR_14);
        }
        VAR_6 += 2;
    }

    VAR_2->write_buffer = VAR_6;
}
