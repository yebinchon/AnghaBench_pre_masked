
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int mb_x; int mb_y; int er; } ;
struct TYPE_9__ {int j_type; int per_mb_abt; TYPE_1__ s; int x8; int cbp_table_index; void* abt_type; scalar_t__ per_mb_rl_bit; scalar_t__ abt_flag; scalar_t__ mspel_bit; scalar_t__ j_type_bit; } ;
typedef TYPE_2__ Wmv2Context ;
struct TYPE_11__ {int debug; } ;
struct TYPE_10__ {scalar_t__ pict_type; int per_mb_rl_table; int dc_table_index; int width; int height; int no_rounding; int qscale; int mspel; int mv_table_index; int low_delay; int loop_filter; int mb_y; int mb_x; int gb; int current_picture; int picture_number; scalar_t__ esc3_run_length; scalar_t__ esc3_level_length; int inter_intra_pred; void* rl_chroma_table_index; void* rl_table_index; TYPE_7__* avctx; } ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_7__*,int ,char*,int,void*,int,int,int,int,...) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int,int,int ) ;
 int FUNC_3 (int *,int *,int *,int *,int *,int,int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__* const) ;
 int FUNC_7 (TYPE_3__*,int) ;

int FUNC_8(MpegEncContext *VAR_5)
{
    Wmv2Context *const VAR_6 = (Wmv2Context *) VAR_5;

    if (VAR_5->pict_type == VAR_2) {
        if (VAR_6->j_type_bit)
            VAR_6->j_type = FUNC_4(&VAR_5->gb);
        else
            VAR_6->j_type = 0;

        if (!VAR_6->j_type) {
            if (VAR_6->per_mb_rl_bit)
                VAR_5->per_mb_rl_table = FUNC_4(&VAR_5->gb);
            else
                VAR_5->per_mb_rl_table = 0;

            if (!VAR_5->per_mb_rl_table) {
                VAR_5->rl_chroma_table_index = FUNC_1(&VAR_5->gb);
                VAR_5->rl_table_index = FUNC_1(&VAR_5->gb);
            }

            VAR_5->dc_table_index = FUNC_4(&VAR_5->gb);






            if (FUNC_5(&VAR_5->gb) * 8LL < (VAR_5->width+15)/16 * ((VAR_5->height+15)/16))
                return VAR_0;
        }
        VAR_5->inter_intra_pred = 0;
        VAR_5->no_rounding = 1;
        if (VAR_5->avctx->debug & VAR_4) {
            FUNC_0(VAR_5->avctx, VAR_1,
                   "qscale:%d rlc:%d rl:%d dc:%d mbrl:%d j_type:%d \n",
                   VAR_5->qscale, VAR_5->rl_chroma_table_index, VAR_5->rl_table_index,
                   VAR_5->dc_table_index, VAR_5->per_mb_rl_table, VAR_6->j_type);
        }
    } else {
        int VAR_7;
        int VAR_8;
        VAR_6->j_type = 0;

        VAR_8 = FUNC_6(VAR_6);
        if (VAR_8 < 0)
            return VAR_8;
        VAR_7 = FUNC_1(&VAR_5->gb);
        VAR_6->cbp_table_index = FUNC_7(VAR_5, VAR_7);

        if (VAR_6->mspel_bit)
            VAR_5->mspel = FUNC_4(&VAR_5->gb);
        else
            VAR_5->mspel = 0;

        if (VAR_6->abt_flag) {
            VAR_6->per_mb_abt = FUNC_4(&VAR_5->gb) ^ 1;
            if (!VAR_6->per_mb_abt)
                VAR_6->abt_type = FUNC_1(&VAR_5->gb);
        }

        if (VAR_6->per_mb_rl_bit)
            VAR_5->per_mb_rl_table = FUNC_4(&VAR_5->gb);
        else
            VAR_5->per_mb_rl_table = 0;

        if (!VAR_5->per_mb_rl_table) {
            VAR_5->rl_table_index = FUNC_1(&VAR_5->gb);
            VAR_5->rl_chroma_table_index = VAR_5->rl_table_index;
        }

        if (FUNC_5(&VAR_5->gb) < 2)
            return VAR_0;

        VAR_5->dc_table_index = FUNC_4(&VAR_5->gb);
        VAR_5->mv_table_index = FUNC_4(&VAR_5->gb);

        VAR_5->inter_intra_pred = 0;
        VAR_5->no_rounding ^= 1;

        if (VAR_5->avctx->debug & VAR_4) {
            FUNC_0(VAR_5->avctx, VAR_1,
                   "rl:%d rlc:%d dc:%d mv:%d mbrl:%d qp:%d mspel:%d "
                   "per_mb_abt:%d abt_type:%d cbp:%d ii:%d\n",
                   VAR_5->rl_table_index, VAR_5->rl_chroma_table_index,
                   VAR_5->dc_table_index, VAR_5->mv_table_index,
                   VAR_5->per_mb_rl_table, VAR_5->qscale, VAR_5->mspel,
                   VAR_6->per_mb_abt, VAR_6->abt_type, VAR_6->cbp_table_index,
                   VAR_5->inter_intra_pred);
        }
    }
    VAR_5->esc3_level_length = 0;
    VAR_5->esc3_run_length = 0;
    VAR_5->picture_number++;

    if (VAR_6->j_type) {
        FUNC_3(&VAR_6->x8, &VAR_5->current_picture,
                                  &VAR_5->gb, &VAR_5->mb_x, &VAR_5->mb_y,
                                  2 * VAR_5->qscale, (VAR_5->qscale - 1) | 1,
                                  VAR_5->loop_filter, VAR_5->low_delay);

        FUNC_2(&VAR_6->s.er, 0, 0,
                        (VAR_6->s.mb_x >> 1) - 1, (VAR_6->s.mb_y >> 1) - 1,
                        VAR_3);
        return 1;
    }

    return 0;
}
