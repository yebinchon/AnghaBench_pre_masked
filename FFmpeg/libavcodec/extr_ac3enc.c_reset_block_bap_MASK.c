
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int ref_bap_set; int channels; int num_blocks; int** exp_ref_block; int *** ref_bap; int * bap_buffer; } ;
typedef TYPE_1__ AC3EncodeContext ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(AC3EncodeContext *VAR_1)
{
    int VAR_2, VAR_3;
    uint8_t *VAR_4;

    if (VAR_1->ref_bap[0][0] == VAR_1->bap_buffer && VAR_1->ref_bap_set)
        return;

    VAR_4 = VAR_1->bap_buffer;
    for (VAR_3 = 0; VAR_3 <= VAR_1->channels; VAR_3++) {
        for (VAR_2 = 0; VAR_2 < VAR_1->num_blocks; VAR_2++)
            VAR_1->ref_bap[VAR_3][VAR_2] = VAR_4 + VAR_0 * VAR_1->exp_ref_block[VAR_3][VAR_2];
        VAR_4 += VAR_0 * VAR_1->num_blocks;
    }
    VAR_1->ref_bap_set = 1;
}
