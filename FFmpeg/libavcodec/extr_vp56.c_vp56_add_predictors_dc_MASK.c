
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ ref_frame; int dc_coeff; } ;
typedef TYPE_3__ VP56RefDc ;
typedef scalar_t__ VP56Frame ;
struct TYPE_9__ {int* idct_scantable; size_t* above_block_idx; int** prev_dc; int** block_coeff; int dequant_dc; TYPE_2__* avctx; TYPE_3__* left_block; TYPE_3__* above_blocks; } ;
typedef TYPE_4__ VP56Context ;
struct TYPE_7__ {TYPE_1__* codec; } ;
struct TYPE_6__ {scalar_t__ id; } ;


 scalar_t__ VAR_0 ;
 size_t* VAR_1 ;
 size_t* VAR_2 ;

__attribute__((used)) static void FUNC_0(VP56Context *VAR_3, VP56Frame VAR_4)
{
    int VAR_5 = VAR_3->idct_scantable[0];
    int VAR_6;

    for (VAR_6=0; VAR_6<6; VAR_6++) {
        VP56RefDc *VAR_7 = &VAR_3->above_blocks[VAR_3->above_block_idx[VAR_6]];
        VP56RefDc *VAR_8 = &VAR_3->left_block[VAR_2[VAR_6]];
        int VAR_9 = 0;
        int VAR_10 = 0;
        int VAR_11;

        if (VAR_4 == VAR_8->ref_frame) {
            VAR_10 += VAR_8->dc_coeff;
            VAR_9++;
        }
        if (VAR_4 == VAR_7->ref_frame) {
            VAR_10 += VAR_7->dc_coeff;
            VAR_9++;
        }
        if (VAR_3->avctx->codec->id == VAR_0)
            for (VAR_11=0; VAR_11<2; VAR_11++)
                if (VAR_9 < 2 && VAR_4 == VAR_7[-1+2*VAR_11].ref_frame) {
                    VAR_10 += VAR_7[-1+2*VAR_11].dc_coeff;
                    VAR_9++;
                }
        if (VAR_9 == 0)
            VAR_10 = VAR_3->prev_dc[VAR_1[VAR_6]][VAR_4];
        else if (VAR_9 == 2)
            VAR_10 /= 2;

        VAR_3->block_coeff[VAR_6][VAR_5] += VAR_10;
        VAR_3->prev_dc[VAR_1[VAR_6]][VAR_4] = VAR_3->block_coeff[VAR_6][VAR_5];
        VAR_7->dc_coeff = VAR_3->block_coeff[VAR_6][VAR_5];
        VAR_7->ref_frame = VAR_4;
        VAR_8->dc_coeff = VAR_3->block_coeff[VAR_6][VAR_5];
        VAR_8->ref_frame = VAR_4;
        VAR_3->block_coeff[VAR_6][VAR_5] *= VAR_3->dequant_dc;
    }
}
