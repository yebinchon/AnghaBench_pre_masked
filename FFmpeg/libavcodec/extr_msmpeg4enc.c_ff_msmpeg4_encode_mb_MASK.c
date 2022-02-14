
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_10__ {int* block_last_index; int msmpeg4_version; scalar_t__ pict_type; size_t h263_aic_dir; int i_count; int i_tex_bits; scalar_t__ misc_bits; int pb; scalar_t__ inter_intra_pred; scalar_t__ use_skip_mb_code; int p_tex_bits; int mv_bits; int skip_count; int last_bits; int mb_intra; } ;
typedef TYPE_1__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int** VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int*,int*) ;
 int** VAR_2 ;
 int FUNC_1 (TYPE_1__*,int,int**) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int** VAR_3 ;
 int** VAR_4 ;
 int** VAR_5 ;
 int** VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int *,int,int) ;

void FUNC_8(MpegEncContext * VAR_7,
                          int16_t VAR_8[6][64],
                          int VAR_9, int VAR_10)
{
    int VAR_11, VAR_12, VAR_13;
    int VAR_14, VAR_15;
    uint8_t *VAR_16;

    FUNC_4(VAR_7);

    if (!VAR_7->mb_intra) {

        VAR_11 = 0;
        for (VAR_13 = 0; VAR_13 < 6; VAR_13++) {
            if (VAR_7->block_last_index[VAR_13] >= 0)
                VAR_11 |= 1 << (5 - VAR_13);
        }
        if (VAR_7->use_skip_mb_code && (VAR_11 | VAR_9 | VAR_10) == 0) {

            FUNC_7(&VAR_7->pb, 1, 1);
            VAR_7->last_bits++;
            VAR_7->misc_bits++;
            VAR_7->skip_count++;

            return;
        }
        if (VAR_7->use_skip_mb_code)
            FUNC_7(&VAR_7->pb, 1, 0);

        if(VAR_7->msmpeg4_version<=2){
            FUNC_7(&VAR_7->pb,
                     VAR_6[VAR_11&3][1],
                     VAR_6[VAR_11&3][0]);
            if((VAR_11&3) != 3) VAR_12= VAR_11 ^ 0x3C;
            else VAR_12= VAR_11;

            FUNC_7(&VAR_7->pb,
                     VAR_1[VAR_12>>2][1],
                     VAR_1[VAR_12>>2][0]);

            VAR_7->misc_bits += FUNC_5(VAR_7);

            FUNC_0(VAR_7, 0, 0, &VAR_14, &VAR_15);
            FUNC_6(VAR_7, VAR_9 - VAR_14);
            FUNC_6(VAR_7, VAR_10 - VAR_15);
        }else{
            FUNC_7(&VAR_7->pb,
                     VAR_4[VAR_11 + 64][1],
                     VAR_4[VAR_11 + 64][0]);

            VAR_7->misc_bits += FUNC_5(VAR_7);


            FUNC_0(VAR_7, 0, 0, &VAR_14, &VAR_15);
            FUNC_3(VAR_7, VAR_9 - VAR_14,
                                  VAR_10 - VAR_15);
        }

        VAR_7->mv_bits += FUNC_5(VAR_7);

        for (VAR_13 = 0; VAR_13 < 6; VAR_13++) {
            FUNC_2(VAR_7, VAR_8[VAR_13], VAR_13);
        }
        VAR_7->p_tex_bits += FUNC_5(VAR_7);
    } else {

        VAR_11 = 0;
        VAR_12 = 0;
        for (VAR_13 = 0; VAR_13 < 6; VAR_13++) {
            int VAR_17, VAR_18;
            VAR_17 = (VAR_7->block_last_index[VAR_13] >= 1);
            VAR_11 |= VAR_17 << (5 - VAR_13);
            if (VAR_13 < 4) {

                VAR_18 = FUNC_1(VAR_7, VAR_13, &VAR_16);
                *VAR_16 = VAR_17;
                VAR_17 = VAR_17 ^ VAR_18;
            }
            VAR_12 |= VAR_17 << (5 - VAR_13);
        }

        if(VAR_7->msmpeg4_version<=2){
            if (VAR_7->pict_type == VAR_0) {
                FUNC_7(&VAR_7->pb,
                         VAR_5[VAR_11&3][1], VAR_5[VAR_11&3][0]);
            } else {
                if (VAR_7->use_skip_mb_code)
                    FUNC_7(&VAR_7->pb, 1, 0);
                FUNC_7(&VAR_7->pb,
                         VAR_6[(VAR_11&3) + 4][1],
                         VAR_6[(VAR_11&3) + 4][0]);
            }
            FUNC_7(&VAR_7->pb, 1, 0);
            FUNC_7(&VAR_7->pb,
                     VAR_1[VAR_11>>2][1],
                     VAR_1[VAR_11>>2][0]);
        }else{
            if (VAR_7->pict_type == VAR_0) {
                FUNC_7(&VAR_7->pb,
                         VAR_2[VAR_12][1], VAR_2[VAR_12][0]);
            } else {
                if (VAR_7->use_skip_mb_code)
                    FUNC_7(&VAR_7->pb, 1, 0);
                FUNC_7(&VAR_7->pb,
                         VAR_4[VAR_11][1],
                         VAR_4[VAR_11][0]);
            }
            FUNC_7(&VAR_7->pb, 1, 0);
            if(VAR_7->inter_intra_pred){
                VAR_7->h263_aic_dir=0;
                FUNC_7(&VAR_7->pb, VAR_3[VAR_7->h263_aic_dir][1], VAR_3[VAR_7->h263_aic_dir][0]);
            }
        }
        VAR_7->misc_bits += FUNC_5(VAR_7);

        for (VAR_13 = 0; VAR_13 < 6; VAR_13++) {
            FUNC_2(VAR_7, VAR_8[VAR_13], VAR_13);
        }
        VAR_7->i_tex_bits += FUNC_5(VAR_7);
        VAR_7->i_count++;
    }
}
