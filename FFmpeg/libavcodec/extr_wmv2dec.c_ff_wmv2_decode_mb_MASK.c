
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_19__ {size_t cbp_table_index; void* per_block_abt; void* abt_type; scalar_t__ per_mb_abt; scalar_t__ abt_flag; scalar_t__ hshift; scalar_t__ j_type; } ;
typedef TYPE_3__ Wmv2Context ;
struct TYPE_18__ {int (* clear_blocks ) (int ) ;} ;
struct TYPE_17__ {int * mb_type; } ;
struct TYPE_20__ {scalar_t__ pict_type; size_t mb_y; size_t mb_stride; size_t mb_x; int mb_intra; int* block_last_index; int*** mv; int mb_skipped; size_t ac_pred; size_t h263_aic_dir; int avctx; int * block; TYPE_2__ bdsp; void* rl_table_index; void* rl_chroma_table_index; int gb; scalar_t__ per_mb_rl_table; scalar_t__ inter_intra_pred; void* mv_type; void* mv_dir; TYPE_1__ current_picture; } ;
struct TYPE_16__ {int table; } ;
struct TYPE_15__ {int table; } ;
struct TYPE_14__ {int table; } ;
typedef TYPE_4__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_1 (int ,int ,char*,size_t,size_t,...) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,size_t,size_t,...) ;
 TYPE_13__ VAR_8 ;
 TYPE_12__* VAR_9 ;
 TYPE_11__ VAR_10 ;
 int FUNC_4 (TYPE_4__*,int,int**) ;
 int FUNC_5 (TYPE_4__*,int *,int,int,int *) ;
 void* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 void* FUNC_8 (int *,int ,int ,int) ;
 size_t FUNC_9 (int *,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_3__* const,int *,int,int) ;
 int FUNC_13 (TYPE_3__* const,int*,int*) ;
 int FUNC_14 (TYPE_3__* const,int*,int*) ;

int FUNC_15(MpegEncContext *VAR_11, int16_t VAR_12[6][64])
{
    Wmv2Context *const VAR_13 = (Wmv2Context *) VAR_11;
    int VAR_14, VAR_15, VAR_16, VAR_17;
    uint8_t *VAR_18;

    if (VAR_13->j_type)
        return 0;

    if (VAR_11->pict_type == VAR_2) {
        if (FUNC_0(VAR_11->current_picture.mb_type[VAR_11->mb_y * VAR_11->mb_stride + VAR_11->mb_x])) {

            VAR_11->mb_intra = 0;
            for (VAR_16 = 0; VAR_16 < 6; VAR_16++)
                VAR_11->block_last_index[VAR_16] = -1;
            VAR_11->mv_dir = VAR_6;
            VAR_11->mv_type = VAR_7;
            VAR_11->mv[0][0][0] = 0;
            VAR_11->mv[0][0][1] = 0;
            VAR_11->mb_skipped = 1;
            VAR_13->hshift = 0;
            return 0;
        }
        if (FUNC_7(&VAR_11->gb) <= 0)
            return VAR_0;

        VAR_15 = FUNC_8(&VAR_11->gb, VAR_9[VAR_13->cbp_table_index].table,
                        VAR_5, 3);
        if (VAR_15 < 0)
            return VAR_0;
        VAR_11->mb_intra = (~VAR_15 & 0x40) >> 6;

        VAR_14 = VAR_15 & 0x3f;
    } else {
        VAR_11->mb_intra = 1;
        if (FUNC_7(&VAR_11->gb) <= 0)
            return VAR_0;
        VAR_15 = FUNC_8(&VAR_11->gb, VAR_10.table, VAR_4, 2);
        if (VAR_15 < 0) {
            FUNC_1(VAR_11->avctx, VAR_1,
                   "II-cbp illegal at %d %d\n", VAR_11->mb_x, VAR_11->mb_y);
            return VAR_0;
        }

        VAR_14 = 0;
        for (VAR_16 = 0; VAR_16 < 6; VAR_16++) {
            int VAR_19 = ((VAR_15 >> (5 - VAR_16)) & 1);
            if (VAR_16 < 4) {
                int VAR_20 = FUNC_4(VAR_11, VAR_16, &VAR_18);
                VAR_19 = VAR_19 ^ VAR_20;
                *VAR_18 = VAR_19;
            }
            VAR_14 |= VAR_19 << (5 - VAR_16);
        }
    }

    if (!VAR_11->mb_intra) {
        int VAR_21, VAR_22;
        FUNC_14(VAR_13, &VAR_21, &VAR_22);

        if (VAR_14) {
            VAR_11->bdsp.clear_blocks(VAR_11->block[0]);
            if (VAR_11->per_mb_rl_table) {
                VAR_11->rl_table_index = FUNC_2(&VAR_11->gb);
                VAR_11->rl_chroma_table_index = VAR_11->rl_table_index;
            }

            if (VAR_13->abt_flag && VAR_13->per_mb_abt) {
                VAR_13->per_block_abt = FUNC_6(&VAR_11->gb);
                if (!VAR_13->per_block_abt)
                    VAR_13->abt_type = FUNC_2(&VAR_11->gb);
            } else
                VAR_13->per_block_abt = 0;
        }

        if ((VAR_17 = FUNC_13(VAR_13, &VAR_21, &VAR_22)) < 0)
            return VAR_17;

        VAR_11->mv_dir = VAR_6;
        VAR_11->mv_type = VAR_7;
        VAR_11->mv[0][0][0] = VAR_21;
        VAR_11->mv[0][0][1] = VAR_22;

        for (VAR_16 = 0; VAR_16 < 6; VAR_16++) {
            if ((VAR_17 = FUNC_12(VAR_13, VAR_12[VAR_16], VAR_16, (VAR_14 >> (5 - VAR_16)) & 1)) < 0) {
                FUNC_1(VAR_11->avctx, VAR_1,
                       "\nerror while decoding inter block: %d x %d (%d)\n",
                       VAR_11->mb_x, VAR_11->mb_y, VAR_16);
                return VAR_17;
            }
        }
    } else {
        if (VAR_11->pict_type == VAR_2)
            FUNC_3(VAR_11->avctx, "%d%d ", VAR_11->inter_intra_pred, VAR_14);
        FUNC_3(VAR_11->avctx, "I at %d %d %d %06X\n", VAR_11->mb_x, VAR_11->mb_y,
                ((VAR_14 & 3) ? 1 : 0) + ((VAR_14 & 0x3C) ? 2 : 0),
                FUNC_9(&VAR_11->gb, 24));
        VAR_11->ac_pred = FUNC_6(&VAR_11->gb);
        if (VAR_11->inter_intra_pred) {
            VAR_11->h263_aic_dir = FUNC_8(&VAR_11->gb, VAR_8.table,
                                       VAR_3, 1);
            FUNC_3(VAR_11->avctx, "%d%d %d %d/",
                    VAR_11->ac_pred, VAR_11->h263_aic_dir, VAR_11->mb_x, VAR_11->mb_y);
        }
        if (VAR_11->per_mb_rl_table && VAR_14) {
            VAR_11->rl_table_index = FUNC_2(&VAR_11->gb);
            VAR_11->rl_chroma_table_index = VAR_11->rl_table_index;
        }

        VAR_11->bdsp.clear_blocks(VAR_11->block[0]);
        for (VAR_16 = 0; VAR_16 < 6; VAR_16++) {
            if ((VAR_17 = FUNC_5(VAR_11, VAR_12[VAR_16], VAR_16, (VAR_14 >> (5 - VAR_16)) & 1, ((void*)0))) < 0) {
                FUNC_1(VAR_11->avctx, VAR_1,
                       "\nerror while decoding intra block: %d x %d (%d)\n",
                       VAR_11->mb_x, VAR_11->mb_y, VAR_16);
                return VAR_17;
            }
        }
    }

    return 0;
}
