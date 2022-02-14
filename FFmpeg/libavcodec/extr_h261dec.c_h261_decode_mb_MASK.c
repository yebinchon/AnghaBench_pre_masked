
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_20__ {int table; } ;
struct TYPE_19__ {int table; } ;
struct TYPE_18__ {int table; } ;
struct TYPE_14__ {int (* clear_blocks ) (int ) ;} ;
struct TYPE_15__ {int* mb_type; int*** motion_val; } ;
struct TYPE_16__ {int mb_x; int mb_y; int mb_stride; int*** mv; int mb_width; int* block_last_index; int * block; TYPE_1__ bdsp; scalar_t__ mb_intra; TYPE_2__ current_picture; int mv_type; int mv_dir; int gb; int avctx; } ;
struct TYPE_17__ {int mba_diff; int gob_start_code_skipped; int current_mba; int gob_number; int mtype; int current_mv_x; int current_mv_y; TYPE_3__ s; } ;
typedef TYPE_3__ MpegEncContext ;
typedef TYPE_4__ H261Context ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (size_t) ;
 scalar_t__ FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,char*,int,...) ;
 void* FUNC_7 (int *,int) ;
 int* VAR_14 ;
 int FUNC_8 (TYPE_3__* const) ;
 int FUNC_9 (TYPE_3__* const,int *) ;
 int FUNC_10 (TYPE_3__* const,int ) ;
 int FUNC_11 (TYPE_3__* const) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,int ,int) ;
 TYPE_9__ VAR_15 ;
 scalar_t__ FUNC_15 (TYPE_4__*,int ,int,int) ;
 TYPE_6__ VAR_16 ;
 TYPE_5__ VAR_17 ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(H261Context *VAR_18)
{
    MpegEncContext *const VAR_19 = &VAR_18->s;
    int VAR_20, VAR_21, VAR_22;

    VAR_21 = 63;

    do {
        VAR_18->mba_diff = FUNC_14(&VAR_19->gb, VAR_16.table,
                               VAR_2, 2);



        if (VAR_18->mba_diff == VAR_4) {
            VAR_18->gob_start_code_skipped = 1;
            return VAR_11;
        }
    } while (VAR_18->mba_diff == VAR_5);

    if (VAR_18->mba_diff < 0) {
        if (FUNC_13(&VAR_19->gb) <= 7)
            return VAR_11;

        FUNC_6(VAR_19->avctx, VAR_0, "illegal mba at %d %d\n", VAR_19->mb_x, VAR_19->mb_y);
        return VAR_12;
    }

    VAR_18->mba_diff += 1;
    VAR_18->current_mba += VAR_18->mba_diff;

    if (VAR_18->current_mba > VAR_5)
        return VAR_12;

    VAR_19->mb_x = ((VAR_18->gob_number - 1) % 2) * 11 + ((VAR_18->current_mba - 1) % 11);
    VAR_19->mb_y = ((VAR_18->gob_number - 1) / 2) * 3 + ((VAR_18->current_mba - 1) / 11);
    VAR_22 = VAR_19->mb_x + VAR_19->mb_y * VAR_19->mb_stride;
    FUNC_8(VAR_19);
    FUNC_11(VAR_19);


    VAR_18->mtype = FUNC_14(&VAR_19->gb, VAR_17.table, VAR_3, 2);
    if (VAR_18->mtype < 0) {
        FUNC_6(VAR_19->avctx, VAR_0, "Invalid mtype index %d\n",
               VAR_18->mtype);
        return VAR_12;
    }
    FUNC_5(VAR_18->mtype < FUNC_0(VAR_14));
    VAR_18->mtype = VAR_14[VAR_18->mtype];


    if (FUNC_4(VAR_18->mtype))
        FUNC_10(VAR_19, FUNC_12(&VAR_19->gb, 5));

    VAR_19->mb_intra = FUNC_3(VAR_18->mtype);


    if (FUNC_2(VAR_18->mtype)) {
        if ((VAR_18->current_mba == 1) || (VAR_18->current_mba == 12) ||
            (VAR_18->current_mba == 23) || (VAR_18->mba_diff != 1)) {
            VAR_18->current_mv_x = 0;
            VAR_18->current_mv_y = 0;
        }

        VAR_18->current_mv_x = FUNC_7(&VAR_19->gb, VAR_18->current_mv_x);
        VAR_18->current_mv_y = FUNC_7(&VAR_19->gb, VAR_18->current_mv_y);
    } else {
        VAR_18->current_mv_x = 0;
        VAR_18->current_mv_y = 0;
    }


    if (FUNC_1(VAR_18->mtype))
        VAR_21 = FUNC_14(&VAR_19->gb, VAR_15.table, VAR_1, 2) + 1;

    if (VAR_19->mb_intra) {
        VAR_19->current_picture.mb_type[VAR_22] = VAR_7;
        goto intra;
    }


    VAR_19->mv_dir = VAR_9;
    VAR_19->mv_type = VAR_10;
    VAR_19->current_picture.mb_type[VAR_22] = VAR_6 | VAR_8;
    VAR_19->mv[0][0][0] = VAR_18->current_mv_x * 2;
    VAR_19->mv[0][0][1] = VAR_18->current_mv_y * 2;

    if (VAR_19->current_picture.motion_val[0]) {
        int VAR_23 = 2*VAR_19->mb_width + 1;
        int VAR_24 = 2 * VAR_19->mb_x + (2 * VAR_19->mb_y) * VAR_23;
        VAR_19->current_picture.motion_val[0][VAR_24][0] = VAR_19->mv[0][0][0];
        VAR_19->current_picture.motion_val[0][VAR_24][1] = VAR_19->mv[0][0][1];
    }

intra:

    if (VAR_19->mb_intra || FUNC_1(VAR_18->mtype)) {
        VAR_19->bdsp.clear_blocks(VAR_19->block[0]);
        for (VAR_20 = 0; VAR_20 < 6; VAR_20++) {
            if (FUNC_15(VAR_18, VAR_19->block[VAR_20], VAR_20, VAR_21 & 32) < 0)
                return VAR_12;
            VAR_21 += VAR_21;
        }
    } else {
        for (VAR_20 = 0; VAR_20 < 6; VAR_20++)
            VAR_19->block_last_index[VAR_20] = -1;
    }

    FUNC_9(VAR_19, VAR_19->block);

    return VAR_13;
}
