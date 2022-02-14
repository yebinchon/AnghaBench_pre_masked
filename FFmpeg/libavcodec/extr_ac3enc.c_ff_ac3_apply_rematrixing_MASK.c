
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int int32_t ;
struct TYPE_5__ {int* end_freq; int num_rematrixing_bands; int** fixed_coef; scalar_t__* rematrixing_flags; scalar_t__ new_rematrixing_strategy; } ;
struct TYPE_4__ {int num_blocks; TYPE_2__* blocks; int rematrixing_enabled; } ;
typedef TYPE_1__ AC3EncodeContext ;
typedef TYPE_2__ AC3Block ;


 int FUNC_0 (int,int) ;
 int* VAR_0 ;

void FUNC_1(AC3EncodeContext *VAR_1)
{
    int VAR_2;
    int VAR_3, VAR_4, VAR_5;
    int VAR_6, VAR_7;
    uint8_t *VAR_8 = ((void*)0);

    if (!VAR_1->rematrixing_enabled)
        return;

    for (VAR_3 = 0; VAR_3 < VAR_1->num_blocks; VAR_3++) {
        AC3Block *VAR_9 = &VAR_1->blocks[VAR_3];
        if (VAR_9->new_rematrixing_strategy)
            VAR_8 = VAR_9->rematrixing_flags;
        VAR_2 = FUNC_0(VAR_9->end_freq[1], VAR_9->end_freq[2]);
        for (VAR_4 = 0; VAR_4 < VAR_9->num_rematrixing_bands; VAR_4++) {
            if (VAR_8[VAR_4]) {
                VAR_6 = VAR_0[VAR_4];
                VAR_7 = FUNC_0(VAR_2, VAR_0[VAR_4+1]);
                for (VAR_5 = VAR_6; VAR_5 < VAR_7; VAR_5++) {
                    int32_t VAR_10 = VAR_9->fixed_coef[1][VAR_5];
                    int32_t VAR_11 = VAR_9->fixed_coef[2][VAR_5];
                    VAR_9->fixed_coef[1][VAR_5] = (VAR_10 + VAR_11) >> 1;
                    VAR_9->fixed_coef[2][VAR_5] = (VAR_10 - VAR_11) >> 1;
                }
            }
        }
    }
}
