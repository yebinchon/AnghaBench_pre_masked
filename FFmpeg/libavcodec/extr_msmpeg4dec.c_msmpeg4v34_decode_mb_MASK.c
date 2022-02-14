
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int int16_t ;
struct TYPE_18__ {int table; } ;
struct TYPE_17__ {int table; } ;
struct TYPE_14__ {int (* clear_blocks ) (int ) ;} ;
struct TYPE_15__ {int* mb_type; } ;
struct TYPE_16__ {size_t mb_x; size_t mb_y; size_t mb_stride; scalar_t__ pict_type; int mb_intra; int* block_last_index; int*** mv; int mb_skipped; size_t ac_pred; size_t h263_aic_dir; int avctx; int * block; TYPE_1__ bdsp; void* rl_table_index; void* rl_chroma_table_index; int gb; scalar_t__ per_mb_rl_table; scalar_t__ inter_intra_pred; void* mv_type; void* mv_dir; scalar_t__ use_skip_mb_code; TYPE_2__ current_picture; } ;
struct TYPE_13__ {int table; } ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int FUNC_0 (int ,int ,char*,int,size_t,int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,char*,size_t,size_t,int,size_t) ;
 int FUNC_3 (TYPE_3__*,int ,int ,int*,int*) ;
 TYPE_10__ VAR_13 ;
 TYPE_9__* VAR_14 ;
 TYPE_8__ VAR_15 ;
 int FUNC_4 (TYPE_3__*,int,int**) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int *,int,int,int *) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int*,int*) ;
 size_t FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 void* FUNC_9 (int *,int ,int ,int) ;
 size_t FUNC_10 (int *,int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(MpegEncContext *VAR_16, int16_t VAR_17[6][64])
{
    int VAR_18, VAR_19, VAR_20;
    uint8_t *VAR_21;
    uint32_t * const VAR_22 = &VAR_16->current_picture.mb_type[VAR_16->mb_x + VAR_16->mb_y*VAR_16->mb_stride];

    if (FUNC_8(&VAR_16->gb) <= 0)
        return VAR_0;

    if (VAR_16->pict_type == VAR_2) {
        if (VAR_16->use_skip_mb_code) {
            if (FUNC_7(&VAR_16->gb)) {

                VAR_16->mb_intra = 0;
                for(VAR_20=0;VAR_20<6;VAR_20++)
                    VAR_16->block_last_index[VAR_20] = -1;
                VAR_16->mv_dir = VAR_11;
                VAR_16->mv_type = VAR_12;
                VAR_16->mv[0][0][0] = 0;
                VAR_16->mv[0][0][1] = 0;
                VAR_16->mb_skipped = 1;
                *VAR_22 = VAR_10 | VAR_9 | VAR_7;

                return 0;
            }
        }

        VAR_19 = FUNC_9(&VAR_16->gb, VAR_14[VAR_3].table, VAR_6, 3);
        if (VAR_19 < 0)
            return -1;

        VAR_16->mb_intra = (~VAR_19 & 0x40) >> 6;

        VAR_18 = VAR_19 & 0x3f;
    } else {
        VAR_16->mb_intra = 1;
        VAR_19 = FUNC_9(&VAR_16->gb, VAR_15.table, VAR_5, 2);
        if (VAR_19 < 0)
            return -1;

        VAR_18 = 0;
        for(VAR_20=0;VAR_20<6;VAR_20++) {
            int VAR_23 = ((VAR_19 >> (5 - VAR_20)) & 1);
            if (VAR_20 < 4) {
                int VAR_24 = FUNC_4(VAR_16, VAR_20, &VAR_21);
                VAR_23 = VAR_23 ^ VAR_24;
                *VAR_21 = VAR_23;
            }
            VAR_18 |= VAR_23 << (5 - VAR_20);
        }
    }

    if (!VAR_16->mb_intra) {
        int VAR_25, VAR_26;
        if(VAR_16->per_mb_rl_table && VAR_18){
            VAR_16->rl_table_index = FUNC_1(&VAR_16->gb);
            VAR_16->rl_chroma_table_index = VAR_16->rl_table_index;
        }
        FUNC_3(VAR_16, 0, 0, &VAR_25, &VAR_26);
        if (FUNC_6(VAR_16, &VAR_25, &VAR_26) < 0)
            return -1;
        VAR_16->mv_dir = VAR_11;
        VAR_16->mv_type = VAR_12;
        VAR_16->mv[0][0][0] = VAR_25;
        VAR_16->mv[0][0][1] = VAR_26;
        *VAR_22 = VAR_9 | VAR_7;
    } else {
        FUNC_2(VAR_16, "I at %d %d %d %06X\n", VAR_16->mb_x, VAR_16->mb_y,
                ((VAR_18 & 3) ? 1 : 0) +((VAR_18 & 0x3C)? 2 : 0),
                FUNC_10(&VAR_16->gb, 24));
        VAR_16->ac_pred = FUNC_7(&VAR_16->gb);
        *VAR_22 = VAR_8;
        if(VAR_16->inter_intra_pred){
            VAR_16->h263_aic_dir= FUNC_9(&VAR_16->gb, VAR_13.table, VAR_4, 1);
            FUNC_2(VAR_16, "%d%d %d %d/",
                    VAR_16->ac_pred, VAR_16->h263_aic_dir, VAR_16->mb_x, VAR_16->mb_y);
        }
        if(VAR_16->per_mb_rl_table && VAR_18){
            VAR_16->rl_table_index = FUNC_1(&VAR_16->gb);
            VAR_16->rl_chroma_table_index = VAR_16->rl_table_index;
        }
    }

    VAR_16->bdsp.clear_blocks(VAR_16->block[0]);
    for (VAR_20 = 0; VAR_20 < 6; VAR_20++) {
        if (FUNC_5(VAR_16, VAR_17[VAR_20], VAR_20, (VAR_18 >> (5 - VAR_20)) & 1, ((void*)0)) < 0)
        {
            FUNC_0(VAR_16->avctx, VAR_1, "\nerror while decoding block: %d x %d (%d)\n", VAR_16->mb_x, VAR_16->mb_y, VAR_20);
            return -1;
        }
    }

    return 0;
}
