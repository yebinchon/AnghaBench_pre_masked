
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int channels_for_cur_subframe; int* channel_indexes_for_cur_subframe; int subframe_len; float** windows; TYPE_2__* channel; TYPE_1__* fdsp; } ;
typedef TYPE_3__ WMAProDecodeCtx ;
struct TYPE_6__ {int prev_block_len; float* coeffs; } ;
struct TYPE_5__ {int (* vector_fmul_window ) (float*,float*,float*,float const*,int) ;} ;


 size_t VAR_0 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (float*,float*,float*,float const*,int) ;

__attribute__((used)) static void FUNC_2(WMAProDecodeCtx *VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_1->channels_for_cur_subframe; VAR_2++) {
        int VAR_3 = VAR_1->channel_indexes_for_cur_subframe[VAR_2];
        const float* VAR_4;
        int VAR_5 = VAR_1->channel[VAR_3].prev_block_len;
        float* VAR_6 = VAR_1->channel[VAR_3].coeffs - (VAR_5 >> 1);

        if (VAR_1->subframe_len < VAR_5) {
            VAR_6 += (VAR_5 - VAR_1->subframe_len) >> 1;
            VAR_5 = VAR_1->subframe_len;
        }

        VAR_4 = VAR_1->windows[FUNC_0(VAR_5) - VAR_0];

        VAR_5 >>= 1;

        VAR_1->fdsp->vector_fmul_window(VAR_6, VAR_6, VAR_6 + VAR_5,
                                   VAR_4, VAR_5);

        VAR_1->channel[VAR_3].prev_block_len = VAR_1->subframe_len;
    }
}
