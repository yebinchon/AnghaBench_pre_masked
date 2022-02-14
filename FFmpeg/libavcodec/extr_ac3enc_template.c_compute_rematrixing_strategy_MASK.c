
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int new_rematrixing_strategy; int num_rematrixing_bands; int* end_freq; int* rematrixing_flags; scalar_t__* mdct_coef; scalar_t__ cpl_in_use; } ;
struct TYPE_5__ {scalar_t__ channel_mode; int num_blocks; int* start_freq; int rematrixing_enabled; TYPE_2__* blocks; } ;
typedef int CoefSumType ;
typedef TYPE_1__ AC3EncodeContext ;
typedef TYPE_2__ AC3Block ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int* VAR_2 ;
 int FUNC_1 (TYPE_1__*,int*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(AC3EncodeContext *VAR_3)
{
    int VAR_4;
    int VAR_5, VAR_6;
    AC3Block *VAR_7, *VAR_8 = ((void*)0);

    if (VAR_3->channel_mode != VAR_0)
        return;

    for (VAR_5 = 0; VAR_5 < VAR_3->num_blocks; VAR_5++) {
        VAR_7 = &VAR_3->blocks[VAR_5];
        VAR_7->new_rematrixing_strategy = !VAR_5;

        VAR_7->num_rematrixing_bands = 4;
        if (VAR_7->cpl_in_use) {
            VAR_7->num_rematrixing_bands -= (VAR_3->start_freq[VAR_1] <= 61);
            VAR_7->num_rematrixing_bands -= (VAR_3->start_freq[VAR_1] == 37);
            if (VAR_5 && VAR_7->num_rematrixing_bands != VAR_8->num_rematrixing_bands)
                VAR_7->new_rematrixing_strategy = 1;
        }
        VAR_4 = FUNC_0(VAR_7->end_freq[1], VAR_7->end_freq[2]);

        if (!VAR_3->rematrixing_enabled) {
            VAR_8 = VAR_7;
            continue;
        }

        for (VAR_6 = 0; VAR_6 < VAR_7->num_rematrixing_bands; VAR_6++) {

            int VAR_9 = VAR_2[VAR_6];
            int VAR_10 = FUNC_0(VAR_4, VAR_2[VAR_6+1]);
            CoefSumType VAR_11[4];
            FUNC_1(VAR_3, VAR_11, VAR_7->mdct_coef[1] + VAR_9,
                                 VAR_7->mdct_coef[2] + VAR_9, VAR_10 - VAR_9);


            if (FUNC_0(VAR_11[2], VAR_11[3]) < FUNC_0(VAR_11[0], VAR_11[1]))
                VAR_7->rematrixing_flags[VAR_6] = 1;
            else
                VAR_7->rematrixing_flags[VAR_6] = 0;


            if (VAR_5 &&
                VAR_7->rematrixing_flags[VAR_6] != VAR_8->rematrixing_flags[VAR_6]) {
                VAR_7->new_rematrixing_strategy = 1;
            }
        }
        VAR_8 = VAR_7;
    }
}
