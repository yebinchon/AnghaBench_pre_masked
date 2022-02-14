
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int idct_permutation; } ;
struct TYPE_10__ {scalar_t__ pict_type; int progressive_frame; int alternate_scan; int frame_pred_frame_dct; int q_scale_type; int intra_v_scantable; TYPE_1__ idsp; int intra_h_scantable; int intra_scantable; int inter_scantable; scalar_t__ intra_dc_precision; scalar_t__ dct_precision; int decode_mb; scalar_t__ interlaced_dct; scalar_t__ partitioned_frame; } ;
struct TYPE_11__ {scalar_t__ shape; TYPE_2__ m; } ;
typedef TYPE_2__ MpegEncContext ;
typedef TYPE_3__ Mpeg4DecContext ;
typedef int GetBitContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(Mpeg4DecContext *VAR_6, GetBitContext *VAR_7)
{
    MpegEncContext *VAR_8 = &VAR_6->m;

    if (FUNC_5(VAR_7) <= 32)
        return 0;

    VAR_8->partitioned_frame = 0;
    VAR_8->interlaced_dct = 0;
    VAR_8->decode_mb = VAR_5;

    FUNC_0(VAR_6, VAR_7);

    FUNC_9(VAR_7, 10);
    FUNC_9(VAR_7, 2);
    VAR_8->pict_type = FUNC_3(VAR_7, 2) + VAR_0;
    if (FUNC_4(VAR_7)) {
        FUNC_10(VAR_7);
        FUNC_10(VAR_7);
        VAR_8->progressive_frame = FUNC_4(VAR_7) ^ 1;
    }

    if (VAR_8->pict_type == VAR_0) {
        if (FUNC_4(VAR_7))
            FUNC_8(VAR_8);
    }

    if (VAR_6->shape != VAR_1) {
        VAR_8->alternate_scan = FUNC_4(VAR_7);
        VAR_8->frame_pred_frame_dct = FUNC_4(VAR_7);
        VAR_8->dct_precision = FUNC_3(VAR_7, 2);
        VAR_8->intra_dc_precision = FUNC_3(VAR_7, 2);
        VAR_8->q_scale_type = FUNC_4(VAR_7);
    }

    if (VAR_8->alternate_scan) {
        FUNC_2(VAR_8->idsp.idct_permutation, &VAR_8->inter_scantable, VAR_3);
        FUNC_2(VAR_8->idsp.idct_permutation, &VAR_8->intra_scantable, VAR_3);
        FUNC_2(VAR_8->idsp.idct_permutation, &VAR_8->intra_h_scantable, VAR_3);
        FUNC_2(VAR_8->idsp.idct_permutation, &VAR_8->intra_v_scantable, VAR_3);
    } else {
        FUNC_2(VAR_8->idsp.idct_permutation, &VAR_8->inter_scantable, VAR_4);
        FUNC_2(VAR_8->idsp.idct_permutation, &VAR_8->intra_scantable, VAR_4);
        FUNC_2(VAR_8->idsp.idct_permutation, &VAR_8->intra_h_scantable, VAR_2);
        FUNC_2(VAR_8->idsp.idct_permutation, &VAR_8->intra_v_scantable, VAR_3);
    }

    FUNC_6(VAR_8);

    FUNC_7(VAR_7);
    FUNC_1(VAR_8, VAR_7, 4);

    return 0;
}
