
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int16_t ;
typedef enum cavs_mv_pred { ____Placeholder_cavs_mv_pred } cavs_mv_pred ;
typedef enum cavs_mv_loc { ____Placeholder_cavs_mv_loc } cavs_mv_loc ;
typedef enum cavs_block { ____Placeholder_cavs_block } cavs_block ;
struct TYPE_11__ {int ref; int x; int y; int dist; } ;
typedef TYPE_1__ cavs_vector ;
struct TYPE_12__ {int avctx; int gb; TYPE_1__* mv; int * dist; } ;
typedef TYPE_2__ AVSContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int ,int ,char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 TYPE_1__ VAR_8 ;

void FUNC_4(AVSContext *VAR_9, enum cavs_mv_loc VAR_10, enum cavs_mv_loc VAR_11,
                enum cavs_mv_pred VAR_12, enum cavs_block VAR_13, int VAR_14)
{
    cavs_vector *VAR_15 = &VAR_9->mv[VAR_10];
    cavs_vector *VAR_16 = &VAR_9->mv[VAR_10-1];
    cavs_vector *VAR_17 = &VAR_9->mv[VAR_10-4];
    cavs_vector *VAR_18 = &VAR_9->mv[VAR_11];
    const cavs_vector *VAR_19 = ((void*)0);

    VAR_15->ref = VAR_14;
    VAR_15->dist = VAR_9->dist[VAR_15->ref];
    if (VAR_18->ref == VAR_7 || (VAR_10 == VAR_2) || (VAR_10 == VAR_1 ))
        VAR_18 = &VAR_9->mv[VAR_10 - 5];
    if (VAR_12 == VAR_4 &&
        (VAR_16->ref == VAR_7 ||
         VAR_17->ref == VAR_7 ||
         (VAR_16->x | VAR_16->y | VAR_16->ref) == 0 ||
         (VAR_17->x | VAR_17->y | VAR_17->ref) == 0)) {
        VAR_19 = &VAR_8;

    } else if (VAR_16->ref >= 0 && VAR_17->ref < 0 && VAR_18->ref < 0) {
        VAR_19 = VAR_16;
    } else if (VAR_16->ref < 0 && VAR_17->ref >= 0 && VAR_18->ref < 0) {
        VAR_19 = VAR_17;
    } else if (VAR_16->ref < 0 && VAR_17->ref < 0 && VAR_18->ref >= 0) {
        VAR_19 = VAR_18;
    } else if (VAR_12 == VAR_3 && VAR_16->ref == VAR_14) {
        VAR_19 = VAR_16;
    } else if (VAR_12 == VAR_5 && VAR_17->ref == VAR_14) {
        VAR_19 = VAR_17;
    } else if (VAR_12 == VAR_6 && VAR_18->ref == VAR_14) {
        VAR_19 = VAR_18;
    }
    if (VAR_19) {
        VAR_15->x = VAR_19->x;
        VAR_15->y = VAR_19->y;
    } else
        FUNC_2(VAR_9, VAR_15, VAR_16, VAR_17, VAR_18);

    if (VAR_12 < VAR_4) {
        int VAR_20 = FUNC_1(&VAR_9->gb) + (unsigned)VAR_15->x;
        int VAR_21 = FUNC_1(&VAR_9->gb) + (unsigned)VAR_15->y;

        if (VAR_20 != (int16_t)VAR_20 || VAR_21 != (int16_t)VAR_21) {
            FUNC_0(VAR_9->avctx, VAR_0, "MV %d %d out of supported range\n", VAR_20, VAR_21);
        } else {
            VAR_15->x = VAR_20;
            VAR_15->y = VAR_21;
        }
    }
    FUNC_3(VAR_15, VAR_13);
}
