
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef size_t uint8_t ;
typedef int int8_t ;
typedef int int16_t ;
struct TYPE_14__ {int (* clear_block ) (int*) ;} ;
struct TYPE_17__ {size_t* permutated; } ;
struct TYPE_16__ {size_t* permutated; } ;
struct TYPE_15__ {size_t* permutated; } ;
struct TYPE_19__ {int mb_intra; scalar_t__ codec_id; int rv10_version; scalar_t__ pict_type; int* last_dc; int* rv10_first_dc_coded; int mb_x; int mb_y; int* block_last_index; int h263_flv; scalar_t__ h263_aic; TYPE_12__* avctx; TYPE_1__ bdsp; int gb; scalar_t__ alt_inter_vlc; TYPE_4__ intra_h_scantable; TYPE_3__ intra_v_scantable; scalar_t__ h263_aic_dir; scalar_t__ ac_pred; TYPE_2__ intra_scantable; } ;
struct TYPE_18__ {int * rl_vlc; } ;
struct TYPE_13__ {int err_recognition; } ;
typedef TYPE_5__ RLTable ;
typedef TYPE_6__ MpegEncContext ;
typedef int GetBitContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,int,int ,int *,int ,int ,int,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,int *,int) ;
 int VAR_7 ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (TYPE_12__*,int ,char*,int,int,...) ;
 int FUNC_9 (TYPE_6__*,int*,int) ;
 TYPE_5__ VAR_8 ;
 TYPE_5__ VAR_9 ;
 int FUNC_10 (TYPE_6__*,int) ;
 int FUNC_11 (int *,int) ;
 int VAR_10 ;
 int FUNC_12 (int*) ;

__attribute__((used)) static int FUNC_13(MpegEncContext * VAR_11, int16_t * VAR_12,
                             int VAR_13, int VAR_14)
{
    int VAR_15, VAR_16, VAR_17, VAR_18;
    RLTable *VAR_19 = &VAR_8;
    const uint8_t *VAR_20;
    GetBitContext VAR_21= VAR_11->gb;

    VAR_20 = VAR_11->intra_scantable.permutated;
    if (VAR_11->h263_aic && VAR_11->mb_intra) {
        VAR_19 = &VAR_9;
        VAR_16 = 0;
        if (VAR_11->ac_pred) {
            if (VAR_11->h263_aic_dir)
                VAR_20 = VAR_11->intra_v_scantable.permutated;
            else
                VAR_20 = VAR_11->intra_h_scantable.permutated;
        }
    } else if (VAR_11->mb_intra) {

        if (VAR_6 && VAR_11->codec_id == VAR_0) {
          if (VAR_11->rv10_version == 3 && VAR_11->pict_type == VAR_4) {
            int VAR_22, VAR_23;
            VAR_22 = (VAR_13 <= 3 ? 0 : VAR_13 - 4 + 1);
            VAR_15 = VAR_11->last_dc[VAR_22];
            if (VAR_11->rv10_first_dc_coded[VAR_22]) {
                VAR_23 = FUNC_10(VAR_11, VAR_13);
                if (VAR_23 == 0xffff)
                    return -1;
                VAR_15 += VAR_23;
                VAR_15 = VAR_15 & 0xff;
                VAR_11->last_dc[VAR_22] = VAR_15;
            } else {
                VAR_11->rv10_first_dc_coded[VAR_22] = 1;
            }
          } else {
                VAR_15 = FUNC_11(&VAR_11->gb, 8);
                if (VAR_15 == 255)
                    VAR_15 = 128;
          }
        }else{
            VAR_15 = FUNC_11(&VAR_11->gb, 8);
            if((VAR_15&0x7F) == 0){
                FUNC_8(VAR_11->avctx, VAR_3, "illegal dc %d at %d %d\n", VAR_15, VAR_11->mb_x, VAR_11->mb_y);
                if (VAR_11->avctx->err_recognition & (VAR_1|VAR_2))
                    return -1;
            }
            if (VAR_15 == 255)
                VAR_15 = 128;
        }
        VAR_12[0] = VAR_15;
        VAR_16 = 1;
    } else {
        VAR_16 = 0;
    }
    if (!VAR_14) {
        if (VAR_11->mb_intra && VAR_11->h263_aic)
            goto not_coded;
        VAR_11->block_last_index[VAR_13] = VAR_16 - 1;
        return 0;
    }
retry:
    {
    FUNC_2(VAR_10, &VAR_11->gb);
    VAR_16--;
    for(;;) {
        FUNC_7(VAR_10, &VAR_11->gb);
        FUNC_1(VAR_15, VAR_18, VAR_10, &VAR_11->gb, VAR_19->rl_vlc[0], VAR_7, 2, 0);
        if (VAR_18 == 66) {
            if (VAR_15){
                FUNC_0(VAR_10, &VAR_11->gb);
                FUNC_8(VAR_11->avctx, VAR_3, "illegal ac vlc code at %dx%d\n", VAR_11->mb_x, VAR_11->mb_y);
                return -1;
            }

            if (VAR_5 && VAR_11->h263_flv > 1) {
                int VAR_24 = FUNC_4(VAR_10, &VAR_11->gb, 1);
                FUNC_5(VAR_10, &VAR_11->gb, 1);
                VAR_18 = FUNC_4(VAR_10, &VAR_11->gb, 7) + 1;
                if (VAR_24) {
                    FUNC_6(VAR_10, &VAR_11->gb, 1 + 7);
                    FUNC_7(VAR_10, &VAR_11->gb);
                    VAR_15 = FUNC_3(VAR_10, &VAR_11->gb, 11);
                    FUNC_6(VAR_10, &VAR_11->gb, 11);
                } else {
                    FUNC_5(VAR_10, &VAR_11->gb, 7);
                    VAR_15 = FUNC_3(VAR_10, &VAR_11->gb, 7);
                    FUNC_6(VAR_10, &VAR_11->gb, 1 + 7 + 7);
                }
            } else {
                VAR_18 = FUNC_4(VAR_10, &VAR_11->gb, 7) + 1;
                FUNC_5(VAR_10, &VAR_11->gb, 7);
                VAR_15 = (int8_t)FUNC_4(VAR_10, &VAR_11->gb, 8);
                FUNC_6(VAR_10, &VAR_11->gb, 7 + 8);
                if(VAR_15 == -128){
                    FUNC_7(VAR_10, &VAR_11->gb);
                    if (VAR_11->codec_id == VAR_0) {

                        VAR_15 = FUNC_3(VAR_10, &VAR_11->gb, 12);
                        FUNC_6(VAR_10, &VAR_11->gb, 12);
                    }else{
                        VAR_15 = FUNC_4(VAR_10, &VAR_11->gb, 5);
                        FUNC_5(VAR_10, &VAR_11->gb, 5);
                        VAR_15 |= FUNC_3(VAR_10, &VAR_11->gb, 6) * (1<<5);
                        FUNC_6(VAR_10, &VAR_11->gb, 5 + 6);
                    }
                }
            }
        } else {
            if (FUNC_4(VAR_10, &VAR_11->gb, 1))
                VAR_15 = -VAR_15;
            FUNC_6(VAR_10, &VAR_11->gb, 1);
        }
        VAR_16 += VAR_18;
        if (VAR_16 >= 64){
            FUNC_0(VAR_10, &VAR_11->gb);

            VAR_16 = VAR_16 - VAR_18 + ((VAR_18-1)&63) + 1;
            if (VAR_16 < 64) {

                VAR_12[VAR_20[VAR_16]] = VAR_15;
                break;
            }
            if(VAR_11->alt_inter_vlc && VAR_19 == &VAR_8 && !VAR_11->mb_intra){

                VAR_19 = &VAR_9;
                VAR_16 = 0;
                VAR_11->gb= VAR_21;
                VAR_11->bdsp.clear_block(VAR_12);
                goto retry;
            }
            FUNC_8(VAR_11->avctx, VAR_3, "run overflow at %dx%d i:%d\n", VAR_11->mb_x, VAR_11->mb_y, VAR_11->mb_intra);
            return -1;
        }
        VAR_17 = VAR_20[VAR_16];
        VAR_12[VAR_17] = VAR_15;
    }
    }
not_coded:
    if (VAR_11->mb_intra && VAR_11->h263_aic) {
        FUNC_9(VAR_11, VAR_12, VAR_13);
        VAR_16 = 63;
    }
    VAR_11->block_last_index[VAR_13] = VAR_16;
    return 0;
}
