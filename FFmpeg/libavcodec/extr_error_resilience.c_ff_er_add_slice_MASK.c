
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int active_thread_type; int const skip_top; int error_concealment; TYPE_1__* hwaccel; } ;
struct TYPE_7__ {int mb_width; int mb_num; int* mb_index2xy; int error_occurred; int* error_status_table; int error_count; TYPE_5__* avctx; } ;
struct TYPE_6__ {scalar_t__ decode_slice; } ;
typedef TYPE_2__ ERContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int const) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (TYPE_5__*,int ,char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int*,int ,int const) ;

void FUNC_6(ERContext *VAR_11, int VAR_12, int VAR_13,
                     int VAR_14, int VAR_15, int VAR_16)
{
    const int VAR_17 = FUNC_2(VAR_12 + VAR_13 * VAR_11->mb_width, 0, VAR_11->mb_num - 1);
    const int VAR_18 = FUNC_2(VAR_14 + VAR_15 * VAR_11->mb_width, 0, VAR_11->mb_num);
    const int VAR_19 = VAR_11->mb_index2xy[VAR_17];
    const int VAR_20 = VAR_11->mb_index2xy[VAR_18];
    int VAR_21 = -1;

    if (VAR_11->avctx->hwaccel && VAR_11->avctx->hwaccel->decode_slice)
        return;

    if (VAR_17 > VAR_18 || VAR_19 > VAR_20) {
        FUNC_3(VAR_11->avctx, VAR_0,
               "internal error, slice end before start\n");
        return;
    }

    if (!VAR_11->avctx->error_concealment)
        return;

    VAR_21 &= ~VAR_10;
    if (VAR_16 & (VAR_2 | VAR_1)) {
        VAR_21 &= ~(VAR_2 | VAR_1);
        FUNC_0(&VAR_11->error_count, VAR_17 - VAR_18 - 1);
    }
    if (VAR_16 & (VAR_4 | VAR_3)) {
        VAR_21 &= ~(VAR_4 | VAR_3);
        FUNC_0(&VAR_11->error_count, VAR_17 - VAR_18 - 1);
    }
    if (VAR_16 & (VAR_7 | VAR_6)) {
        VAR_21 &= ~(VAR_7 | VAR_6);
        FUNC_0(&VAR_11->error_count, VAR_17 - VAR_18 - 1);
    }

    if (VAR_16 & VAR_5) {
        VAR_11->error_occurred = 1;
        FUNC_1(&VAR_11->error_count, VAR_9);
    }

    if (VAR_21 == ~0x7F) {
        FUNC_5(&VAR_11->error_status_table[VAR_19], 0,
               (VAR_20 - VAR_19) * sizeof(uint8_t));
    } else {
        int VAR_22;
        for (VAR_22 = VAR_19; VAR_22 < VAR_20; VAR_22++)
            VAR_11->error_status_table[VAR_22] &= VAR_21;
    }

    if (VAR_18 == VAR_11->mb_num)
        FUNC_1(&VAR_11->error_count, VAR_9);
    else {
        VAR_11->error_status_table[VAR_20] &= VAR_21;
        VAR_11->error_status_table[VAR_20] |= VAR_16;
    }

    VAR_11->error_status_table[VAR_19] |= VAR_10;

    if (VAR_19 > 0 && !(VAR_11->avctx->active_thread_type & VAR_8) &&
        FUNC_4(VAR_11) && VAR_11->avctx->skip_top * VAR_11->mb_width < VAR_17) {
        int VAR_23 = VAR_11->error_status_table[VAR_11->mb_index2xy[VAR_17 - 1]];

        VAR_23 &= ~ VAR_10;
        if (VAR_23 != (VAR_6 | VAR_3 | VAR_1)) {
            VAR_11->error_occurred = 1;
            FUNC_1(&VAR_11->error_count, VAR_9);
        }
    }
}
