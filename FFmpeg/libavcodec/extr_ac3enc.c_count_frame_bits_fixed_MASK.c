
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int num_blocks; int fbw_channels; int num_blks_code; size_t channel_mode; int frame_bits_fixed; scalar_t__ eac3; scalar_t__ lfe_on; scalar_t__ use_frame_exp_strategy; } ;
typedef TYPE_1__ AC3EncodeContext ;



__attribute__((used)) static void FUNC_0(AC3EncodeContext *VAR_0)
{
    static const uint8_t VAR_1[8] = { 0, 0, 2, 2, 2, 4, 2, 4 };
    int VAR_2;
    int VAR_3;
    VAR_3 = 16;
    if (VAR_0->eac3) {

        VAR_3 += 35;
        VAR_3 += 1 + 1;
        if (VAR_0->num_blocks != 0x6)
            VAR_3++;
        VAR_3++;

        if (VAR_0->num_blocks == 6)
            VAR_3 += 2;
        VAR_3 += 10;

        if (VAR_0->use_frame_exp_strategy)
            VAR_3 += 5 * VAR_0->fbw_channels;
        else
            VAR_3 += VAR_0->num_blocks * 2 * VAR_0->fbw_channels;
        if (VAR_0->lfe_on)
            VAR_3 += VAR_0->num_blocks;

        if (VAR_0->num_blks_code != 0x3)
            VAR_3++;
        else
            VAR_3 += VAR_0->fbw_channels * 5;

        VAR_3 += 10;

        if (VAR_0->num_blocks != 1)
            VAR_3++;
    } else {
        VAR_3 += 49;
        VAR_3 += VAR_1[VAR_0->channel_mode];
    }


    for (VAR_2 = 0; VAR_2 < VAR_0->num_blocks; VAR_2++) {
        if (!VAR_0->eac3) {

            VAR_3 += VAR_0->fbw_channels;


            VAR_3 += VAR_0->fbw_channels;
        }


        VAR_3++;


        if (VAR_0->eac3)
            VAR_3++;

        if (!VAR_0->eac3) {

            VAR_3 += 2 * VAR_0->fbw_channels;
            if (VAR_0->lfe_on)
                VAR_3++;


            VAR_3++;
            if (!VAR_2)
                VAR_3 += 2 + 2 + 2 + 2 + 3;
        }


        if (VAR_0->eac3)
            VAR_3++;

        if (!VAR_0->eac3) {

            VAR_3++;


            VAR_3++;
        }
    }


    VAR_3++;


    VAR_3 += 1 + 16;

    VAR_0->frame_bits_fixed = VAR_3;
}
