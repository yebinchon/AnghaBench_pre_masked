
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {float* output; scalar_t__ block_len_bits; scalar_t__ prev_block_len_bits; int block_len; int frame_len_bits; scalar_t__ next_block_len_bits; int * windows; TYPE_1__* fdsp; } ;
typedef TYPE_2__ WMACodecContext ;
struct TYPE_4__ {int (* vector_fmul_reverse ) (float*,float*,int ,int) ;int (* vector_fmul_add ) (float*,float*,int ,float*,int) ;} ;


 int FUNC_0 (float*,float*,int) ;
 int FUNC_1 (float*,int ,int) ;
 int FUNC_2 (float*,float*,int ,float*,int) ;
 int FUNC_3 (float*,float*,int ,float*,int) ;
 int FUNC_4 (float*,float*,int ,int) ;
 int FUNC_5 (float*,float*,int ,int) ;

__attribute__((used)) static void FUNC_6(WMACodecContext *VAR_0, float *VAR_1)
{
    float *VAR_2 = VAR_0->output;
    int VAR_3, VAR_4, VAR_5;


    if (VAR_0->block_len_bits <= VAR_0->prev_block_len_bits) {
        VAR_3 = VAR_0->block_len;
        VAR_4 = VAR_0->frame_len_bits - VAR_0->block_len_bits;

        VAR_0->fdsp->vector_fmul_add(VAR_1, VAR_2, VAR_0->windows[VAR_4],
                                VAR_1, VAR_3);
    } else {
        VAR_3 = 1 << VAR_0->prev_block_len_bits;
        VAR_5 = (VAR_0->block_len - VAR_3) / 2;
        VAR_4 = VAR_0->frame_len_bits - VAR_0->prev_block_len_bits;

        VAR_0->fdsp->vector_fmul_add(VAR_1 + VAR_5, VAR_2 + VAR_5, VAR_0->windows[VAR_4],
                                VAR_1 + VAR_5, VAR_3);

        FUNC_0(VAR_1 + VAR_5 + VAR_3, VAR_2 + VAR_5 + VAR_3, VAR_5 * sizeof(float));
    }

    VAR_1 += VAR_0->block_len;
    VAR_2 += VAR_0->block_len;


    if (VAR_0->block_len_bits <= VAR_0->next_block_len_bits) {
        VAR_3 = VAR_0->block_len;
        VAR_4 = VAR_0->frame_len_bits - VAR_0->block_len_bits;

        VAR_0->fdsp->vector_fmul_reverse(VAR_1, VAR_2, VAR_0->windows[VAR_4], VAR_3);
    } else {
        VAR_3 = 1 << VAR_0->next_block_len_bits;
        VAR_5 = (VAR_0->block_len - VAR_3) / 2;
        VAR_4 = VAR_0->frame_len_bits - VAR_0->next_block_len_bits;

        FUNC_0(VAR_1, VAR_2, VAR_5 * sizeof(float));

        VAR_0->fdsp->vector_fmul_reverse(VAR_1 + VAR_5, VAR_2 + VAR_5, VAR_0->windows[VAR_4],
                                    VAR_3);

        FUNC_1(VAR_1 + VAR_5 + VAR_3, 0, VAR_5 * sizeof(float));
    }
}
