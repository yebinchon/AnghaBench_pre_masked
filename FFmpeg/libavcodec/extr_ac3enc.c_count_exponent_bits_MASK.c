
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* end_freq; int cpl_in_use; } ;
struct TYPE_4__ {int num_blocks; int channels; int** exp_strategy; int* start_freq; TYPE_2__* blocks; } ;
typedef TYPE_1__ AC3EncodeContext ;
typedef TYPE_2__ AC3Block ;


 int VAR_0 ;
 int VAR_1 ;
 int*** VAR_2 ;

__attribute__((used)) static int FUNC_0(AC3EncodeContext *VAR_3)
{
    int VAR_4, VAR_5;
    int VAR_6, VAR_7;

    VAR_7 = 0;
    for (VAR_4 = 0; VAR_4 < VAR_3->num_blocks; VAR_4++) {
        AC3Block *VAR_8 = &VAR_3->blocks[VAR_4];
        for (VAR_5 = !VAR_8->cpl_in_use; VAR_5 <= VAR_3->channels; VAR_5++) {
            int VAR_9 = VAR_3->exp_strategy[VAR_5][VAR_4];
            int VAR_10 = (VAR_5 == VAR_0);
            int VAR_11 = VAR_8->end_freq[VAR_5] - VAR_3->start_freq[VAR_5];

            if (VAR_9 == VAR_1)
                continue;

            VAR_6 = VAR_2[VAR_10][VAR_9-1][VAR_11];
            VAR_7 += 4 + (VAR_6 * 7);
        }
    }

    return VAR_7;
}
