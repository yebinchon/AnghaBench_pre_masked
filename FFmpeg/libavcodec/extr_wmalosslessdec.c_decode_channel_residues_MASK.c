
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* transient; int* transient_pos; int samples_per_frame; int bits_per_sample; unsigned int* ave_sum; int movave_scaling; int** channel_residues; int gb; scalar_t__ do_inter_ch_decorr; scalar_t__ seekable_tile; TYPE_1__* channel; } ;
typedef TYPE_2__ WmallDecodeCtx ;
struct TYPE_4__ {scalar_t__ transient_counter; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 void* FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(WmallDecodeCtx *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3 = 0;
    unsigned int VAR_4;
    VAR_0->transient[VAR_1] = FUNC_4(&VAR_0->gb);
    if (VAR_0->transient[VAR_1]) {
        VAR_0->transient_pos[VAR_1] = FUNC_3(&VAR_0->gb, FUNC_2(VAR_2));
        if (VAR_0->transient_pos[VAR_1])
            VAR_0->transient[VAR_1] = 0;
        VAR_0->channel[VAR_1].transient_counter =
            FUNC_0(VAR_0->channel[VAR_1].transient_counter, VAR_0->samples_per_frame / 2);
    } else if (VAR_0->channel[VAR_1].transient_counter)
        VAR_0->transient[VAR_1] = 1;

    if (VAR_0->seekable_tile) {
        VAR_4 = FUNC_3(&VAR_0->gb, VAR_0->bits_per_sample);
        VAR_0->ave_sum[VAR_1] = VAR_4 << (VAR_0->movave_scaling + 1);
    }

    if (VAR_0->seekable_tile) {
        if (VAR_0->do_inter_ch_decorr)
            VAR_0->channel_residues[VAR_1][0] = FUNC_7(&VAR_0->gb, VAR_0->bits_per_sample + 1);
        else
            VAR_0->channel_residues[VAR_1][0] = FUNC_7(&VAR_0->gb, VAR_0->bits_per_sample);
        VAR_3++;
    }
    for (; VAR_3 < VAR_2; VAR_3++) {
        int VAR_5 = 0, VAR_6, VAR_7, VAR_8;
        while(FUNC_4(&VAR_0->gb)) {
            VAR_5++;
            if (FUNC_5(&VAR_0->gb) <= 0)
                return -1;
        }
        if (VAR_5 >= 32)
            VAR_5 += FUNC_6(&VAR_0->gb, FUNC_3(&VAR_0->gb, 5) + 1);

        VAR_4 = (VAR_0->ave_sum[VAR_1] + (1 << VAR_0->movave_scaling)) >> (VAR_0->movave_scaling + 1);
        if (VAR_4 <= 1)
            VAR_8 = VAR_5;
        else {
            VAR_7 = FUNC_1(VAR_4);
            VAR_6 = FUNC_6(&VAR_0->gb, VAR_7);
            VAR_8 = (VAR_5 << VAR_7) + VAR_6;
        }

        VAR_0->ave_sum[VAR_1] = VAR_8 + VAR_0->ave_sum[VAR_1] -
                         (VAR_0->ave_sum[VAR_1] >> VAR_0->movave_scaling);

        VAR_8 = (VAR_8 >> 1) ^ -(VAR_8 & 1);
        VAR_0->channel_residues[VAR_1][VAR_3] = VAR_8;
    }

    return 0;

}
