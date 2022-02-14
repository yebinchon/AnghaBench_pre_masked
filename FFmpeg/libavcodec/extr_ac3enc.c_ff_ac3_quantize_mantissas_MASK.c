
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * end_freq; int * qmant; int * exp; int * fixed_coef; scalar_t__* channel_in_cpl; int cpl_in_use; } ;
struct TYPE_7__ {int num_blocks; int channels; size_t** exp_ref_block; int * start_freq; int ** ref_bap; TYPE_3__* blocks; } ;
struct TYPE_6__ {int member_0; } ;
typedef TYPE_1__ AC3Mant ;
typedef TYPE_2__ AC3EncodeContext ;
typedef TYPE_3__ AC3Block ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ,int ,int ) ;

void FUNC_1(AC3EncodeContext *VAR_1)
{
    int VAR_2, VAR_3, VAR_4=0, VAR_5;

    for (VAR_2 = 0; VAR_2 < VAR_1->num_blocks; VAR_2++) {
        AC3Block *VAR_6 = &VAR_1->blocks[VAR_2];
        AC3Mant VAR_7 = { 0 };

        VAR_5 = !VAR_6->cpl_in_use;
        for (VAR_3 = 1; VAR_3 <= VAR_1->channels; VAR_3++) {
            if (!VAR_5 && VAR_3 > 1 && VAR_6->channel_in_cpl[VAR_3-1]) {
                VAR_4 = VAR_3 - 1;
                VAR_3 = VAR_0;
                VAR_5 = 1;
            }
            FUNC_0(&VAR_7, VAR_6->fixed_coef[VAR_3],
                                      VAR_1->blocks[VAR_1->exp_ref_block[VAR_3][VAR_2]].exp[VAR_3],
                                      VAR_1->ref_bap[VAR_3][VAR_2], VAR_6->qmant[VAR_3],
                                      VAR_1->start_freq[VAR_3], VAR_6->end_freq[VAR_3]);
            if (VAR_3 == VAR_0)
                VAR_3 = VAR_4;
        }
    }
}
