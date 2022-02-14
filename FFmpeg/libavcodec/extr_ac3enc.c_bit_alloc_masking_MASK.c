
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * mask; int * end_freq; int * band_psd; int * psd; int * exp; int cpl_in_use; } ;
struct TYPE_4__ {int num_blocks; int channels; scalar_t__** exp_strategy; size_t* fast_gain_code; int lfe_channel; int * start_freq; int bit_alloc; TYPE_2__* blocks; } ;
typedef TYPE_1__ AC3EncodeContext ;
typedef TYPE_2__ AC3Block ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int,int ,int ,int *,int *,int *,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_2(AC3EncodeContext *VAR_3)
{
    int VAR_4, VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_3->num_blocks; VAR_4++) {
        AC3Block *VAR_6 = &VAR_3->blocks[VAR_4];
        for (VAR_5 = !VAR_6->cpl_in_use; VAR_5 <= VAR_3->channels; VAR_5++) {



            if (VAR_3->exp_strategy[VAR_5][VAR_4] != VAR_1) {
                FUNC_1(VAR_6->exp[VAR_5], VAR_3->start_freq[VAR_5],
                                          VAR_6->end_freq[VAR_5], VAR_6->psd[VAR_5],
                                          VAR_6->band_psd[VAR_5]);
                FUNC_0(&VAR_3->bit_alloc, VAR_6->band_psd[VAR_5],
                                           VAR_3->start_freq[VAR_5], VAR_6->end_freq[VAR_5],
                                           VAR_2[VAR_3->fast_gain_code[VAR_5]],
                                           VAR_5 == VAR_3->lfe_channel,
                                           VAR_0, 0, ((void*)0), ((void*)0), ((void*)0),
                                           VAR_6->mask[VAR_5]);
            }
        }
    }
}
