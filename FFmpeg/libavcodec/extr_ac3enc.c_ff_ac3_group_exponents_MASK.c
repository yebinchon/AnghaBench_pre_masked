
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {size_t* end_freq; int** grouped_exp; int * exp; int cpl_in_use; } ;
struct TYPE_4__ {int num_blocks; int channels; int** exp_strategy; size_t* start_freq; TYPE_2__* blocks; } ;
typedef TYPE_1__ AC3EncodeContext ;
typedef TYPE_2__ AC3Block ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int*** VAR_3 ;

void FUNC_1(AC3EncodeContext *VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8;
    int VAR_9, VAR_10;
    uint8_t *VAR_11;
    int VAR_12, VAR_13, VAR_14;
    int VAR_15, VAR_16;

    for (VAR_5 = 0; VAR_5 < VAR_4->num_blocks; VAR_5++) {
        AC3Block *VAR_17 = &VAR_4->blocks[VAR_5];
        for (VAR_6 = !VAR_17->cpl_in_use; VAR_6 <= VAR_4->channels; VAR_6++) {
            int VAR_18 = VAR_4->exp_strategy[VAR_6][VAR_5];
            if (VAR_18 == VAR_2)
                continue;
            VAR_8 = (VAR_6 == VAR_0);
            VAR_9 = VAR_18 + (VAR_18 == VAR_1);
            VAR_10 = VAR_3[VAR_8][VAR_18-1][VAR_17->end_freq[VAR_6]-VAR_4->start_freq[VAR_6]];
            VAR_11 = VAR_17->exp[VAR_6] + VAR_4->start_freq[VAR_6] - VAR_8;


            VAR_16 = *VAR_11++;
            VAR_17->grouped_exp[VAR_6][0] = VAR_16;


            for (VAR_7 = 1; VAR_7 <= VAR_10; VAR_7++) {

                VAR_15 = VAR_16;
                VAR_16 = VAR_11[0];
                VAR_11 += VAR_9;
                VAR_12 = VAR_16 - VAR_15 + 2;
                FUNC_0(VAR_12 >= 0 && VAR_12 <= 4);

                VAR_15 = VAR_16;
                VAR_16 = VAR_11[0];
                VAR_11 += VAR_9;
                VAR_13 = VAR_16 - VAR_15 + 2;
                FUNC_0(VAR_13 >= 0 && VAR_13 <= 4);

                VAR_15 = VAR_16;
                VAR_16 = VAR_11[0];
                VAR_11 += VAR_9;
                VAR_14 = VAR_16 - VAR_15 + 2;
                FUNC_0(VAR_14 >= 0 && VAR_14 <= 4);

                VAR_17->grouped_exp[VAR_6][VAR_7] = ((VAR_12 * 5 + VAR_13) * 5) + VAR_14;
            }
        }
    }
}
