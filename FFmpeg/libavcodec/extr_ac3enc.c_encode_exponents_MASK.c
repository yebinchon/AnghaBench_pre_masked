
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_7__ {int* end_freq; int cpl_in_use; scalar_t__** exp; } ;
struct TYPE_5__ {int (* ac3_exponent_min ) (scalar_t__*,int,int) ;} ;
struct TYPE_6__ {int channels; int* start_freq; int num_blocks; int** exp_ref_block; scalar_t__ ref_bap_set; TYPE_1__ ac3dsp; TYPE_3__* blocks; scalar_t__** exp_strategy; int cpl_on; } ;
typedef TYPE_2__ AC3EncodeContext ;
typedef TYPE_3__ AC3Block ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__*,int,scalar_t__,int) ;
 int FUNC_1 (scalar_t__*,int,int) ;

__attribute__((used)) static void FUNC_2(AC3EncodeContext *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7;
    uint8_t *VAR_8, *VAR_9;
    int VAR_10, VAR_11;

    for (VAR_6 = !VAR_3->cpl_on; VAR_6 <= VAR_3->channels; VAR_6++) {
        VAR_8 = VAR_3->blocks[0].exp[VAR_6] + VAR_3->start_freq[VAR_6];
        VAR_9 = VAR_3->exp_strategy[VAR_6];

        VAR_7 = (VAR_6 == VAR_1);
        VAR_4 = 0;
        while (VAR_4 < VAR_3->num_blocks) {
            AC3Block *VAR_12 = &VAR_3->blocks[VAR_4];
            if (VAR_7 && !VAR_12->cpl_in_use) {
                VAR_8 += VAR_0;
                VAR_4++;
                continue;
            }
            VAR_10 = VAR_12->end_freq[VAR_6] - VAR_3->start_freq[VAR_6];
            VAR_5 = VAR_4 + 1;



            VAR_3->exp_ref_block[VAR_6][VAR_4] = VAR_4;
            while (VAR_5 < VAR_3->num_blocks && VAR_9[VAR_5] == VAR_2) {
                VAR_3->exp_ref_block[VAR_6][VAR_5] = VAR_4;
                VAR_5++;
            }
            VAR_11 = VAR_5 - VAR_4 - 1;


            VAR_3->ac3dsp.ac3_exponent_min(VAR_8-VAR_3->start_freq[VAR_6], VAR_11,
                                       VAR_0);

            FUNC_0(VAR_8, VAR_10, VAR_9[VAR_4], VAR_7);

            VAR_8 += VAR_0 * (VAR_11 + 1);
            VAR_4 = VAR_5;
        }
    }


    VAR_3->ref_bap_set = 0;
}
