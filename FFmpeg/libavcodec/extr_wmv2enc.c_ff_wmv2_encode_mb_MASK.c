
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_10__ {size_t cbp_table_index; } ;
typedef TYPE_1__ Wmv2Context ;
struct TYPE_11__ {int* block_last_index; scalar_t__ pict_type; size_t h263_aic_dir; int p_tex_bits; int i_tex_bits; scalar_t__ mb_intra; int misc_bits; int pb; scalar_t__ inter_intra_pred; int mv_bits; } ;
typedef TYPE_2__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int*,int*) ;
 int** VAR_1 ;
 int FUNC_1 (TYPE_2__*,int,int**) ;
 int FUNC_2 (TYPE_2__*,int *,int) ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int** VAR_2 ;
 int*** VAR_3 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,int,int) ;

void FUNC_7(MpegEncContext *VAR_4, int16_t VAR_5[6][64],
                       int VAR_6, int VAR_7)
{
    Wmv2Context *const VAR_8 = (Wmv2Context *) VAR_4;
    int VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13;
    uint8_t *VAR_14;

    FUNC_4(VAR_4);

    if (!VAR_4->mb_intra) {

        VAR_9 = 0;
        for (VAR_11 = 0; VAR_11 < 6; VAR_11++)
            if (VAR_4->block_last_index[VAR_11] >= 0)
                VAR_9 |= 1 << (5 - VAR_11);

        FUNC_6(&VAR_4->pb,
                 VAR_3[VAR_8->cbp_table_index][VAR_9 + 64][1],
                 VAR_3[VAR_8->cbp_table_index][VAR_9 + 64][0]);

        VAR_4->misc_bits += FUNC_5(VAR_4);

        FUNC_0(VAR_4, 0, 0, &VAR_12, &VAR_13);
        FUNC_3(VAR_4, VAR_6 - VAR_12,
                                 VAR_7 - VAR_13);
        VAR_4->mv_bits += FUNC_5(VAR_4);
    } else {

        VAR_9 = 0;
        VAR_10 = 0;
        for (VAR_11 = 0; VAR_11 < 6; VAR_11++) {
            int VAR_15, VAR_16;
            VAR_15 = (VAR_4->block_last_index[VAR_11] >= 1);
            VAR_9 |= VAR_15 << (5 - VAR_11);
            if (VAR_11 < 4) {

                VAR_16 = FUNC_1(VAR_4, VAR_11, &VAR_14);
                *VAR_14 = VAR_15;
                VAR_15 = VAR_15 ^ VAR_16;
            }
            VAR_10 |= VAR_15 << (5 - VAR_11);
        }

        if (VAR_4->pict_type == VAR_0)
            FUNC_6(&VAR_4->pb,
                     VAR_1[VAR_10][1],
                     VAR_1[VAR_10][0]);
        else
            FUNC_6(&VAR_4->pb,
                     VAR_3[VAR_8->cbp_table_index][VAR_9][1],
                     VAR_3[VAR_8->cbp_table_index][VAR_9][0]);
        FUNC_6(&VAR_4->pb, 1, 0);
        if (VAR_4->inter_intra_pred) {
            VAR_4->h263_aic_dir = 0;
            FUNC_6(&VAR_4->pb,
                     VAR_2[VAR_4->h263_aic_dir][1],
                     VAR_2[VAR_4->h263_aic_dir][0]);
        }
        VAR_4->misc_bits += FUNC_5(VAR_4);
    }

    for (VAR_11 = 0; VAR_11 < 6; VAR_11++)
        FUNC_2(VAR_4, VAR_5[VAR_11], VAR_11);
    if (VAR_4->mb_intra)
        VAR_4->i_tex_bits += FUNC_5(VAR_4);
    else
        VAR_4->p_tex_bits += FUNC_5(VAR_4);
}
