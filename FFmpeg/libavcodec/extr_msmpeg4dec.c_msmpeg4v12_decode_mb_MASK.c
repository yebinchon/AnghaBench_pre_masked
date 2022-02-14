
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint32_t ;
typedef int int16_t ;
struct TYPE_20__ {int table; } ;
struct TYPE_19__ {int table; } ;
struct TYPE_16__ {int (* clear_blocks ) (int ) ;} ;
struct TYPE_17__ {int* mb_type; } ;
struct TYPE_18__ {int mb_x; int mb_y; int mb_stride; scalar_t__ pict_type; int mb_intra; int* block_last_index; int*** mv; int mb_skipped; int msmpeg4_version; int avctx; int * block; TYPE_1__ bdsp; int gb; scalar_t__ ac_pred; void* mv_type; void* mv_dir; scalar_t__ use_skip_mb_code; TYPE_2__ current_picture; } ;
struct TYPE_15__ {int table; } ;
struct TYPE_14__ {int table; } ;
struct TYPE_13__ {int table; } ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,char*,...) ;
 TYPE_12__ VAR_13 ;
 TYPE_11__ VAR_14 ;
 TYPE_10__ VAR_15 ;
 int FUNC_1 (TYPE_3__*,int ,int ,int*,int*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *,int,int,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int) ;
 int FUNC_5 (TYPE_3__*,int,int) ;
 int FUNC_6 (int ) ;
 TYPE_5__ VAR_16 ;
 TYPE_4__ VAR_17 ;

__attribute__((used)) static int FUNC_7(MpegEncContext *VAR_18, int16_t VAR_19[6][64])
{
    int VAR_20, VAR_21, VAR_22;
    uint32_t * const VAR_23 = &VAR_18->current_picture.mb_type[VAR_18->mb_x + VAR_18->mb_y*VAR_18->mb_stride];

    if (VAR_18->pict_type == VAR_1) {
        if (VAR_18->use_skip_mb_code) {
            if (FUNC_3(&VAR_18->gb)) {

                VAR_18->mb_intra = 0;
                for(VAR_22=0;VAR_22<6;VAR_22++)
                    VAR_18->block_last_index[VAR_22] = -1;
                VAR_18->mv_dir = VAR_9;
                VAR_18->mv_type = VAR_10;
                VAR_18->mv[0][0][0] = 0;
                VAR_18->mv[0][0][1] = 0;
                VAR_18->mb_skipped = 1;
                *VAR_23 = VAR_8 | VAR_7 | VAR_5;
                return 0;
            }
        }

        if(VAR_18->msmpeg4_version==2)
            VAR_21 = FUNC_4(&VAR_18->gb, VAR_17.table, VAR_12, 1);
        else
            VAR_21 = FUNC_4(&VAR_18->gb, VAR_14.table, VAR_3, 2);
        if(VAR_21<0 || VAR_21>7){
            FUNC_0(VAR_18->avctx, VAR_0, "cbpc %d invalid at %d %d\n", VAR_21, VAR_18->mb_x, VAR_18->mb_y);
            return -1;
        }

        VAR_18->mb_intra = VAR_21 >>2;

        VAR_20 = VAR_21 & 0x3;
    } else {
        VAR_18->mb_intra = 1;
        if(VAR_18->msmpeg4_version==2)
            VAR_20= FUNC_4(&VAR_18->gb, VAR_16.table, VAR_11, 1);
        else
            VAR_20= FUNC_4(&VAR_18->gb, VAR_15.table, VAR_4, 2);
        if(VAR_20<0 || VAR_20>3){
            FUNC_0(VAR_18->avctx, VAR_0, "cbpc %d invalid at %d %d\n", VAR_20, VAR_18->mb_x, VAR_18->mb_y);
            return -1;
        }
    }

    if (!VAR_18->mb_intra) {
        int VAR_24, VAR_25, VAR_26;

        VAR_26= FUNC_4(&VAR_18->gb, VAR_13.table, VAR_2, 1);
        if(VAR_26<0){
            FUNC_0(VAR_18->avctx, VAR_0, "cbpy %d invalid at %d %d\n", VAR_20, VAR_18->mb_x, VAR_18->mb_y);
            return -1;
        }

        VAR_20|= VAR_26<<2;
        if(VAR_18->msmpeg4_version==1 || (VAR_20&3) != 3) VAR_20^= 0x3C;

        FUNC_1(VAR_18, 0, 0, &VAR_24, &VAR_25);
        VAR_24= FUNC_5(VAR_18, VAR_24, 1);
        VAR_25= FUNC_5(VAR_18, VAR_25, 1);

        VAR_18->mv_dir = VAR_9;
        VAR_18->mv_type = VAR_10;
        VAR_18->mv[0][0][0] = VAR_24;
        VAR_18->mv[0][0][1] = VAR_25;
        *VAR_23 = VAR_7 | VAR_5;
    } else {
        int VAR_27;
        if(VAR_18->msmpeg4_version==2){
            VAR_18->ac_pred = FUNC_3(&VAR_18->gb);
            VAR_27 = FUNC_4(&VAR_18->gb, VAR_13.table, VAR_2, 1);
            if (VAR_27 < 0) {
                FUNC_0(VAR_18->avctx, VAR_0, "cbpy vlc invalid\n");
                return -1;
            }
            VAR_20|= VAR_27<<2;
        } else{
            VAR_18->ac_pred = 0;
            VAR_27 = FUNC_4(&VAR_18->gb, VAR_13.table, VAR_2, 1);
            if (VAR_27 < 0) {
                FUNC_0(VAR_18->avctx, VAR_0, "cbpy vlc invalid\n");
                return -1;
            }
            VAR_20|= VAR_27<<2;
            if(VAR_18->pict_type==VAR_1) VAR_20^=0x3C;
        }
        *VAR_23 = VAR_6;
    }

    VAR_18->bdsp.clear_blocks(VAR_18->block[0]);
    for (VAR_22 = 0; VAR_22 < 6; VAR_22++) {
        if (FUNC_2(VAR_18, VAR_19[VAR_22], VAR_22, (VAR_20 >> (5 - VAR_22)) & 1, ((void*)0)) < 0)
        {
             FUNC_0(VAR_18->avctx, VAR_0, "\nerror while decoding block: %d x %d (%d)\n", VAR_18->mb_x, VAR_18->mb_y, VAR_22);
             return -1;
        }
    }
    return 0;
}
