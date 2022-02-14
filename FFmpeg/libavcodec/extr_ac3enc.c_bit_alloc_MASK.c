
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int * end_freq; int * psd; int * mask; int cpl_in_use; } ;
struct TYPE_9__ {int floor; } ;
struct TYPE_8__ {int (* bit_alloc_calc_bap ) (int ,int ,int ,int ,int,int ,int ,int ) ;} ;
struct TYPE_10__ {int num_blocks; int channels; scalar_t__** exp_strategy; int ** ref_bap; TYPE_2__ bit_alloc; int * start_freq; TYPE_1__ ac3dsp; TYPE_4__* blocks; } ;
typedef TYPE_3__ AC3EncodeContext ;
typedef TYPE_4__ AC3Block ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ,int ,int ,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(AC3EncodeContext *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;

    VAR_3 = (VAR_3 - 240) * 4;

    FUNC_1(VAR_2);
    for (VAR_4 = 0; VAR_4 < VAR_2->num_blocks; VAR_4++) {
        AC3Block *VAR_6 = &VAR_2->blocks[VAR_4];

        for (VAR_5 = !VAR_6->cpl_in_use; VAR_5 <= VAR_2->channels; VAR_5++) {




            if (VAR_2->exp_strategy[VAR_5][VAR_4] != VAR_0) {
                VAR_2->ac3dsp.bit_alloc_calc_bap(VAR_6->mask[VAR_5], VAR_6->psd[VAR_5],
                                             VAR_2->start_freq[VAR_5], VAR_6->end_freq[VAR_5],
                                             VAR_3, VAR_2->bit_alloc.floor,
                                             VAR_1, VAR_2->ref_bap[VAR_5][VAR_4]);
            }
        }
    }
    return FUNC_0(VAR_2);
}
