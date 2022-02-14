
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int per_mb_abt; int abt_type; int j_type; scalar_t__ per_mb_rl_bit; scalar_t__ abt_flag; scalar_t__ mspel_bit; int cbp_table_index; scalar_t__ j_type_bit; } ;
typedef TYPE_1__ Wmv2Context ;
struct TYPE_6__ {int pict_type; int qscale; int dc_table_index; int mv_table_index; int per_mb_rl_table; int mspel; int flipflop_rounding; int no_rounding; int rl_chroma_table_index; int rl_table_index; scalar_t__ esc3_run_length; scalar_t__ esc3_level_length; scalar_t__ inter_intra_pred; int pb; } ;
typedef TYPE_2__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (TYPE_2__*,int) ;

int FUNC_4(MpegEncContext *VAR_2, int VAR_3)
{
    Wmv2Context *const VAR_4 = (Wmv2Context *) VAR_2;

    FUNC_2(&VAR_2->pb, 1, VAR_2->pict_type - 1);
    if (VAR_2->pict_type == VAR_0)
        FUNC_2(&VAR_2->pb, 7, 0);
    FUNC_2(&VAR_2->pb, 5, VAR_2->qscale);

    VAR_2->dc_table_index = 1;
    VAR_2->mv_table_index = 1;
    VAR_2->per_mb_rl_table = 0;
    VAR_2->mspel = 0;
    VAR_4->per_mb_abt = 0;
    VAR_4->abt_type = 0;
    VAR_4->j_type = 0;

    FUNC_0(VAR_2->flipflop_rounding);

    if (VAR_2->pict_type == VAR_0) {
        FUNC_0(VAR_2->no_rounding == 1);
        if (VAR_4->j_type_bit)
            FUNC_2(&VAR_2->pb, 1, VAR_4->j_type);

        if (VAR_4->per_mb_rl_bit)
            FUNC_2(&VAR_2->pb, 1, VAR_2->per_mb_rl_table);

        if (!VAR_2->per_mb_rl_table) {
            FUNC_1(&VAR_2->pb, VAR_2->rl_chroma_table_index);
            FUNC_1(&VAR_2->pb, VAR_2->rl_table_index);
        }

        FUNC_2(&VAR_2->pb, 1, VAR_2->dc_table_index);

        VAR_2->inter_intra_pred = 0;
    } else {
        int VAR_5;

        FUNC_2(&VAR_2->pb, 2, VAR_1);

        FUNC_1(&VAR_2->pb, VAR_5 = 0);
        VAR_4->cbp_table_index = FUNC_3(VAR_2, VAR_5);

        if (VAR_4->mspel_bit)
            FUNC_2(&VAR_2->pb, 1, VAR_2->mspel);

        if (VAR_4->abt_flag) {
            FUNC_2(&VAR_2->pb, 1, VAR_4->per_mb_abt ^ 1);
            if (!VAR_4->per_mb_abt)
                FUNC_1(&VAR_2->pb, VAR_4->abt_type);
        }

        if (VAR_4->per_mb_rl_bit)
            FUNC_2(&VAR_2->pb, 1, VAR_2->per_mb_rl_table);

        if (!VAR_2->per_mb_rl_table) {
            FUNC_1(&VAR_2->pb, VAR_2->rl_table_index);
            VAR_2->rl_chroma_table_index = VAR_2->rl_table_index;
        }
        FUNC_2(&VAR_2->pb, 1, VAR_2->dc_table_index);
        FUNC_2(&VAR_2->pb, 1, VAR_2->mv_table_index);

        VAR_2->inter_intra_pred = 0;
    }
    VAR_2->esc3_level_length = 0;
    VAR_2->esc3_run_length = 0;

    return 0;
}
