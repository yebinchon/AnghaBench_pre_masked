
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_11__ {int (* vc1_inv_trans_4x8 ) (int *,int,int*) ;int (* vc1_inv_trans_4x8_dc ) (int *,int,int*) ;int (* vc1_inv_trans_8x4 ) (int *,int,int*) ;int (* vc1_inv_trans_8x4_dc ) (int *,int,int*) ;int (* vc1_inv_trans_4x4 ) (int *,int,int*) ;int (* vc1_inv_trans_4x4_dc ) (int *,int,int*) ;int (* vc1_inv_trans_8x8 ) (int*) ;int (* vc1_inv_trans_8x8_dc ) (int *,int,int*) ;} ;
struct TYPE_10__ {int (* add_pixels_clamped ) (int*,int *,int) ;} ;
struct TYPE_12__ {int (* clear_block ) (int*) ;} ;
struct TYPE_14__ {TYPE_1__ idsp; TYPE_3__ bdsp; int gb; } ;
struct TYPE_13__ {size_t tt_index; int halfpq; int** zz_8x8; int* zzi_8x8; TYPE_2__ vc1dsp; int pquantizer; int * zz_4x8; int fcm; int codingset2; int * zz_8x4; int res_rtm_flag; scalar_t__ ttmbf; TYPE_5__ s; } ;
typedef TYPE_4__ VC1Context ;
struct TYPE_16__ {int table; } ;
struct TYPE_15__ {int table; } ;
typedef TYPE_5__ MpegEncContext ;
typedef int GetBitContext ;


 int FUNC_0 (int) ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int* VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int* VAR_9 ;
 TYPE_9__* VAR_10 ;
 int** VAR_11 ;
 TYPE_8__* VAR_12 ;
 int FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int *,int,int*) ;
 int FUNC_5 (int *,int,int*) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int*,int *,int) ;
 int FUNC_8 (int *,int,int*) ;
 int FUNC_9 (int *,int,int*) ;
 int FUNC_10 (int *,int,int*) ;
 int FUNC_11 (int *,int,int*) ;
 int FUNC_12 (int *,int,int*) ;
 int FUNC_13 (TYPE_4__*,int*,int*,int*,int ) ;

__attribute__((used)) static int FUNC_14(VC1Context *VAR_13, int16_t VAR_14[64], int VAR_15,
                              int VAR_16, int VAR_17, int VAR_18,
                              uint8_t *VAR_19, int VAR_20, int VAR_21,
                              int *VAR_22)
{
    MpegEncContext *VAR_23 = &VAR_13->s;
    GetBitContext *VAR_24 = &VAR_23->gb;
    int VAR_25, VAR_26;
    int VAR_27 = 0;
    int VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
    int VAR_34 = VAR_17 & 7;
    int VAR_35 = 0;
    int VAR_36 = FUNC_0(VAR_16);

    VAR_23->bdsp.clear_block(VAR_14);

    if (VAR_17 == -1) {
        VAR_34 = VAR_11[VAR_13->tt_index][FUNC_2(VAR_24, VAR_12[VAR_13->tt_index].table, VAR_5, 1)];
    }
    if (VAR_34 == 131) {
        VAR_27 = ~(FUNC_2(VAR_24, VAR_10[VAR_13->tt_index].table, VAR_4, 1) + 1);
    }
    if ((VAR_34 != 128 && VAR_34 != 131)
        && ((VAR_13->ttmbf || (VAR_17 != -1 && (VAR_17 & 8) && !VAR_18))
            || (!VAR_13->res_rtm_flag && !VAR_18))) {
        VAR_27 = FUNC_1(VAR_24);
        if (VAR_27)
            VAR_27 ^= 3;
        if (VAR_34 == VAR_3 || VAR_34 == VAR_2)
            VAR_34 = 129;
        if (VAR_34 == VAR_1 || VAR_34 == VAR_0)
            VAR_34 = 130;
    }
    VAR_28 = VAR_36 * 2 + ((VAR_16 < 0) ? 0 : VAR_13->halfpq);


    if (VAR_34 == VAR_3 || VAR_34 == VAR_2) {
        VAR_27 = 2 - (VAR_34 == VAR_3);
        VAR_34 = 129;
    }
    if (VAR_34 == VAR_1 || VAR_34 == VAR_0) {
        VAR_27 = 2 - (VAR_34 == VAR_0);
        VAR_34 = 130;
    }
    switch (VAR_34) {
    case 128:
        VAR_35 = 0xF;
        VAR_25 = 0;
        VAR_31 = 0;
        while (!VAR_31) {
            int VAR_37 = FUNC_13(VAR_13, &VAR_31, &VAR_32, &VAR_33, VAR_13->codingset2);
            if (VAR_37 < 0)
                return VAR_37;
            VAR_25 += VAR_32;
            if (VAR_25 > 63)
                break;
            if (!VAR_13->fcm)
                VAR_30 = VAR_13->zz_8x8[0][VAR_25++];
            else
                VAR_30 = VAR_13->zzi_8x8[VAR_25++];
            VAR_14[VAR_30] = VAR_33 * VAR_28;
            if (!VAR_13->pquantizer)
                VAR_14[VAR_30] += (VAR_14[VAR_30] < 0) ? -VAR_36 : VAR_36;
        }
        if (!VAR_21) {
            if (VAR_25 == 1)
                VAR_13->vc1dsp.vc1_inv_trans_8x8_dc(VAR_19, VAR_20, VAR_14);
            else {
                VAR_13->vc1dsp.vc1_inv_trans_8x8(VAR_14);
                VAR_23->idsp.add_pixels_clamped(VAR_14, VAR_19, VAR_20);
            }
        }
        break;
    case 131:
        VAR_35 = ~VAR_27 & 0xF;
        for (VAR_26 = 0; VAR_26 < 4; VAR_26++) {
            VAR_31 = VAR_27 & (1 << (3 - VAR_26));
            VAR_25 = 0;
            VAR_29 = (VAR_26 & 1) * 4 + (VAR_26 & 2) * 16;
            while (!VAR_31) {
                int VAR_38 = FUNC_13(VAR_13, &VAR_31, &VAR_32, &VAR_33, VAR_13->codingset2);
                if (VAR_38 < 0)
                    return VAR_38;
                VAR_25 += VAR_32;
                if (VAR_25 > 15)
                    break;
                if (!VAR_13->fcm)
                    VAR_30 = VAR_9[VAR_25++];
                else
                    VAR_30 = VAR_6[VAR_25++];
                VAR_14[VAR_30 + VAR_29] = VAR_33 * VAR_28;
                if (!VAR_13->pquantizer)
                    VAR_14[VAR_30 + VAR_29] += (VAR_14[VAR_30 + VAR_29] < 0) ? -VAR_36 : VAR_36;
            }
            if (!(VAR_27 & (1 << (3 - VAR_26))) && !VAR_21) {
                if (VAR_25 == 1)
                    VAR_13->vc1dsp.vc1_inv_trans_4x4_dc(VAR_19 + (VAR_26 & 1) * 4 + (VAR_26 & 2) * 2 * VAR_20, VAR_20, VAR_14 + VAR_29);
                else
                    VAR_13->vc1dsp.vc1_inv_trans_4x4(VAR_19 + (VAR_26 & 1) * 4 + (VAR_26 & 2) * 2 * VAR_20, VAR_20, VAR_14 + VAR_29);
            }
        }
        break;
    case 129:
        VAR_35 = ~((VAR_27 & 2) * 6 + (VAR_27 & 1) * 3) & 0xF;
        for (VAR_26 = 0; VAR_26 < 2; VAR_26++) {
            VAR_31 = VAR_27 & (1 << (1 - VAR_26));
            VAR_25 = 0;
            VAR_29 = VAR_26 * 32;
            while (!VAR_31) {
                int VAR_39 = FUNC_13(VAR_13, &VAR_31, &VAR_32, &VAR_33, VAR_13->codingset2);
                if (VAR_39 < 0)
                    return VAR_39;
                VAR_25 += VAR_32;
                if (VAR_25 > 31)
                    break;
                if (!VAR_13->fcm)
                    VAR_30 = VAR_13->zz_8x4[VAR_25++] + VAR_29;
                else
                    VAR_30 = VAR_8[VAR_25++] + VAR_29;
                VAR_14[VAR_30] = VAR_33 * VAR_28;
                if (!VAR_13->pquantizer)
                    VAR_14[VAR_30] += (VAR_14[VAR_30] < 0) ? -VAR_36 : VAR_36;
            }
            if (!(VAR_27 & (1 << (1 - VAR_26))) && !VAR_21) {
                if (VAR_25 == 1)
                    VAR_13->vc1dsp.vc1_inv_trans_8x4_dc(VAR_19 + VAR_26 * 4 * VAR_20, VAR_20, VAR_14 + VAR_29);
                else
                    VAR_13->vc1dsp.vc1_inv_trans_8x4(VAR_19 + VAR_26 * 4 * VAR_20, VAR_20, VAR_14 + VAR_29);
            }
        }
        break;
    case 130:
        VAR_35 = ~(VAR_27 * 5) & 0xF;
        for (VAR_26 = 0; VAR_26 < 2; VAR_26++) {
            VAR_31 = VAR_27 & (1 << (1 - VAR_26));
            VAR_25 = 0;
            VAR_29 = VAR_26 * 4;
            while (!VAR_31) {
                int VAR_40 = FUNC_13(VAR_13, &VAR_31, &VAR_32, &VAR_33, VAR_13->codingset2);
                if (VAR_40 < 0)
                    return VAR_40;
                VAR_25 += VAR_32;
                if (VAR_25 > 31)
                    break;
                if (!VAR_13->fcm)
                    VAR_30 = VAR_13->zz_4x8[VAR_25++] + VAR_29;
                else
                    VAR_30 = VAR_7[VAR_25++] + VAR_29;
                VAR_14[VAR_30] = VAR_33 * VAR_28;
                if (!VAR_13->pquantizer)
                    VAR_14[VAR_30] += (VAR_14[VAR_30] < 0) ? -VAR_36 : VAR_36;
            }
            if (!(VAR_27 & (1 << (1 - VAR_26))) && !VAR_21) {
                if (VAR_25 == 1)
                    VAR_13->vc1dsp.vc1_inv_trans_4x8_dc(VAR_19 + VAR_26 * 4, VAR_20, VAR_14 + VAR_29);
                else
                    VAR_13->vc1dsp.vc1_inv_trans_4x8(VAR_19 + VAR_26*4, VAR_20, VAR_14 + VAR_29);
            }
        }
        break;
    }
    if (VAR_22)
        *VAR_22 |= VAR_34 << (VAR_15 * 4);
    return VAR_35;
}
